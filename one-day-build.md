# One-Day Builds
*A collection of small Arduino experiments designed to be completed in a single afternoon.*

---

# Overview

Unlike long-term projects, these are intentionally designed to be:

- Completed within **1–8 hours**
- Focused on learning **one concept**
- Built using only a few components
- Fun enough to demo to friends
- Expandable if desired

The objective is simple:

> Build. Learn. Finish. Repeat.

---

# Project Guidelines

A One-Day Build should:

- Teach one programming or electronics concept.
- Use only 2–4 components.
- Be fully functional by the end of the day.
- Not require future work to feel "complete."

---

# Project Ideas

---

## 1. RGB Mood Lamp 🌈

### Components

- RGB LED
- Potentiometer

### Description

Rotate the potentiometer to smoothly cycle through different RGB colors.

### Concepts

- PWM
- Analog Input
- Color Mixing

**Difficulty:** ⭐☆☆☆☆

---

## 2. Electronic Dice 🎲

### Components

- Button
- LEDs or 7-Segment Display

### Description

Press a button to generate a random number from 1–6.

Add a short rolling animation before revealing the result.

### Concepts

- Random numbers
- Timers
- User input

**Difficulty:** ⭐☆☆☆☆

---

## 3. Clap Counter 👏

### Components

- Sound Sensor
- 7-Segment Display

### Description

Each clap increases the counter.

Double clap resets it.

### Concepts

- Interrupt-like behavior
- Threshold detection

**Difficulty:** ⭐⭐☆☆☆

---

## 4. Secret Knock Lock

### Components

- Sound Sensor
- RGB LED
- Passive Buzzer

### Description

Unlock only when the correct knock rhythm is detected.

Example:

```
Knock
Knock Knock
Knock
```

### Concepts

- Pattern recognition
- Timing
- State machines

**Difficulty:** ⭐⭐⭐☆☆

---

## 5. Light Alarm ☀️

### Components

- Photoresistor
- RGB LED
- Buzzer

### Description

If a flashlight shines on the sensor:

- LED turns red
- Alarm sounds

### Concepts

- Analog thresholds
- Sensor calibration

**Difficulty:** ⭐☆☆☆☆

---

## 6. Digital Spirit Level

### Components

- Tilt Switch
- LEDs

### Description

Show whether the board is tilted left, centered, or right.

### Concepts

- Digital input
- State indication

**Difficulty:** ⭐☆☆☆☆

---

## 7. Safe Cracker

### Components

- Potentiometer
- RGB LED

### Description

Rotate the potentiometer to specific values in the correct order to unlock.

Example:

```
120
300
45
```

### Concepts

- Analog input
- Sequences
- State machines

**Difficulty:** ⭐⭐⭐☆☆

---

## 8. Button Memory Game

### Components

- Buttons
- LEDs
- Buzzer (optional)

### Description

Arduino flashes a sequence.

Player repeats it.

### Concepts

- Arrays
- Game logic
- Memory patterns

**Difficulty:** ⭐⭐⭐☆☆

---

## 9. Guess the Light

### Components

- Photoresistor

### Description

Estimate environmental lighting.

Possible outputs:

- Night
- Cloudy
- Office
- Sunny

### Concepts

- Analog ranges
- Sensor calibration

**Difficulty:** ⭐☆☆☆☆

---

## 10. Plant Health Meter 🌱

### Components

- Soil Moisture Sensor
- RGB LED
- 7-Segment Display

### Description

Display plant health from 0–9.

Green = Healthy

Red = Needs Water

### Concepts

- Analog sensing
- Thresholds

**Difficulty:** ⭐⭐☆☆☆

---

## 11. Water Leak Alarm

### Components

- Water Level Sensor
- RGB LED
- Buzzer

### Description

Detect accidental water leaks.

Activate alarm immediately.

### Concepts

- Detection systems
- Alerts

