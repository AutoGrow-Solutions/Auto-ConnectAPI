![Beige Feminine Personal LinkedIn Banner-2](https://github.com/AutoGrow-Solutions/.github/assets/100778149/20250a86-1db4-4673-b638-d9670fee47e2)

# Auto-Connect API
## Remote Access for Hydroponics Monitoring and Control
Welcome to **Auto-Connect API**, a remote monitoring and control component developed by Team AutoGrow. Auto-Connect API integrates with the hydroponic tent, **Denzyl**, enabling farmers to access and manage their systems from anywhere. This API allows real-time data access and control of critical components in the tent, providing flexibility and peace of mind.

---

## Table of Contents
- [Features](#features)
- [Latest Updates](#latest-updates)
- [Empowering Agriculture with Remote Access](#empowering-agriculture-with-remote-access)
- [Getting Started](#getting-started)
- [Technical Details](#technical-details)
- [Contact Us](#contact-us)

---

## Features

| Feature                | Description                                                                                 |
|------------------------|---------------------------------------------------------------------------------------------|
| **Remote Device Control** | Control devices like LEDs remotely, simulating control of hydroponics components.        |
| **ThingSpeak Integration** | Sends device status and sensor data to ThingSpeak for real-time monitoring.            |
| **Wi-Fi Connectivity** | Connects to a local Wi-Fi network, enabling access and control from any location.         |
| **Web Server Endpoints** | Provides HTTP endpoints for easy and secure remote access and control.                   |

---

## Latest Updates

- **ThingSpeak Integration**: Added real-time data logging to ThingSpeak for better remote monitoring.
- **Improved Connectivity**: Optimized Wi-Fi stability to ensure consistent and reliable remote access.
- **New Endpoints**: `/led/on` and `/led/off` endpoints for controlling devices remotely, enhancing ease of access.

---

## Empowering Agriculture with Remote Access
Auto-Connect API is designed to support South African farmers by offering a remote monitoring and control solution for their hydroponic systems. With IoT and cloud-based technology, this API allows farmers to stay connected to their crops, even from afar, minimizing the need for constant physical checks and maximizing efficiency.

Whether managing a system in a rural area or a large-scale operation, Auto-Connect API provides seamless control, making it easier to respond to the needs of hydroponics setups in real-time. Farmers can monitor conditions and control devices with a few clicks, saving valuable time and resources.

---

## Our Hydroponics Tent: Denzyl

**Auto-Connect API** operates within **Denzyl**, the hydroponic tent equipped with advanced IoT sensors and remote control capabilities to manage and monitor plant growth effectively.

---

## Technology Stack

**Tools and Languages Used**:
- **Arduino IDE**: Development environment for the ESP8266 microcontroller.
- **C++**: Core language for programming the API functionalities.
- **ThingSpeak**: IoT analytics platform used for remote data monitoring.

---

## Getting Started

1. **Download and Install**: Clone the Auto-Connect API repository or download the source code.
2. **Set Up Wi-Fi Credentials**:
   - Update the `ssid` and `password` variables with your Wi-Fi network credentials.
   - Replace `apiKey` with your ThingSpeak API key.
3. **Upload the Code**:
   - Open the code in the Arduino IDE.
   - Connect your ESP8266 device and upload the code.
4. **Test the API**:
   - Access the following endpoints for remote control:
     - `/led/on`: Turns the LED on and logs the status to ThingSpeak.
     - `/led/off`: Turns the LED off and updates ThingSpeak with the new status.

---

## Technical Details

| Technical Detail        | Description                                                  |
|-------------------------|--------------------------------------------------------------|
| **Platform**            | ESP8266                                                      |
| **Programming Language** | C++                                                         |
| **Connectivity**        | Wi-Fi integration for remote access                          |
| **Endpoints**           | `/led/on` and `/led/off` to control devices remotely         |
| **Data Logging**        | ThingSpeak API for real-time data logging and monitoring     |

---

## Contact Us

For support or more information, please contact us at **support@autogrow.com**.

Stay connected and in control with Auto-Connect API!

---

**AutoGrow Team**: Leighché Jaikarran, Lubnah Olideen, Naiya Haribhai, Talhah Motala, Tanya Govender, Vikhayle Sewnundan
