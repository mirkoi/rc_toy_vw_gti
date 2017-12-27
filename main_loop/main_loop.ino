/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

#include "dc_motor.h"
#include "test_protoboard.h"



// the setup routine runs once when you press reset:
void setup() {
    init_dc_motor();
    init_protoboard();
}

// the loop routine runs over and over again forever:
void loop() {
  
   check_buttons();
   rear_dc_motor();
 //  front_dc_motor();

  delay(50);
}
