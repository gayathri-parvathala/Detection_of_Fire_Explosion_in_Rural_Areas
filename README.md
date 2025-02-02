# Detection_of_Fire_Explosion_in_Rural_Areas

**Overview**

This project is a Fire Detection and Alert System designed for rural areas using an Arduino, Flame Sensor, Buzzer, and GSM Module. When a fire is detected, the system activates a buzzer and automatically makes a call to a predefined emergency contact number to alert authorities or concerned individuals.

**Components Required**

Arduino Uno (or compatible board)

Flame Sensor (Digital Output)

GSM Module (SIM900/SIM800)

Buzzer

Connecting Wires

Power Supply

Circuit Connections

Flame Sensor → Digital Pin 2 (Output to Arduino)

Buzzer → Digital Pin 9

GSM Module → TX to Pin 11, RX to Pin 10

Power Supply → Arduino and GSM module

**How It Works**

The flame sensor detects fire and gives a HIGH signal to Arduino.

The Arduino activates the buzzer to produce an alert sound.

Simultaneously, the Arduino triggers the GSM module to make a call to the predefined phone number.

After 10 seconds, the call is automatically ended.

If no fire is detected, the system remains in standby mode.

**Code Explanation**

The flameSensorPin is set as an input to receive fire detection signals.

The buzzerPin is set as an output to activate the buzzer.

makeCall() function sends AT commands to the GSM module to initiate a call.

The loop continuously checks for fire and responds accordingly.

**Installation & Usage**

Upload the provided Arduino code to your Arduino board using the Arduino IDE.

Insert a valid SIM card into the GSM module.

Power the system (Ensure GSM module has sufficient power).

Wait for GSM module initialization (may take a few seconds).

When fire is detected, the buzzer sounds and an emergency call is placed.

**Customization**

Change the phoneNumber variable to set a different emergency contact.

Adjust the buzzer duration and call duration as needed.

Improve the detection mechanism by using multiple flame sensors for better coverage.

**License**

This project is open-source and can be modified and distributed for educational and non-commercial purposes.

**Author:**                              *P.Gayathri*
