#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

#include <Keyboard.h>
#include <KeyboardLayout.h>
#include <Keyboard_da_DK.h>
#include <Keyboard_de_DE.h>
#include <Keyboard_es_ES.h>
#include <Keyboard_fr_FR.h>
#include <Keyboard_hu_HU.h>
#include <Keyboard_it_IT.h>
#include <Keyboard_pt_PT.h>
#include <Keyboard_sv_SE.h>

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  Keyboard.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  //sound=jump
    analogRead(CircuitPlayground.soundSensor());
    int i = analogRead(CircuitPlayground.soundSensor());
    for (int i=0; i<1000; i++) {
      Keyboard.write (KEY_UP_ARROW);
    }
  //potentiometer=left/right
      
}
