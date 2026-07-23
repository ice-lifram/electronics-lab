#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// ---------------- Pins ----------------
const byte BTN_START = 2;
const byte BTN_RESET = 3;

const byte LED_GREEN = 10;
const byte LED_RED   = 9;

const byte BUZZER = 6;

// 25 seconds for testing
const unsigned long DURATION = 1500000UL;
// Change to 25UL * 60UL * 1000UL for 25 minutes

enum State {
  READY,
  RUNNING,
  PAUSED,
  FINISHED
};

State state = READY;

unsigned long startMillis = 0;
unsigned long pausedTime = 0;
unsigned long elapsed = 0;

bool lastStart = HIGH;
bool lastReset = HIGH;

const unsigned long OLED_TIMEOUT = 30000; // 30 seconds

unsigned long lastInteraction = 0;
bool displaySleeping = false;

void setup() {

  pinMode(BTN_START, INPUT_PULLUP);
  pinMode(BTN_RESET, INPUT_PULLUP);

  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);

  pinMode(BUZZER, OUTPUT);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

  lastInteraction = millis();
}

void loop() {

  handleButtons();
  updateTimer();
  updateLED();
  drawDisplay();

}

void handleButtons() {

  bool startNow = digitalRead(BTN_START);
  bool resetNow = digitalRead(BTN_RESET);

  if(lastStart == HIGH && startNow == LOW){

    switch(state){

      case READY:
        state = RUNNING;
        startMillis = millis();
        break;

      case RUNNING:
        state = PAUSED;
        pausedTime = millis();
        break;

      case PAUSED:
        state = RUNNING;
        startMillis += millis() - pausedTime;
        break;

      case FINISHED:
        state = READY;
        elapsed = 0;
        break;
    }
    
    if(lastStart == HIGH && startNow == LOW){

      wakeDisplay();

      switch(state){

  }

  if(lastReset == HIGH && resetNow == LOW){

    state = READY;
    elapsed = 0;
  }

  lastStart = startNow;
  lastReset = resetNow;
}

void updateTimer(){

  if(state != RUNNING) return;

  elapsed = millis() - startMillis;

  if(elapsed >= DURATION){

    elapsed = DURATION;
    state = FINISHED;

    playMelody();
  }
}

void updateLED(){

  switch(state){

    case READY:
      digitalWrite(LED_GREEN, LOW);
      digitalWrite(LED_RED, LOW);
      break;

    case RUNNING:
      digitalWrite(LED_GREEN, HIGH);
      digitalWrite(LED_RED, LOW);
      break;

    case PAUSED:
      digitalWrite(LED_GREEN, LOW);
      digitalWrite(LED_RED, HIGH);
      break;

    case FINISHED:

      digitalWrite(LED_GREEN, LOW);

      digitalWrite(LED_RED, millis()/200 %2);

      break;
  }

}

void drawDisplay(){

  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);

  switch(state){

    case READY:
      display.setCursor(20,0);
      display.print("READY");
      break;

    case RUNNING:
      display.setCursor(10,0);
      display.print("FOCUS");
      break;

    case PAUSED:
      display.setCursor(10,0);
      display.print("PAUSED");
      break;

    case FINISHED:
      display.setCursor(18,0);
      display.print("DONE!");
      break;
  }

  unsigned long remain = DURATION - elapsed;

  unsigned int sec = remain/1000;

  unsigned int min = sec/60;

  sec %= 60;

  display.setTextSize(3);

  display.setCursor(18,30);

  if(min<10) display.print('0');
  display.print(min);

  display.print(':');

  if(sec<10) display.print('0');
  display.print(sec);

  display.display();

}

void playMelody(){

  tone(BUZZER,523,150);
  delay(180);

  tone(BUZZER,659,150);
  delay(180);

  tone(BUZZER,784,300);
  delay(350);

  noTone(BUZZER);

}

void wakeDisplay() {

  if (displaySleeping) {

    display.ssd1306_command(SSD1306_DISPLAYON);
    displaySleeping = false;

  }

  lastInteraction = millis();
}

void updateDisplaySleep() {

  if (!displaySleeping &&
      millis() - lastInteraction >= OLED_TIMEOUT) {

    display.ssd1306_command(SSD1306_DISPLAYOFF);
    displaySleeping = true;

  }

}
