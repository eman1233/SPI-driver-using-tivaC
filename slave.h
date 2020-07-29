/*********************************************************************
*           Slave.h                   
*           Auther:Eman Megahed    
*********************************************************************/
#ifndef __SLAVE_H__
#define __SLAVE_H__
void SSI_Slave_Control_1           (volatile unsigned long SSI);
void SSI_Set_Recieve_Data          (volatile unsigned long Port,unsigned long pin_slave);
void SSI_Clear_Recieve_Data        (volatile unsigned long Port,unsigned long pin_slave);
#endif
