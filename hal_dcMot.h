#ifndef __hal_dcMotHEADER__
#define __hal_dcMotHEADER__

#include "general_types.h"

#define FWD 0
#define BWD 1

void vMotorInit();
void vSetMotorDir(T_U8 u8Dir);
void vSetMotorSpeed(T_U8 u8Speed);
void vSetMotorDirSpeed(T_U8 u8Dir, T_U8 u8Speed);


#endif