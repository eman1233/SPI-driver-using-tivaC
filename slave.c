/*********************************************************************
*           Slave.c                   
*           Auther:Eman Megahed    
*********************************************************************/
#include "slave.h"
#include "lib.h"
void SSI_Slave_Control_1     (volatile unsigned long SSI){
	//Normal serial port operation enabled.
	SSICR1(SSI)&=~(unsigned long)LBM ;
	//The SSI is configured as a slave
	SSICR1(SSI)|=MS;
	SSICR1(SSI)|=(unsigned long)LBM;
}
void SSI_Set_Recieve_Data        (volatile unsigned long Port,unsigned long pin_slave){
	DATA(Port)|=pin_slave;
}
void SSI_Clear_Recieve_Data        (volatile unsigned long Port,unsigned long pin_slave){
	DATA(Port)&=~(unsigned long)pin_slave;
}
