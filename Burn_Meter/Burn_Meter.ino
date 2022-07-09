#include "TFT_display.h"
#include "battery.h"
#include "UV_sensor.h"
float last_percent = 100;
float last_index = 100;
float percent_now;
float index_now;

void setup(void) {
  Serial.begin(9600);
  init_screen();
}

void loop() {
  percent_now = bat_percentage();
  index_now = UV_index();

  //only update screen if there are changes in reading
  if (percent_now != last_percent){
    display_battery(percent_now);
    last_percent = percent_now;
  }
  if (index_now != last_index){
    display_texts(index_now);
    display_pic(index_now);
    last_index = index_now;
  }
}
