# :fire: The B.U.R.N. Meter: A Portable UV Index Meter :fire:
B.U.R.N. Meter is an Arduino Teensy based UV index meter with a ST7789 display capable of measuring UV index and onboard battery voltage in real time. The device features a user-friendly UI that shows the current UV index, the recommended time user should stay outside before getting sunburned, the remaining battery capacity, and dynamic graphics that change based on the measured radiation level. See the B.U.R.N. Meter [Instructable page](https://www.instructables.com/The-BURN-Meter-Rechargeable-Arduino-UV-Index-Meter/) for detail on its conceptualization and construction.
<p align="center">
  <img src="BURN Meter.jpg" width="300"/>
</p>

## Bill of Materials:
| Name | Description | Amount | Vendor |
| :---: | :---: | :---: | :---: |
| Arduino Teensy 4.0 | Microcontroller to run the system, read sensor value, and drive display screen | 1 | [Sparkfun](https://www.sparkfun.com/products/15583) |
| ST7789 1.3" LCD Display Screen | Displays graphics | 1 | [Makerfabs](https://www.makerfabs.com/1.3-inch-colorful-tft-module-st7789.html) |
| 3.7v LiPo Battery | Powers the system when not connected via USB | 1 | [Amazon](https://www.amazon.com/gp/product/B07C9RQQMX/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1) |
| TP4056 Lithium Battery Charging Board | Ensures battery is charging/discharging at proper conditions | 1 | [Amazon](https://www.amazon.com/gp/product/B00LTQU2RK/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1) |
| GUVA-S12SD | Breakout board for an analog UV sensor | 1 | [Adafruit](https://www.adafruit.com/product/1918) |
| S7V8F3 | Provides regulated 3.3v from battery voltage to power the system | 1 | [Pololu](https://www.pololu.com/product/2122) |
| Rocker Switch | Turns overall device on or off | 1 | [DigiKey](https://www.digikey.com/en/products/detail/e-switch/RA812C1121/3778076?utm_adgroup=Rocker%20Switches&utm_source=google&utm_medium=cpc&utm_campaign=Shopping_Product_Switches_NEW&utm_term=&utm_content=Rocker%20Switches) |
| 10k Resistors | Form voltage divider between battery and analog input pin to prevent voltage from exceeding reference | 2 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/CFR-25JB-52-10K/338) |
| Alpha Nanotech Fused Quartz Plates (Industrial Grade, 30 x 30 x 1 mm) | Protects UV sensor while allowing UV ray to pass through | 1 | [Amazon](https://www.amazon.com/Quartz-Plates-50-30-pcs/dp/B07V2K5X6Y?th=1) |
| 1/8" Thick Acrylic Sheet | Protects display screen | 1 | [Amazon](https://www.amazon.com/12-Clear-Acrylic-Sheet-Plexiglass/dp/B0899K949Z/ref=sr_1_1_sspa?crid=11Z2CKLK9HV9E&keywords=1%2F8%22+acrylic+sheet&qid=1660278591&sprefix=1%2F8+acrylic+sheet%2Caps%2C80&sr=8-1-spons&psc=1) |
| M2 x 5 mm Screws | Fastener for screen and UV sensor | 5 | [McMaster-Carr](https://www.mcmaster.com/99461A914/) |
| M2 x 10 mm Screws | Fastener for solder board and housing back cover | 8 | [McMaster-Carr](https://www.mcmaster.com/90380A328/) |
| Solder Board | Holds overall circuit | 1 | [Amazon](https://www.amazon.com/ElectroCookie-Solderable-Breadboard-Electronics-Gold-Plated/dp/B07ZV8FWM4/ref=sr_1_17_sspa?crid=1QWR0IIP8EYTR&keywords=solder+board&qid=1660109201&sprefix=solder+board%2Caps%2C77&sr=8-17-spons&psc=1) |
| 22 AWG Solid Copper Wires | Electrical connection between parts | 1 | [Amazon](https://www.amazon.com/Gauge-Wire-Solid-Hookup-Wires/dp/B088KQFHV7/ref=sr_1_1_sspa?crid=3BQ1M6J0D5MS2&keywords=22+awg+solid+copper+wire&qid=1660368051&sprefix=22+awg+solid+copper+wire%2Caps%2C86&sr=8-1-spons&psc=1) |

### Tools Needed:
- Hot glue
- 3D printer
- Wire stripper/cutter
- Soldering iron and solder
- Small M2 Phillips screwdriver (or equivalent if using a different fastener from the one above)
- Electronics tape (optional but recommended)
- Laser cutter (optional, can substitute with a saw or something that can cut acrylic)

*Note: The exact breadboard used for this project is no longer on the market, so the board linked above may have different dimensions from the one the housing is designed for, requiring the user to slightly modify the housing model in order to make the board fit.

## Software Dependencies
- [Adafruit GFX library](https://github.com/adafruit/Adafruit-GFX-Library)
- [Adafruit ST7789 library](https://github.com/adafruit/Adafruit-ST7735-Library)
- The latest version of the [Arduino IDE](https://www.arduino.cc/en/software) as well as the [Teensyduino](https://www.pjrc.com/teensy/td_download.html) add-on

## Circuit Diagram
<p align="center">
  <img src="circuit.svg"/>
</p>

## CAD
The full 3D printable models, reference models, and assembly for this project can be exported as SOLIDWORKS or STEP files from [Onshape](https://cad.onshape.com/documents/7501d4a5e180f8697daa31dc/w/079db085b933182b8434c3a9/e/a7e2366d53fa75d2b895b4b3?renderMode=0&uiState=62f5dbd7cfcfff1c8c76f3f0)
<p align="center">
  <img src="CAD/ExplodedView.png" width="300"/>
</p>

## Design and Construction
See the [B.U.R.N. Meter Instructable page](https://www.instructables.com/The-BURN-Meter-Rechargeable-Arduino-UV-Index-Meter/) on how to build your own rechargeable UV index meter!

## Credit
[Changing image into bitmap to be saved in flash and displayed on screen](https://www.instructables.com/Converting-Images-to-Flash-Memory-Iconsimages-for-/)

[Interfacing ST7789 with Arduino](https://simple-circuit.com/arduino-st7789-ips-tft-display-example/)

[UV Index explained and how to stay sun-safe this summer](https://abc17news.com/weather/2020/06/11/uv-index-explained-and-how-to-stay-sun-safe-this-summer/)
