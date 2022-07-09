#include "battery.h"
#include "UV_sensor.h"
#include <Arduino.h>

int UV_index(){
  float v = read_voltage(A2);
  // convert voltage to index using this crude formula
  // source: https://www.adafruit.com/product/1918
  return round(v/0.1);
}
