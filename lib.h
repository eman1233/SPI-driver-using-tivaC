/*********************************************************************
*           Lib.h                   
*           Auther:Eman Megahed    
*********************************************************************/
#ifndef __LIB_H__
#define __LIB_H__
#define SYSCTIL_GPIO                     ((*(volatile unsigned long*)(0x400FE000+0x608)))
#define SYSCTIL_SSI                      ((*(volatile unsigned long*)(0x400FE000+0x61C)))
#define GPIO_Port                        ((*(volatile unsigned long*)(0x40004000)))
#define GPIO_PortA                       ((*(volatile unsigned long*)(GPIO_Port+0x000)))
#define GPIO_PortB                       ((*(volatile unsigned long*)(GPIO_Port+0x500)))
#define GPIO_PortD                       ((*(volatile unsigned long*)(GPIO_Port+0x700)))
#define GPIO_PortF                       ((*(volatile unsigned long*)(GPIO_Port+0x2500)))
#define DATA(Port)                       ((*(volatile unsigned long*)(Port+0x000)))
#define DIR(Port)                        ((*(volatile unsigned long*)(Port+0x400)))
#define DEN(Port)                        ((*(volatile unsigned long*)(Port+0x51C)))
#define AFSEL(Port)                      ((*(volatile unsigned long*)(Port+0x420)))
#define PCTL(Port)                       ((*(volatile unsigned long*)(Port+0x52C)))
#define LOCK(Port)                       ((*(volatile unsigned long*)(Port+0x520)))
#define CR(Port)                         ((*(volatile unsigned long*)(Port+0x524)))
#define SSI_base                         ((*(volatile unsigned long*)(0X40008000)))
#define SSI0_base                        ((*(volatile unsigned long*)(SSI_base+0x0000)))
#define SSI1_base                        ((*(volatile unsigned long*)(SSI_base+0x1000)))
#define SSI2_base                        ((*(volatile unsigned long*)(SSI_base+0x2000)))
#define SSI3_base                        ((*(volatile unsigned long*)(SSI_base+0x3000)))
#define SSICR0(SSI)                      ((*(volatile unsigned long*)(SSI+0x000)))
#define SSICR1(SSI)                      ((*(volatile unsigned long*)(SSI+0x004)))
#define SSIDR(SSI)                       ((*(volatile unsigned long*)(SSI+0x008)))
#define SSISR(SSI)                       ((*(volatile unsigned long*)(SSI+0x00C)))
#define SSICPSR(SSI)                     ((*(volatile unsigned long*)(SSI+0x010)))
#define SSICC(SSI)                       ((*(volatile unsigned long*)(SSI+0xFC8)))
#define PORTA               0x1
#define PORTB               0x2
#define PORTD               0x8
#define PORTF               0x20
#define SSI0                0x1
#define SSI1                0x2
#define SSI2                0x4
#define SSI3                0x8
//SLAVE
#define SS0PA4              0x10   
//MASTER
#define SS0PA5              0x20    
//SLAVE
#define SS1PD2              0x2   
//MASTER
#define SS1PD3              0x4   
//SLAVE
#define SS1PF0              0x1   
//MASTER
#define SS1PF1              0x2  
//SLAVE
#define SS2PB6              0x40   
//MASTER
#define SS2PB7              0x80   
//SLAVE
#define SS3PD2              0x2
//MASTER
#define SS3PD3              0x4                      
//SSI Loopback Mode:
#define LBM                 0x01
//SSI Synchronous Serial Port Enable:
#define SSE                 0x2
//SSI Master/Slave Select:
#define MS                  0x4
//End of Transmission:
#define EOT                0x10
//SSI Transmit FIFO Empty
#define TFE                0x1
//SSI Transmit FIFO Not Full
#define BSY               0x10
#endif
