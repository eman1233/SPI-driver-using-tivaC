/*********************************************************************
*           Common.h                  
*           Auther:Eman Megahed    
*********************************************************************/
#ifndef __COMMON_H__
#define __COMMON_H__
void disable_SPI           (volatile unsigned long SSI);
void enable_SPI            (volatile unsigned long SSI);
void SSI_Init_Pin          (volatile unsigned long port,unsigned long SSI_NUM,unsigned long port_Num_Master,
	                          unsigned long port_Num_Slave,unsigned long pin_slave,
														unsigned long pin_master,unsigned long num);
void SSI_Control_0         (unsigned long DSS,volatile unsigned long SSI,unsigned long SCR,unsigned long FRF);
void Config_Sys_clock      (volatile unsigned long SSI,unsigned long System_clock);
void SSI_Clock_Prescale    (volatile unsigned long SSI,unsigned long x);

#endif
