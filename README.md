# Auto-Connect Installing ESP-12f Board Package in Arduino IDE

## Step 1: Open the Arduino IDE
- Launch the Arduino IDE.

## Step 2: Add ESP8266 Board URL
1. Go to `File > Preferences`.
2. In the "Additional Boards Manager URLs" field, paste the following URL:

    ```bash
    http://arduino.esp8266.com/stable/package_esp8266com_index.json
    ```

3. If you already have other URLs listed, separate them with a comma.

## Step 3: Open Boards Manager
1. Go to `Tools > Board > Boards Manager`.

## Step 4: Install the ESP8266 Platform
1. In the Boards Manager window, search for `ESP8266`.
2. Click on the entry labeled `esp8266 by ESP8266 Community`.
3. Click **Install**. This will install the latest version of the ESP8266 platform.

## Step 5: Select Your ESP8266 Board
1. Once the installation is complete, go to `Tools > Board` and scroll down to select your ESP8266 board model (e.g., `NodeMCU 1.0 (ESP-12E Module)`).

## Step 6: Restart Arduino IDE (Optional)
- If the boards still don't appear, try closing and reopening the Arduino IDE.

## Step 7: Verifying the Installation
1. After installing the ESP8266 board package, go to `Tools > Board` and ensure you can now select an ESP8266 board from the list.

