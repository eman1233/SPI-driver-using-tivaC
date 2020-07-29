/*********************************************************************
*           Master.h                   
*           Auther:Eman Megahed    
*********************************************************************/
#ifndef __MASTER_H__
#define __MASTER_H__
void SSI_Master_Control_1   (volatile unsigned long SSI);
int SSI_Transimate_Data     (volatile unsigned long SSI,char data);
#endif
