//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//diy Audio
//技术支持:aemails@163.com
//版权所有，盗版必究。
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 
#ifndef __FLASH_H
#define __FLASH_H

extern u8 ReadBuf[FLASH_BLOCK_SIZE] ;

void Flash_Init(void);
void Flash_Write(void);
void Flash_Read(void);

#endif