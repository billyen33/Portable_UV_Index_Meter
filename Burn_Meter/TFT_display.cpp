#include "TFT_display.h"
#include "bitmap.h"

// ST7789 TFT module connections
#define TFT_CS    10  // define chip select pin
#define TFT_DC     14  // define data/command pin
#define TFT_RST    15  // define reset pin, or set to -1 and connect to Arduino RESET pin
 
// Initialize Adafruit ST7789 TFT library
Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void init_screen(){
  // if the display has CS pin try with SPI_MODE0
  tft.init(240, 240, SPI_MODE2);    // Init ST7789 display 240x240 pixel
  // if the screen is flipped, remove this command
  tft.setRotation(2);
  tft.fillScreen(ST77XX_BLACK);
  //initialize text configuration
  tft.setTextWrap(false);
}

void display_texts(int index) {
  int uv_index_h = 4;
  int num_h = 10;
  int intensity_h = 4;
  int burn_time_h = 2;

  //wipe out screen
  tft.fillRect(tft.width()/2-2*6*num_h/2, 60, num_h*6*2, num_h*1*10, ST77XX_BLACK);
  tft.fillRect(0, 150, tft.width(), intensity_h*10, ST77XX_BLACK);
  tft.fillRect(150, 150+6*10, tft.width()-150, burn_time_h*8, ST77XX_BLACK);
  
  //tft.fillScreen(ST77XX_BLACK);
  
  //Print "UV Index" title
  tft.setCursor(5, 5);
  tft.setTextColor(ST77XX_YELLOW);
  tft.setTextSize(uv_index_h);
  tft.println("UV Index");
  tft.println("");

  //Print index
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(num_h);
  tft.setCursor(tft.width()/2-String(index).length()*6*num_h/2, 60); //each char gets 6 pixels wider per text size increase
  tft.println(String(index));

  //Change printed intensity and burn time depending on index
  char intensity[10];
  char burn_time[8];
  if (index <= 2){
    strncpy(intensity, "LOW", sizeof(intensity));
    intensity[sizeof(intensity)-1] = 0;
    strncpy(burn_time, "1+ hr", sizeof(burn_time));
    burn_time[sizeof(burn_time)-1] = 0;
  }
  else if (index > 2 && index <= 5){
    strncpy(intensity, "MODERATE", sizeof(intensity));
    intensity[sizeof(intensity)-1] = 0;
    strncpy(burn_time, "40 min", sizeof(burn_time));
    burn_time[sizeof(burn_time)-1] = 0;
  }
  else if (index > 5 && index <= 7){
    strncpy(intensity, "HIGH", sizeof(intensity));
    intensity[sizeof(intensity)-1] = 0;
    strncpy(burn_time, "30 min", sizeof(burn_time));
    burn_time[sizeof(burn_time)-1] = 0;
  }
  else if (index > 7 && index < 11){
    strncpy(intensity, "VERY HIGH", sizeof(intensity));
    intensity[sizeof(intensity)-1] = 0;
    strncpy(burn_time, "20 min", sizeof(burn_time));
    burn_time[sizeof(burn_time)-1] = 0;
  }
  else if (index >= 11){
    strncpy(intensity, "EXTREME", sizeof(intensity));
    intensity[sizeof(intensity)-1] = 0;
    strncpy(burn_time, "15 min", sizeof(burn_time));
    burn_time[sizeof(burn_time)-1] = 0;
  }
  
  //Print interpretation of index
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(4);
  tft.setCursor(tft.width()/2-strlen(intensity)*6*intensity_h/2, 150);
  for (int i = 0; i < strlen(intensity); i++){
    tft.print(intensity[i]);
  }
  tft.println("");

  //Print burn time
  tft.setTextColor(ST77XX_YELLOW);
  tft.setTextSize(burn_time_h);
  tft.setCursor(20, 150+6*10);
  tft.print("BURN TIME: ");
  
  for (int i = 0; i < strlen(burn_time); i++){
    tft.print(burn_time[i]);
  }
}

void display_battery(float percent) {
  int bat_x = 15;
  int bat_y = 50;
  int bat_r = 2;
  int bat_w = 30;
  int bat_h = 60;
  int white_edge = 2;
  int bat_div = 4; //num of divisions of the battery
  tft.fillRoundRect(bat_x, bat_y, bat_w, bat_h, bat_r, ST77XX_WHITE); //draw the battery white background
  tft.fillRoundRect(bat_x*2-7, bat_y-4, 14, 5, bat_r, ST77XX_WHITE); //draw the white battery cap
  
  //color in battery based on battery percentage
  uint16_t color;
  if (percent >= 30){
    color = ST77XX_GREEN;
  }
  else if (percent < 30 && percent > 15){ 
    color = ST77XX_YELLOW;
  }
  else if (percent <= 15){ 
    color = ST77XX_RED;
  }
  tft.fillRoundRect(bat_x+white_edge, (bat_y+white_edge)+((bat_h-2*white_edge)-round((bat_h-2*white_edge)*percent/100)), bat_w-2*white_edge, round((bat_h-2*white_edge)*percent/100), bat_r, color);

  //white lines on battery to show division
  for (int i=1; i<bat_div+1; i++){
    tft.drawLine(bat_x+white_edge, bat_y+white_edge+round((bat_h-2*white_edge)/bat_div)*i, bat_x+white_edge+bat_w-2*white_edge, bat_y+white_edge+round((bat_h-2*white_edge)/bat_div)*i, ST77XX_WHITE);
  }

  if (percent <= 10){
    //Print warning symbol over white line
    tft.setTextColor(ST77XX_RED);
    tft.setTextSize(5);
    tft.setCursor(bat_x+white_edge+bat_w/2-5*6/2, 60);
    tft.print("!"); 
  }
  
  //display percentage
  tft.fillRect(bat_x+white_edge+bat_w/2-5*6/2, 115, 60, 10, ST77XX_BLACK);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(1);
  tft.setCursor(bat_x+white_edge+bat_w/2-5*6/2, 115);
  tft.print(String(percent, 1));
  tft.print("%"); 
}

void display_pic(int index){
  //Case 2: Multi Colored Images/Icons
  int h = 69,w = 60, row, col, buffidx=0;
  uint16_t color;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      // adjust color based on index to make face more red if UV is strong
      color = adjust_redness(pgm_read_word(face + buffidx), index); //face is the bitmap we are using
      tft.drawPixel(180+col, 60+row, color);
      buffidx++;
    } // end pixel
  }
}

uint16_t adjust_redness(uint16_t color, int index){
  // color is a 16 bit RGB number in format RRRRR-GGGGGG-BBBBB
  // index is the UV index we get from our sensor
  int r = color >> 11;
  int new_r = r+(r*index/5);
  if (new_r > 0b11111){
    new_r = 0b11111; //make sure we don't overflow these bits
  }
  uint16_t new_color = (color & 0b0000011111111111) | (new_r << 11); 
  return new_color; //return hue-adjusted index
}
