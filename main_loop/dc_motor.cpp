#include "Arduino.h"
#include "internal_types.h"
#include "dc_motor.h"


// Definition of gloabal variables related with DC motor 
t_enum_dc_motor_states g_rear_dc_motor_state;
t_enum_dc_motor_states g_front_dc_motor_state;

// Initialize DC motor 
void init_dc_motor (void)
{
  g_rear_dc_motor_state = REAR_DC_STOP;
  g_front_dc_motor_state = FRONT_DC_STOP;

  pinMode(PWM_1_PIN_REAR_MOTOR, OUTPUT);
  pinMode(PWM_2_PIN_REAR_MOTOR, OUTPUT);

  pinMode(PWM_1_PIN_FRONT_MOTOR, OUTPUT);
  pinMode(PWM_2_PIN_FRONT_MOTOR, OUTPUT);
  
}


// 
void rear_dc_motor (void)
{ 
  t_enum_dc_motor_states state;

  state = g_rear_dc_motor_state;
 
  switch(state)
    {
      case REAR_DC_DRIVE_FORWARD:
              analogWrite(PWM_1_PIN_REAR_MOTOR, PWM_DUTYCYCLE_REAR_MOTOR);
              analogWrite(PWM_2_PIN_REAR_MOTOR, PWM_OFF);
              break;
    
      case REAR_DC_DRIVE_BACKWARD:
              analogWrite(PWM_1_PIN_REAR_MOTOR, PWM_OFF);
              analogWrite(PWM_2_PIN_REAR_MOTOR, PWM_DUTYCYCLE_REAR_MOTOR);
              break;

      case REAR_DC_STOP:
              analogWrite(PWM_1_PIN_REAR_MOTOR, PWM_OFF);
              analogWrite(PWM_2_PIN_REAR_MOTOR, PWM_OFF);
              break;

      default:
      ;
  
    }
}

//
void front_dc_motor (void)
{ 
  t_enum_dc_motor_states state;

  state = g_front_dc_motor_state;
 
  switch(state)
    {
      case FRONT_DC_TURN_LEFT:
              analogWrite(PWM_1_PIN_FRONT_MOTOR, PWM_DUTYCYCLE_FRONT_MOTOR);
              analogWrite(PWM_2_PIN_FRONT_MOTOR, PWM_OFF);
              break;
    
      case FRONT_DC_TURN_RIGHT:
              analogWrite(PWM_1_PIN_FRONT_MOTOR, PWM_OFF);
              analogWrite(PWM_2_PIN_FRONT_MOTOR, PWM_DUTYCYCLE_FRONT_MOTOR);
              break;

      case FRONT_DC_STOP:
              analogWrite(PWM_1_PIN_FRONT_MOTOR, PWM_OFF);
              analogWrite(PWM_2_PIN_FRONT_MOTOR, PWM_OFF);
              break;

      default: 
          ;
  
    }
}
