/*********************************************************************
*           Common.c                   
*           Auther:Eman Megahed    
*********************************************************************/
#include "common.h"
#include "lib.h"
void disable_SPI       (volatile unsigned long SSI){
	SSICR1(SSI)&=~(unsigned long)SSE;
}
void enable_SPI        (volatile unsigned long SSI){
	SSICR1(SSI)|=SSE;
}
void SSI_Init_Pin      (volatile unsigned long port,unsigned long SSI_NUM,unsigned long port_Num_Master,
	unsigned long port_Num_Slave,unsigned long pin_slave,unsigned long pin_master,unsigned long num){
	LOCK(port)=0x4C4F434B;
  CR(port)|=(pin_slave|pin_master);
	SYSCTIL_SSI |=SSI_NUM;
	SYSCTIL_GPIO|=(port_Num_Master|port_Num_Slave);
	DEN(port)|=(pin_slave|pin_master);
	DIR(port)|=pin_slave;
	AFSEL(port)|=(pin_slave|pin_master);
	PCTL(port)|=num;
}
void SSI_Control_0      (unsigned long DSS,volatile unsigned long SSI,unsigned long SCR,unsigned long FRF){
	//16-bit data
	SSICR0(SSI) |=DSS;  
 //Texas Instruments Synchronous Serial Frame Format	
	SSICR0(SSI) |=FRF;   
 //BR=SysClk/(CPSDVSR * (1 + SCR))	
	SSICR0(SSI) = SCR;         
}
void Config_Sys_clock(volatile unsigned long SSI,unsigned long System_clock){
	//System clock
	SSICC(SSI)|=System_clock;
}
void SSI_Clock_Prescale  (volatile unsigned long SSI,unsigned long x){
	//SSI Clock Prescale Divisor
	SSICPSR(SSI)=x;
}
