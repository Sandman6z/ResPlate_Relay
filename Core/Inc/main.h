/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32g0xx_hal.h"

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
#define LEDIndicate_Pin GPIO_PIN_3
#define LEDIndicate_GPIO_Port GPIOA
#define relayCtrl1_Pin GPIO_PIN_4
#define relayCtrl1_GPIO_Port GPIOA
#define relayCtrl2_Pin GPIO_PIN_5
#define relayCtrl2_GPIO_Port GPIOA
#define relayCtrl3_Pin GPIO_PIN_6
#define relayCtrl3_GPIO_Port GPIOA
#define relayCtrl4_Pin GPIO_PIN_7
#define relayCtrl4_GPIO_Port GPIOA
#define relayCtrl5_Pin GPIO_PIN_0
#define relayCtrl5_GPIO_Port GPIOB
#define relayCtrl6_Pin GPIO_PIN_1
#define relayCtrl6_GPIO_Port GPIOB
#define relayCtrl7_Pin GPIO_PIN_2
#define relayCtrl7_GPIO_Port GPIOB
#define relayCtrl8_Pin GPIO_PIN_10
#define relayCtrl8_GPIO_Port GPIOB
#define relayCtrl9_Pin GPIO_PIN_8
#define relayCtrl9_GPIO_Port GPIOA
#define relayCtrl10_Pin GPIO_PIN_9
#define relayCtrl10_GPIO_Port GPIOA
#define relayCtrl11_Pin GPIO_PIN_10
#define relayCtrl11_GPIO_Port GPIOA
#define relayCtrl12_Pin GPIO_PIN_11
#define relayCtrl12_GPIO_Port GPIOA
#define relayCtrl13_Pin GPIO_PIN_5
#define relayCtrl13_GPIO_Port GPIOB
#define relayCtrl14_Pin GPIO_PIN_6
#define relayCtrl14_GPIO_Port GPIOB
#define relayCtrl15_Pin GPIO_PIN_7
#define relayCtrl15_GPIO_Port GPIOB
#define relayCtrl16_Pin GPIO_PIN_8
#define relayCtrl16_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
