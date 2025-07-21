# LINE TAPE 32CH PRO

This repository contains a prototype of an Art-Net controller with 32 WS2811 outputs. The project is still under development.

## Firmware

The firmware sketch in `firmware/` targets an ESP32 board. To compile and upload using the Arduino IDE:

1. Install the ESP32 board support via the Boards Manager.
2. Open `firmware/main.ino`.
3. Update the WiFi credentials in the sketch.
4. Build and upload to your ESP32 module.

The code currently only connects to WiFi. Logic for receiving Art-Net packets and updating the 32 channels will be added in future revisions.

## Hardware files

The files in `easyeda/` and `gerber/` are **placeholders** and do not contain the real PCB design or Gerber outputs. A small image in `docs/` is also only a placeholder. Actual board files will be published later.

## Bill of Materials

A minimal bill of materials is provided in `bom/BOM_LINE_TAPE_32CH.csv`.

## License

This project is released under the MIT License. See the [LICENSE](LICENSE) file for details.
