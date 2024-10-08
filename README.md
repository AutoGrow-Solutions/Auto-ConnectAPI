# Auto-Connect via ESP-12F

## Table of Contents

- [Auto-Connect via ESP-12F](#auto-connect-via-esp-12f)
  - [Auto-Connect Installing ESP-12F Board Package in Arduino IDE](#auto-connect-installing-esp-12f-board-package-in-arduino-ide)
    - [Step 1: Open the Arduino IDE](#step-1-open-the-arduino-ide)
    - [Step 2: Add ESP8266 Board URL](#step-2-add-esp8266-board-url)
    - [Step 3: Open Boards Manager](#step-3-open-boards-manager)
    - [Step 4: Install the ESP8266 Platform](#step-4-install-the-esp8266-platform)
    - [Step 5: Select Your ESP8266 Board](#step-5-select-your-esp8266-board)
    - [Step 6: Restart Arduino IDE (Optional)](#step-6-restart-arduino-ide-optional)
    - [Step 7: Verifying the Installation](#step-7-verifying-the-installation)
- [NodeMCU to Arduino Mega Communication](#nodemcu-to-arduino-mega-communication)
  - [LED Setup](#led-setup)
  - [Important Notes](#important-notes)
- [What to Run](#what-to-run)
- [Running the Application](#running-the-application)

---

## Auto-Connect Installing ESP-12f Board Package in Arduino IDE

### Step 1: Open the Arduino IDE
- Launch the Arduino IDE.

### Step 2: Add ESP8266 Board URL
1. Go to `File > Preferences`.
2. In the "Additional Boards Manager URLs" field, paste the following URL:

    ```bash
    http://arduino.esp8266.com/stable/package_esp8266com_index.json
    ```

3. If you already have other URLs listed, separate them with a comma.

### Step 3: Open Boards Manager
1. Go to `Tools > Board > Boards Manager`.

### Step 4: Install the ESP8266 Platform
1. In the Boards Manager window, search for `ESP8266`.
2. Click on the entry labeled `esp8266 by ESP8266 Community`.
3. Click **Install**. This will install the latest version of the ESP8266 platform.

### Step 5: Select Your ESP8266 Board
1. Once the installation is complete, go to `Tools > Board` and scroll down to select your ESP8266 board model (e.g., `NodeMCU 1.0 (ESP-12E Module)`).

### Step 6: Restart Arduino IDE (Optional)
- If the boards still don't appear, try closing and reopening the Arduino IDE.

### Step 7: Verifying the Installation
1. After installing the ESP8266 board package, go to `Tools > Board` and ensure you can now select an ESP8266 board from the list.

---

## NodeMCU to Arduino Mega Communication

This setup establishes serial communication between a NodeMCU and an Arduino Mega. Additionally, an LED is connected to the Arduino for simple on/off control.

| NodeMCU Pin | Arduino Mega Pin |
|-------------|------------------|
| TX (Transmitter)  | RX1 (Pin 19)  |
| RX (Receiver)     | TX1 (Pin 18)  |
| GND               | GND           |

### LED Setup

| LED Pin  | Arduino Mega Pin |
|----------|------------------|
| Anode (+)  | Pin 7            |
| Cathode (-) | GND            |

### Important Notes

- Ensure that the ground (GND) of the NodeMCU and the Arduino Mega are connected to ensure a common reference voltage for serial communication.
- The RX and TX pins of the NodeMCU and Arduino Mega should be cross-connected (TX to RX and RX to TX).
- Baud rate of 9600


---

## What to Run 

1. Get the ESP-12f IP Adress from the code titled `Wifi_IP.txt` and Run it.
2. Get the Code titled `Arduino` run it on the Arduino
3. Get the Code titled `ESP-12f` run it on the ESP

---

## Running the Application

Once youve gotten the IP address and uploaded the Arduino mega 2560 code and the Nodemcu ESP-12f code you can go to your browese hereafter and enter a URL example 
```
http://192.168.1.153
``` 
this can be followed up with a `http://192.168.1.153/led=on` to turn it off and a `http://192.168.1.153/led=off` to turn it on as per the image below :

![image](https://github.com/user-attachments/assets/972539b3-7fc4-4c0d-941a-5f7f5b38a8bc)