**Difficulty:** ⭐☆☆☆☆

---

## 12. Tiny Piano 🎹

### Components

- Buttons
- Passive Buzzer

### Description

Each button plays a musical note.

Optional:

Play "Happy Birthday."

### Concepts

- Tone generation
- Input mapping

**Difficulty:** ⭐⭐☆☆☆

---

## 13. RGB Roulette 🎰

### Components

- Button
- RGB LED

### Description

Press button.

Random RGB color appears.

Player guesses the next color.

### Concepts

- Random generation
- RGB control

**Difficulty:** ⭐☆☆☆☆

---

## 14. Obstacle Reflex Game

### Components

- Obstacle Sensor
- LEDs
- Buzzer

### Description

Wave your hand before the timer expires.

Arduino measures your reaction.

### Concepts

- Timers
- Sensor events

**Difficulty:** ⭐⭐☆☆☆

---

## 15. Electronic Magic 8-Ball 🔮

### Components

- Button
- 7-Segment Display

### Description

Randomly generate answers.

Example:

```
1
3
5
8
```

Use a printed legend for interpretations.

### Concepts

- Randomization
- Simple UI

**Difficulty:** ⭐☆☆☆☆

---

## 16. Ambient Night Light

### Components

- Photoresistor
- LED

### Description

LED brightness automatically adjusts depending on ambient lighting.

### Concepts

- PWM
- Analog sensors

**Difficulty:** ⭐☆☆☆☆

---

## 17. Countdown Bomb 💣

### Components

- Button
- 7-Segment Display
- Buzzer

### Description

Start countdown.

Player must press the hidden button before reaching zero.

### Concepts

- Timers
- Game logic

**Difficulty:** ⭐⭐☆☆☆

---

## 18. Morse Code Trainer

### Components

- Button
- LED
- Passive Buzzer

### Description

Practice Morse Code interactively.

Example words:

- SOS
- HI
- HELLO

### Concepts

- Timing
- Encoding

**Difficulty:** ⭐⭐☆☆☆

---

## 19. Tiny "Lie Detector" (For Fun)

### Components

- Sound Sensor
- RGB LED

### Description

If someone suddenly speaks loudly:

```
Hmm...
Suspicious...
```

LED changes color.

*(Purely for entertainment.)*

### Concepts

- Sound thresholds
- Visual feedback

**Difficulty:** ⭐☆☆☆☆

---

## 20. Random Challenge Generator

### Components

- Button
- 7-Segment Display

### Description

Randomly generate a number corresponding to a challenge.

Example:

```
1 → Do 10 pushups
2 → Drink water
3 → Stretch
```

### Concepts

- Randomization
- Lookup tables

**Difficulty:** ⭐☆☆☆☆

---

# Bonus Project

# Arduino Toybox

Instead of creating twenty separate sketches, build a single sketch that contains every mini-project.

Example:

```
Mode 1
Reaction Game

↓

Mode 2
Electronic Dice

↓

Mode 3
Tiny Piano

↓

Mode 4
RGB Lamp

↓

Mode 5
Safe Cracker

↓

Mode 6
Plant Meter

↓

...
```

A button cycles through available modes.

Each mode demonstrates a different concept.

As new components are acquired, simply add another mode.

This transforms one Arduino into a reusable electronics playground.

---

# Future Expansion Ideas

Additional inexpensive modules that greatly expand possibilities:

- OLED Display (0.96")
- SG90 Servo Motor
- HC-SR04 Ultrasonic Sensor
- DS3231 RTC Module
- I²C LCD Display
- MicroSD Card Module
- Relay Module
- RFID RC522 Module
- Keypad (4×4)
- Rotary Encoder

---

# Final Goal

The purpose of these projects is not to build impressive products.

Instead, they exist to encourage experimentation, reinforce programming concepts, and make electronics enjoyable.

Every completed project is one more concept learned—and one more excuse to keep tinkering.
