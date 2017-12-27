#include "Arduino.h"
#include "test_protoboard.h"
#include "internal_types.h"

#define BUTTON_1 3 // D3 High on press
#define BUTTON_2 4 // D4 High on press 

void init_protoboard (void)
{
  // initialize the pushbutton pin as an input:
  pinMode(BUTTON_1, INPUT);
  pinMode(BUTTON_2, INPUT);
}


void check_buttons (void)
{
  int button_1_state = 0;
  int button_2_state = 0;

  button_1_state = digitalRead(BUTTON_1);
  button_2_state = digitalRead(BUTTON_2);
  
  if(button_1_state == HIGH)
  {
     g_rear_dc_motor_state = REAR_DC_DRIVE_FORWARD;
  }
  else 
  {
    if(button_2_state == HIGH) 
    {
       g_rear_dc_motor_state = REAR_DC_DRIVE_BACKWARD;
    }
    else
    {
       g_rear_dc_motor_state  = REAR_DC_STOP;
    }
  }
}
