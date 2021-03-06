/**
 * core.h
 * Allen Snook
 * May 28, 2020
 */

#ifndef __CORE_H
#define __CORE_H

#include "cmsis_os.h"
#include "stm32f4xx_hal.h"

void Core_Set_RTC_Handle( RTC_HandleTypeDef *hrtc );
void Core_Set_LCD_Message_Queue( osMessageQueueId_t hqueue );
void Core_Set_Radio_Message_Queue( osMessageQueueId_t hqueue );
void Core_Set_Debug_UART( UART_HandleTypeDef *huart );
void Core_Run();

#endif // __CORE_H
