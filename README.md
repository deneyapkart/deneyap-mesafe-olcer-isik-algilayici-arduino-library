# Deneyap Proximity&Light Sensor LTR553 Library
[FOR TURKISH VERSION](docs/README_tr.md) ![trflag](https://github.com/deneyapkart/deneyapkart-arduino-core/blob/master/docs/tr.png)

***** Add photo ****

Arduino library for Deneyap Proximity&Light Sensor LTR553

## :mag_right:Specifications 
- `Product ID` **M28**, **mpv1.0**
- `MCU` LTR553
- `Weight` 
- `Module Dimension`
- `I2C address` 0x23

| Address |  | 
| :---    | :---     |
| 0x23 | default address |

## :closed_book:Documentation
Deneyap Proximity&Light Sensor LTR553

[LTR553-datasheet](https://optoelectronics.liteon.com/upload/download/DS86-2014-0007/LTR-553ALS-01_DS_V1.pdf)

[How to install a Arduino Library](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Proximity&Light Sensor LTR553
This Arduino library allows you to use Deneyap Proximity&Light Sensor LTR553 with I2C peripheral. You can use this library in your projects with any Arduino compatible board with I2C peripheral.

## :globe_with_meridians:Repository Contents
- `/docs ` README_tr.md and product photos
- `/examples ` Examples with .ino extension sketches
- `/src ` Source files (.cpp .h)
- `keywords.txt ` Keywords from this library that will be highlighted in the Arduino IDE
- `library.properties ` General library properties for the Arduino package manager

## Version History
1.0.0 - initial release

## :rocket:Hardware Connections
- Deneyap Proximity&Light Sensor LTR553 and Board can be connected with I2C cable
- or 3V3, GND, SDA and SCL pins can be connected with jumper cables

|Proximity&Light Sensor| Function | Board pins | 
|:--- |   :---  | :---|
|3.3V | Power   |3.3V |      
|GND  | Ground  | GND | 
|SDA  | I2C Data  | SDA pin |
|SCL  | I2C Clock | SCL pin |
|INT  | Interrupt|any GPIO pin |

## :bookmark_tabs:License Information
Please review the [LICENSE](https://github.com/deneyapkart/deneyap-mesafe-olcer-isik-algilayici-arduino-library/blob/master/LICENSE) file for license information.
