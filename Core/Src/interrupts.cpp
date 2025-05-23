/*
 * interrupts.cpp
 *
 *  Created on: Feb 14, 2025
 *      Author: Sentry
 */

#include "main.h"
#include "MN12832L.h"


extern MN12832L display;

extern TIM_HandleTypeDef htim6;

void TIM6_DAC_LPTIM1_IRQHandler(void)
{
  HAL_TIM_IRQHandler(&htim6);
  display.newFrame();
}

