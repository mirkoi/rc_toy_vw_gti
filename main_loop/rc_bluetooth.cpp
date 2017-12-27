#include "Arduino.h"
#include "internal_types.h"
#include "rc_bluetooth.h"


static t_enum_rc_commands receive_rc_command (void);
static void send_response (void);

void init_rc_bluetooth (void)
{

}


void process_rc_command (void)
{
  t_enum_rc_commands rc_command = RC_CMD_UKNOWN;

  rc_command = receive_rc_command();

  switch (rc_command)
    {
      case RC_CMD_STOP:  
          break;
      
      case RC_CMD_DRIVE_FORWARD:  
          break;

      case RC_CMD_DRIVE_BACKWARD:  
          break;

      case RC_CMD_TURN_LEFT:  
          break;

      case RC_CMD_TURN_RIGHT:  
          break;

      case RC_CMD_SPEED_SLOW:  
          break;

      case RC_CMD_SPEED_FAST:  
          break;

      case RC_CMD_TURN_ON_AUTOPILOT:  
          break;

      case RC_CMD_TURN_OFF_AUTOPILOT:
          break;

      case RC_CMD_UKNOWN:
          break;

      default:
          ;   
    
    };

}


static t_enum_rc_commands receive_rc_command (void)
{

}


static void send_response (void)
{
  
}
