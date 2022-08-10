# :fire: The B.U.R.N. Meter: A Portable UV Index Meter :fire:
B.U.R.N. Meter is an Arduino Teensy based UV index meter with a ST7789 display capable of measuring UV index and onboard battery voltage in real time.

## Bill of Materials:
| Name | Description | Amount | Vendor |
| :---: | :---: | :---: | :---: |
| Arduino Teensy 4.0 | Microcontroller to run the system, read sensor value, and drive display screen | 1 | [Sparkfun](https://www.sparkfun.com/products/15583) |
| ST7789 1.3" LCD Display Screen | Used to display graphics | 1 | [Makerfabs](https://www.makerfabs.com/1.3-inch-colorful-tft-module-st7789.html) |
| 3.7v LiPo Battery | Powers the system when not connected via USB | 1 | [Amazon](https://www.amazon.com/gp/product/B07C9RQQMX/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1) |
| TP4056 Lithium Battery Charging Board | Ensure battery is charging/discharging at proper conditions | 1 | [Amazon](https://www.amazon.com/gp/product/B00LTQU2RK/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1) |
| GUVA-S12SD | Breakout board for an analog UV sensor | 1 | [Adafruit](https://www.adafruit.com/product/1918) |
| S7V8F3 | Provide regulated 3.3v from battery voltage to power the system | 1 | [Pololu](https://www.pololu.com/product/2122) |
| Rocker Switch | Turns overall device on and off | 1 | [DigiKey](https://www.digikey.com/en/products/detail/e-switch/RA812C1121/3778076?utm_adgroup=Rocker%20Switches&utm_source=google&utm_medium=cpc&utm_campaign=Shopping_Product_Switches_NEW&utm_term=&utm_content=Rocker%20Switches) |
| 10k Resistors | Form voltage divider between battery and analog input pin to prevent voltage from exceeding reference | 2 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/CFR-25JB-52-10K/338) |
| Alpha Nanotech Fused Quartz Plates (Industrial Grade, 30 x 30 x 1 mm) | Protects UV sensor while allowing UV ray to pass through | 1 | [Amazon](https://www.amazon.com/Quartz-Plates-50-30-pcs/dp/B07V2K5X6Y?th=1) |

## Circuit Diagram
<p align="center">
  <img src="https://github.com/billyen33/Portable_UV_Index_Meter/blob/main/circuit.png?raw=true" />
</p>

## Credit
[Changing image into bitmap to be saved in flash and displayed on screen](https://www.instructables.com/Converting-Images-to-Flash-Memory-Iconsimages-for-/)

[Interfacing ST7789 with Arduino](https://simple-circuit.com/arduino-st7789-ips-tft-display-example/)

