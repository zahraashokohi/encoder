/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GPS_RST_Pin GPIO_PIN_1
#define GPS_RST_GPIO_Port GPIOA
#define SEARCH_LED_Pin GPIO_PIN_5
#define SEARCH_LED_GPIO_Port GPIOA
#define SMALL_LED_Pin GPIO_PIN_6
#define SMALL_LED_GPIO_Port GPIOA
#define TRACK_LED_Pin GPIO_PIN_7
#define TRACK_LED_GPIO_Port GPIOA
#define TUNER_VCTRL_Pin GPIO_PIN_9
#define TUNER_VCTRL_GPIO_Port GPIOE
#define TUNER_RST_Pin GPIO_PIN_10
#define TUNER_RST_GPIO_Port GPIOE
#define TUNER_EN_Pin GPIO_PIN_11
#define TUNER_EN_GPIO_Port GPIOE
#define SENS_STP_Pin GPIO_PIN_13
#define SENS_STP_GPIO_Port GPIOE
#define SENS_DIR_Pin GPIO_PIN_14
#define SENS_DIR_GPIO_Port GPIOE
#define SENS_FLT_Pin GPIO_PIN_15
#define SENS_FLT_GPIO_Port GPIOE
#define SENS_LIM_Pin GPIO_PIN_12
#define SENS_LIM_GPIO_Port GPIOB
#define SPI2_CS0_Pin GPIO_PIN_8
#define SPI2_CS0_GPIO_Port GPIOD
#define SPI2_CS1_Pin GPIO_PIN_9
#define SPI2_CS1_GPIO_Port GPIOD
#define SPI2_CS2_Pin GPIO_PIN_10
#define SPI2_CS2_GPIO_Port GPIOD
#define SPI2_CS3_Pin GPIO_PIN_11
#define SPI2_CS3_GPIO_Port GPIOD
#define BRAKE_Pin GPIO_PIN_12
#define BRAKE_GPIO_Port GPIOD
#define AZ_HOME_Pin GPIO_PIN_8
#define AZ_HOME_GPIO_Port GPIOC
#define POL_LIM_Pin GPIO_PIN_9
#define POL_LIM_GPIO_Port GPIOC
#define RS422_DE_Pin GPIO_PIN_5
#define RS422_DE_GPIO_Port GPIOD
#define RS422_RE_Pin GPIO_PIN_6
#define RS422_RE_GPIO_Port GPIOD
#define SPI1_CS_Pin GPIO_PIN_7
#define SPI1_CS_GPIO_Port GPIOD
#define POL_STP_Pin GPIO_PIN_8
#define POL_STP_GPIO_Port GPIOB
#define POL_DIR_Pin GPIO_PIN_9
#define POL_DIR_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_1
#define BUZZER_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
