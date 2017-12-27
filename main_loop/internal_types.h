#ifndef INTERNAL_TYPES_H
#define INTERNAL_TYPES_H

#include "cfg_global.h"

// Car working modes
typedef enum 
  {
    TEST_MODE,      // 0
    NORMAL_MODE,    // 1
    AUTOPILOT_MODE  // 2
  } t_enum_car_work_mode;

// Remote control commands
typedef enum 
    {
      RC_CMD_STOP = 100,
      RC_CMD_DRIVE_FORWARD,     // 101  
      RC_CMD_DRIVE_BACKWARD,    // 102
      RC_CMD_TURN_LEFT,         // 103
      RC_CMD_TURN_RIGHT,        // 104
      
      RC_CMD_SPEED_SLOW,        // 105
      RC_CMD_SPEED_FAST,        // 106
      
      RC_CMD_TURN_ON_AUTOPILOT, // 107
      RC_CMD_TURN_OFF_AUTOPILOT,// 108      
            
      RC_CMD_UKNOWN = 200
      
    } t_enum_rc_commands;

// DC motor states
typedef enum 
    {
      REAR_DC_DRIVE_FORWARD = 1,
      REAR_DC_DRIVE_BACKWARD,// 2
      REAR_DC_STOP,          // 3
      FRONT_DC_TURN_LEFT,    // 4
      FRONT_DC_TURN_RIGHT,   // 5
      FRONT_DC_STOP          // 6
    
    } t_enum_dc_motor_states;

// DC motor state 
extern t_enum_dc_motor_states g_rear_dc_motor_state;
extern t_enum_dc_motor_states g_front_dc_motor_state;




#endif // GLOBAL_VAR_H
