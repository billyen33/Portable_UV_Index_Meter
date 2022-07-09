#include "battery.h"
#include <Arduino.h>

float read_voltage(int pin){
  int a = analogRead(pin);
  //int a = adc_read(pin);
  return 3.36*a/1023;
}

float bat_percentage(){
  float v = 2*read_voltage(A3); // take into account the voltage divider loss
  float c = 0; //capacity in percentage
  // Use a series of linear interpolation for rough estimate of capacity for 1S LiPo battery
  // Source: https://blog.ampow.com/lipo-voltage-chart/
  if (v > 4.15){
    c = ((4.15-4.2)/(95-100))*(v-4.2)+100;
  }
  else if (v <= 4.15 && v > 4.11){
    c = ((4.11-4.15)/(90-95))*(v-4.15)+95;
  }
  else if (v <= 4.11 && v > 4.08){
    c = ((4.08-4.11)/(85-90))*(v-4.11)+90;
  }
  else if (v <= 4.08 && v > 4.02){
    c = ((4.02-4.08)/(80-85))*(v-4.08)+85;
  }
  else if (v <= 4.02 && v > 3.98){
    c = ((3.98-4.02)/(75-80))*(v-4.02)+80;
  }
  else if (v <= 3.98 && v > 3.95){
    c = ((3.95-3.98)/(70-75))*(v-3.98)+75;
  }
  else if (v <= 3.95 && v > 3.91){
    c = ((3.91-3.95)/(65-70))*(v-3.95)+70;
  }
  else if (v <= 3.91 && v > 3.87){
    c = ((3.87-3.91)/(60-65))*(v-3.91)+65;
  }
  else if (v <= 3.87 && v > 3.85){
    c = ((3.85-3.87)/(55-60))*(v-3.87)+60;
  }
  else if (v <= 3.85 && v > 3.84){
    c = ((3.84-3.85)/(50-55))*(v-3.85)+55;
  }
  else if (v <= 3.84 && v > 3.82){
    c = ((3.82-3.84)/(45-50))*(v-3.84)+50;
  }
  else if (v <= 3.82 && v > 3.8){
    c = ((3.8-3.82)/(40-45))*(v-3.82)+45;
  }
  else if (v <= 3.8 && v > 3.79){
    c = ((3.79-3.8)/(35-40))*(v-3.8)+40;
  }
  else if (v <= 3.79 && v > 3.77){
    c = ((3.77-3.79)/(30-35))*(v-3.79)+35;
  }
  else if (v <= 3.77 && v > 3.75){
    c = ((3.75-3.77)/(25-30))*(v-3.77)+30;
  }
  else if (v <= 3.75 && v > 3.73){
    c = ((3.73-3.75)/(20-25))*(v-3.75)+25;
  }
  //yellow zone
  else if (v <= 3.73 && v > 3.71){
    c = ((3.71-3.73)/(15-20))*(v-3.73)+20;
  }
  //danger zone
  else if (v <= 3.71 && v > 3.69){
    c = ((3.69-3.71)/(10-15))*(v-3.71)+15;
  }
  else if (v <= 3.69 && v > 3.61){
    c = ((3.61-3.69)/(5-10))*(v-3.69)+10;
  }
  else if (v <= 3.61 && v > 3.27){
    c = ((3.27-3.61)/(0-5))*(v-3.61)+5;
  }
  else if (v <= 3.27){
    c = 0;
  }

  // make sure battery capacity never exceeds 100 or drop below 0
  if (c > 100){
    c = 100;
  }
  if (c < 0){
    c = 0;
  }
  
  return c;
}
