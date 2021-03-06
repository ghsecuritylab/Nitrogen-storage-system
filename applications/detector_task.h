#ifndef __detector_task_H_
#define __detector_task_H_

/*-----------------------------------------引入头文件----------------------------------------------------*/
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include <rtthread.h>

/*------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------宏定义----------------------------------------------------*/
#define CMD_ReadDO          (0x01)//读数字量输出(DO)
#define CMD_ReadDI          (0x02)//读开关量输入(DI)
#define CMD_ReadAO          (0x03)//读模拟量输出(AO)
#define CMD_ReadAI          (0x04)//读模拟量输入(AI)

#define CMD_WriteOneDO      (0x05)//写单路开关量输出(DO)
#define CMD_WirteDO         (0x0F)//写多路开关量输出(DO)
#define CMD_WriteOneAO      (0x06)//写单路模拟量输出(AO)
#define CMD_WirteAO         (0x10)//写多路模拟量输出(AO)




/*-------------------------------------------函数声明----------------------------------------------------*/
/*********************************************************************************************************
**函数描述：传感器任务入口函数
*********************************************************************************************************/
void detector_task_entry(void * parameter);

/*------------------------------------------------------------------------------------------------------*/


#endif

/*********************************************************************************************************
  End Of File
*********************************************************************************************************/
