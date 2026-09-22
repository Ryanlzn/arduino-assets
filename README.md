# Arduino Assets

A collection of **Arduino projects, embedded systems experiments, and
circuit simulations**.

This repository contains reusable Arduino code organized by category,
with each project accompanied by a **Tinkercad Circuits simulation**
whenever available.

The goal is to provide a structured collection of practical Arduino
examples for **learning, testing, prototyping, and embedded systems
development**.

------------------------------------------------------------------------

## 📂 Repository Structure

``` text
arduino-assets/
│
├── Actuators/
│   └── servo_motor.ino
│
├── Digitals/
│   ├── keypad.ino
│   └── lcd_screen.ino
│
├── Sensors/
│   ├── digital_sensor_pir.ino
│   ├── gaz_sensor.ino
│   ├── gaz_sensor_with_Leds.ino
│   ├── ldr_sensor.ino
│   ├── temperature_sensor_tmp36.ino
│   └── ultra_sonic_Sensor.ino
│
└── README.md
```

------------------------------------------------------------------------

## 🧩 Projects

### ⚙️ Actuators

Projects related to controlling physical components and output devices.

| Project                                    | Description                              | Tinkercad Simulation                   |
|--------------------------------------------|------------------------------------------|----------------------------------------|
| [Servo Motor](./Actuators/servo_motor.ino) | Basic servo motor control using Arduino. | [Open Simulation](https://www.tinkercad.com/things/fvbfKNQOCNN-servo-motor?sharecode=ViSCuNv9-M4Ump57i3tfYaPLQ5rblNUmeVoG3_cLfx4) |

------------------------------------------------------------------------

### 🔢 Digital Components

Projects using digital input/output components and interfaces.

| Project                                 | Description                                    | Tinkercad Simulation                   |
|-----------------------------------------|------------------------------------------------|----------------------------------------|
| [Keypad](./Digitals/keypad.ino)         | Interface between Arduino and a matrix keypad. | [Open Simulation](https://www.tinkercad.com/things/5TFJfbtg63s-keypad?sharecode=mjDsHs6XylttVaTGi3-7LiDw63Q7HNSzaYFude-_rgU) |
| [LCD Screen](./Digitals/lcd_screen.ino) | Display information using an LCD screen.       | [Open Simulation](https://www.tinkercad.com/things/7nF7j23K0UQ-lcd-screen?sharecode=aQxCYCanJf7iulG_JlyTbz-yq1NhPsA7g8VsuzSs4YQ) |

------------------------------------------------------------------------

### 📡 Sensors

Projects using different sensors for detecting physical conditions and
environmental parameters.

| Project                                                            | Description                                    | Tinkercad Simulation                   |
|--------------------------------------------------------------------|------------------------------------------------|----------------------------------------|
| [PIR Digital Sensor](./Sensors/digital_sensor_pir.ino)             | Motion detection using a PIR sensor.           | [Open Simulation](https://www.tinkercad.com/things/gS00lVgXfoR-digital-sensorpir?sharecode=zgtexZPvJeYwa3jcgAxHydt9udByyNp-PpSQ6NNXR8U) |
| [Gas Sensor](./Sensors/gaz_sensor.ino)                             | Reading values from a gas sensor.              | [Open Simulation](https://www.tinkercad.com/things/fx8YMie9KE7-gas-sensor?sharecode=iX_6CxmY8uzSoqmTSlIeTxsmS78lAnxeULRoIrsa3jM) |
| [Gas Sensor + LEDs](./Sensors/gaz_sensor_with_Leds.ino)            | Gas detection with LED indicators.             | [Open Simulation](https://www.tinkercad.com/things/dA6ymmOybYM-gaz-sensor?sharecode=pHVIxhi_CvQIpe-LsyCpCIF5f4Q41xsnoYWfIOpBfc4) |
| [LDR Sensor](./Sensors/ldr_sensor.ino)                             | Measuring light intensity using an LDR.        | [Open Simulation](https://www.tinkercad.com/things/i6tb3ycnY4g-ldr-sensor-project?sharecode=W77U7zWppvKCbL6CihPBppIo62rTjVnzNim6IzVciS4) |
| [TMP36 Temperature Sensor](./Sensors/temperature_sensor_tmp36.ino) | Measuring temperature using a TMP36 sensor.    | [Open Simulation](https://www.tinkercad.com/things/dPncrEe2nmm-temperature-sensotmp36?sharecode=5oCSDsDdeKZI_XM9kxL-GreN7cAJufpfkF_xtBfTSSU) |
| [Ultrasonic Sensor](./Sensors/ultra_sonic_Sensor.ino)              | Measuring distance using an ultrasonic sensor. | [Open Simulation](https://www.tinkercad.com/things/6QILm5NGAkS-ultra-sonic?sharecode=uWArnCN9LykyozSgAFsX8spq0kihPZwmHvAncX9GGZw) |

------------------------------------------------------------------------

## 🛠️ Technologies & Tools

- **Arduino**
- **Arduino IDE**
- **C/C++**
- **Tinkercad Circuits**
- **Git**
- **GitHub**

------------------------------------------------------------------------

## 🧪 Simulations

The projects in this repository are designed to be tested and
demonstrated using **Tinkercad Circuits**.

Each project includes a direct link to its corresponding simulation
whenever a simulation is available.

### Development Workflow

``` text
Idea
  ↓
Circuit Design
  ↓
Arduino Programming
  ↓
Tinkercad Simulation
  ↓
Testing & Debugging
  ↓
Physical Hardware Implementation
  ↓
Documentation
```

------------------------------------------------------------------------

## 📚 Topics Covered

This repository currently covers:

- Digital input/output
- Sensors
- Actuators
- Servo motors
- Keypads
- LCD displays
- Motion detection
- Gas detection
- Light measurement
- Temperature measurement
- Distance measurement
- Basic Arduino programming
- Circuit simulation

More projects will be added progressively.

------------------------------------------------------------------------

## 🚀 Getting Started

### Clone the repository

``` bash
git clone https://github.com/Ryanlzn/arduino-assets.git
```

### Enter the repository

``` bash
cd arduino-assets
```

### Open a project

Open the desired `.ino` file using the **Arduino IDE**.

For example:

``` text
Actuators/servo_motor.ino
```

### Run the simulation

Open the **Tinkercad Simulation** link associated with the project in
this README.

------------------------------------------------------------------------

## 📁 Project Organization

Projects are organized according to their primary function:

``` text
Actuators/   → Output and control components
Digitals/    → Digital interfaces and components
Sensors/     → Sensors and measurement
```

Additional categories may be added as the repository grows.

------------------------------------------------------------------------

## 🔗 Tinkercad Simulations

Each project can have its own Tinkercad simulation.

When a simulation is available, its link is added directly to the
project table.

Example:

``` markdown
[Open Simulation](https://www.tinkercad.com/things/...)
```

This provides quick access to both the Arduino source code and its
corresponding simulated circuit.

------------------------------------------------------------------------

## 📈 Future Additions

Planned projects and topics may include:

- Analog components
- OLED displays
- RFID
- Additional temperature sensors
- Relays
- Buzzers
- Joysticks
- Motor control
- I²C communication
- SPI communication
- UART communication
- Bluetooth
- Wi-Fi / IoT
- Home automation
- Robotics
- More advanced embedded systems

------------------------------------------------------------------------

## 👤 Author

**L.Rayane**

Arduino • Embedded Systems • Electronics • Simulation

------------------------------------------------------------------------

⭐ If you find this repository useful, feel free to **star the
repository** and explore the projects.
