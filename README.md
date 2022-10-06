# RelayFi (Still working on repo)
RelayFi is a 4 channel smart relay board powered by ESP32-WROOM that has the ability to safely control up to 4 appliances or devices on a load of 250 VAC/7A, 30 VDC/10A, and photo-coupling isolation Optocoupler for safety. Users can control their appliances using the third party app on their electronic device thanks to RelayFi.

## Block Details

<img src="https://github.com/coredataglobal/RelayFi/blob/main/Images/RelayFi-comp.jpg" width="500" height="500"/>

## RelayFi Pinout

| Board Pins  | ESP32-Wroom GPIO Pins |
|  :---:      |  :---:                |
| Relay 1     | IO18  |
| Relay 2     | IO19  |
| Relay 3     | IO23  |
| Relay 4     | IO25  |
| SDA         | IO21  |
| SCL         | IO22  |

## How to use RelayFi with Arduino Ide?

* Before Starting with RelayFi, You must install ESP32 board in arduino ide, Please follow below tutorial to install the ESP32 Boards in arduino Ide.

<a href="https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/"> https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/ </a>

* Now navigate to **Tools Menu >> Boards >> ESP32 Arduino**, and select board as **ESP32 Dev Module**.

<img src="https://hackster.imgix.net/uploads/attachments/1504271/select_board_1xwjExM2jT.png?auto=compress%2Cformat&w=740&h=555&fit=max" /> 

* Connect board with your PC/Laptop, and **select COM port**.
* Make sure the relay selection jumper is connected.
* Now open Arduino code in Arduino and click on upload button to upload the code to your board. It will automatically upload the code to your RelayFi noard, No need to press the reset button while uploading the code.

## Tutorials

Setup Tasmota with RelayFi : https://github.com/coredataglobal/RelayFi/wiki/RelayFi-with-Tasmota
