# One-Day Projects
*A collection of bite-sized Arduino gadgets designed to be completed within a day.*

---

# Philosophy

These projects are not meant to become commercial products.

Instead, they are miniature gadgets that teach one or two embedded systems concepts while remaining fun enough to complete in a single sitting.

The objective isn't originality.

The objective is to become comfortable designing, building, debugging, and polishing small electronic devices.

> **Build something you'd proudly leave on your desk.**

---

# Design Principles

Every project should:

- 🕒 Take between **1–8 hours**
- 🔧 Use only a handful of components
- 🎯 Focus on one primary concept
- ✨ Feel like a finished gadget
- 📖 Be documented with a README

Bonus points if someone can immediately understand what it does after seeing it for five seconds.

---

# Suggested Workflow

```
Idea

↓

Prototype

↓

Working Circuit

↓

Polish

↓

README

↓

Done.
```

Don't worry about making every project unique.

Instead, focus on making every project complete.

---

# Project Categories

## 🌟 Everyday Desk Gadgets

Small utilities you could actually keep on your desk.

---

### ⏳ Focus Timer

A distraction-free Pomodoro timer.

**Components**

- Buttons
- Passive Buzzer
- LEDs *(OLED optional)*

**Concepts**

- State machines
- Timers (`millis()`)
- User input

⭐ Challenge

- Pause & resume
- Adjustable durations

---

### 💡 Smart Reading Lamp

Automatically adjusts brightness based on room lighting.

**Components**

- Photoresistor
- LED
- Potentiometer

**Concepts**

- Analog input
- PWM
- Calibration

---

### 🌤 Room Mood Indicator

Displays room conditions using RGB colors.

Examples:

- Cold + Dark
- Bright + Warm
- Comfortable

**Components**

- Thermistor
- Photoresistor
- RGB LED

**Concepts**

- Sensor fusion
- Thresholds
- Decision making

---

### 🤫 Quiet Meter

Measures ambient noise.

Green when quiet.

Red when noisy.

**Components**

- Sound Sensor
- RGB LED

*(OLED optional)*

**Concepts**

- Threshold detection
- Sensor calibration

---

### 🚦 RGB Status Beacon

Cycle through different desk statuses.

Examples:

- Studying
- Busy
- Available
- Break

**Components**

- RGB LED
- Button

**Concepts**

- Finite states
- PWM

---

# 🌱 Home Utilities

---

### 🌱 Plant Guardian

Monitor soil moisture and alert when watering is needed.

**Components**

- Soil Moisture Sensor
- RGB LED
- Passive Buzzer

**Concepts**

- Analog sensing
- Thresholds
- Alerts

---

### 💧 Water Leak Sentinel

Detect accidental water leaks.

Escalating warning system.

```
Water

↓

Warning

↓

Critical

↓

Continuous Alarm
```

**Components**

- Water Sensor
- RGB LED
- Active Buzzer

**Concepts**

- Event handling
- Alarm logic

---

### 🌙 Night Light

Automatically turns on in dark environments.

**Components**

- Photoresistor
- LED

**Concepts**

- Analog mapping
- PWM

---

# 🎮 Fun & Games

---

### 🎲 Casino Dice

A polished electronic dice.

Instead of instantly showing a number,

```
Roll

↓

Animation

↓

Tick...

↓

Tick...

↓

Result
```

**Components**

- Button
- LEDs or 7-Segment
- Passive Buzzer

**Concepts**

- Random numbers
- Animation
- Timing

---

### ⚡ Reaction Challenge

Press the button as quickly as possible.

Store your best score.

**Components**

- LED
- Button
- Passive Buzzer

**Concepts**

- Timers
- Response measurement

---

### 🔐 Combination Lock

Unlock using the correct potentiometer sequence.

Example

```
Left

↓

Right

↓

Left
```

**Components**

- Potentiometer
- RGB LED
- Button

**Concepts**

- State machines
- Analog input

---

### 👏 Clap Counter

Every clap increases the counter.

Double clap resets.

**Components**

- Sound Sensor
- 7-Segment

**Concepts**

- Edge detection
- Counting

---

### 🎹 Pocket Piano

Each button plays a note.

Potentiometer changes octave.

**Components**

- Buttons
- Passive Buzzer
- Potentiometer

**Concepts**

- Tone generation
- Mapping

---

# 🚗 Automation

---

### 🚗 Parking Assistant

Estimate distance using sound and color.

```
Far

🟢

↓

Near

🟡

↓

STOP

🔴
```

The buzzer speeds up as the object approaches.

**Components**

- Ultrasonic
- RGB LED
- Passive Buzzer

**Concepts**

- Distance measurement
- PWM
- Feedback systems

---

### 🚪 Smart Door Chime

Welcome visitors automatically.

```
Person detected

↓

LED fades

↓

Friendly chime

↓

Idle
```

**Components**

- Obstacle Sensor
- RGB LED
- Passive Buzzer

**Concepts**

- Events
- Animations

---

### 🚧 Mini Barrier Gate

Raise and lower a miniature gate.

**Components**

- Servo
- Button

*(Obstacle sensor optional)*

**Concepts**

- Servo control
- Position mapping

---

# 📊 Mini Dashboards

Small information displays inspired by DeskHub.

---

### 🌡 Desk Thermometer

Display room temperature.

*(OLED optional)*

---

### 📏 Digital Tape Measure

Measure distance with an ultrasonic sensor.

*(OLED optional)*

---

### 🌿 Plant Card

Display plant health.

*(OLED optional)*

---

### 📈 Sensor Dashboard

Cycle between multiple sensor readings.

Example:

```
Temperature

↓

Brightness

↓

Distance

↓

Moisture
```

**Concepts**

- Menus
- Modular programming
- Multiple sensors

---

# 🚀 Free Build

After completing several projects,

design one yourself.

Rules:

- Solve a small problem.
- Keep it under one day.
- Use components you've already learned.
- Make it fun.

---

# Completion Checklist

A project is complete when:

- [ ] Circuit assembled
- [ ] Code works
- [ ] Wiring documented
- [ ] README written
- [ ] Learned something new
- [ ] Had fun

---

# Final Goal

These projects aren't about collecting Arduino sketches.

They're about building intuition.

Every completed gadget teaches another embedded systems concept.

Eventually, you'll stop asking:

> "What can this sensor do?"

and start asking:

> "What can I build with the sensors I already know?"

That's when you're no longer following tutorials—you'll be designing your own devices.
