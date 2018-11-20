#include "general.h"
#include "hal_dcMot.h"
int main()
{
    vMotorInit();
	vSetMotorDir( FWD);
	vSetMotorSpeed(50);
	//vSetMotorDirSpeed(FWR, 50);
    while(1)
    {
        
    }
    return 0;

}