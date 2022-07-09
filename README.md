# The Burn Meter: A Portable UV Index Meter
Burn Meter is an Arduino Teensy based UV index meter with a ST7789 display capable of measuring UV index and onboard battery voltage in real time.

Bill of Materials:
| Name | Description | Amount | Vendor |
| :---: | :---: | :---: | :---: |
| Arduino Teensy 4.0 | Microcontroller to run the system, read sensor value, and drive display screen | 1 | [Sparkfun](https://www.sparkfun.com/products/15583) |
| ST7789 1.3" LCD Display Screen | Used to display graphics | 1 | [Makerfabs](https://www.makerfabs.com/1.3-inch-colorful-tft-module-st7789.html) |
| 3.7v LiPo Battery | Powers the system when not connected via USB | 1 | [Amazon](https://www.amazon.com/gp/product/B07C9RQQMX/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1) |
| TP4056 Lithium Battery Charging Board | Ensure battery is charging/discharging at proper conditions | 1 | [Amazon](https://www.amazon.com/gp/product/B00LTQU2RK/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1) |
| GUVA-S12SD | Breakout board for an analog UV sensor | 1 | [Adafruit](https://www.adafruit.com/product/1918) |
| S7V8F3 | Provide regulated 3.3v from battery voltage to power the system | 1 | [Pololu](https://www.pololu.com/product/2122) |
| 10k resistors | Form voltage divider between battery and analog input pin to prevent voltage from exceeding reference | 2 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/CFR-25JB-52-10K/338) |
