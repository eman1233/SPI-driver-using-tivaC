/*********************************************************************
*           Master.c                   
*           Auther:Eman Megahed    
*********************************************************************/
#include "master.h"
#include "lib.h"

void SSI_Master_Control_1   (volatile unsigned long SSI){
	//Normal serial port operation enabled.
	SSICR1(SSI)&=~(unsigned long)LBM ;
	//The SSI is configured as a master
	SSICR1(SSI)&=~(unsigned long)MS;
	//The End of Transmit interrupt mode for the TXRIS interrupt is enabled
	SSICR1(SSI)|=EOT;
}
int SSI_Transimate_Data     (volatile unsigned long SSI,char data){
	static int state;
	//The transmit FIFO is empty
	while(SSISR(SSI)&TFE);
	//SSI Receive/Transmit Data
	SSIDR(SSI)=data;
  while(SSISR(SSI)&BSY)
		state=1;
	return state;
}
