#include <BleKeyboard.h>

BleKeyboard bleKeyboard;

void setup() {
  Serial.begin(115200);
  Serial.println("All working so far, ready to start!");
  bleKeyboard.begin();
}

void loop() {
  if(bleKeyboard.isConnected()) {
    
    Serial.println("Sending Down key...");
    bleKeyboard.write(KEY_DOWN_ARROW);
    delay(1000);

  }
}
