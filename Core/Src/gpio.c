/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPS_RST_GPIO_Port, GPS_RST_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, SEARCH_LED_Pin|SMALL_LED_Pin|TRACK_LED_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, TUNER_VCTRL_Pin|TUNER_EN_Pin|SENS_STP_Pin|SENS_DIR_Pin
                          |BUZZER_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(TUNER_RST_GPIO_Port, TUNER_RST_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, SPI2_CS0_Pin|SPI2_CS1_Pin|SPI2_CS2_Pin|SPI2_CS3_Pin
                          |BRAKE_Pin|RS422_DE_Pin|RS422_RE_Pin|SPI1_CS_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, POL_STP_Pin|POL_DIR_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : GPS_RST_Pin SEARCH_LED_Pin SMALL_LED_Pin TRACK_LED_Pin */
  GPIO_InitStruct.Pin = GPS_RST_Pin|SEARCH_LED_Pin|SMALL_LED_Pin|TRACK_LED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : TUNER_VCTRL_Pin TUNER_RST_Pin TUNER_EN_Pin SENS_STP_Pin
                           SENS_DIR_Pin BUZZER_Pin */
  GPIO_InitStruct.Pin = TUNER_VCTRL_Pin|TUNER_RST_Pin|TUNER_EN_Pin|SENS_STP_Pin
                          |SENS_DIR_Pin|BUZZER_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pin : SENS_FLT_Pin */
  GPIO_InitStruct.Pin = SENS_FLT_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(SENS_FLT_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : SENS_LIM_Pin */
  GPIO_InitStruct.Pin = SENS_LIM_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(SENS_LIM_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : SPI2_CS0_Pin SPI2_CS1_Pin SPI2_CS2_Pin SPI2_CS3_Pin
                           BRAKE_Pin RS422_DE_Pin RS422_RE_Pin SPI1_CS_Pin */
  GPIO_InitStruct.Pin = SPI2_CS0_Pin|SPI2_CS1_Pin|SPI2_CS2_Pin|SPI2_CS3_Pin
                          |BRAKE_Pin|RS422_DE_Pin|RS422_RE_Pin|SPI1_CS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pin : AZ_HOME_Pin */
  GPIO_InitStruct.Pin = AZ_HOME_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(AZ_HOME_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : POL_LIM_Pin */
  GPIO_InitStruct.Pin = POL_LIM_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(POL_LIM_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : POL_STP_Pin POL_DIR_Pin */
  GPIO_InitStruct.Pin = POL_STP_Pin|POL_DIR_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
