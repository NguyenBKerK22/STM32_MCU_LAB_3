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
#include "stm32f1xx_hal.h"

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
#define EN0_Pin GPIO_PIN_0
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_1
#define EN1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_2
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_3
#define EN3_GPIO_Port GPIOA
#define EN4_Pin GPIO_PIN_4
#define EN4_GPIO_Port GPIOA
#define EN5_Pin GPIO_PIN_5
#define EN5_GPIO_Port GPIOA
#define EN6_Pin GPIO_PIN_6
#define EN6_GPIO_Port GPIOA
#define EN7_Pin GPIO_PIN_7
#define EN7_GPIO_Port GPIOA
#define SEG2_Pin GPIO_PIN_10
#define SEG2_GPIO_Port GPIOB
#define SEG3_Pin GPIO_PIN_11
#define SEG3_GPIO_Port GPIOB
#define SEG4_Pin GPIO_PIN_12
#define SEG4_GPIO_Port GPIOB
#define SEG5_Pin GPIO_PIN_13
#define SEG5_GPIO_Port GPIOB
#define SEG6_Pin GPIO_PIN_14
#define SEG6_GPIO_Port GPIOB
#define LED_Pin GPIO_PIN_15
#define LED_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_10
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_11
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_12
#define LED_GREEN_GPIO_Port GPIOA
#define LED_RED_2_Pin GPIO_PIN_13
#define LED_RED_2_GPIO_Port GPIOA
#define LED_YELLOW_2_Pin GPIO_PIN_14
#define LED_YELLOW_2_GPIO_Port GPIOA
#define LED_GREEN_2_Pin GPIO_PIN_15
#define LED_GREEN_2_GPIO_Port GPIOA
#define BUTTON1_Pin GPIO_PIN_3
#define BUTTON1_GPIO_Port GPIOB
#define BUTTON3_Pin GPIO_PIN_4
#define BUTTON3_GPIO_Port GPIOB
#define BUTTON2_Pin GPIO_PIN_5
#define BUTTON2_GPIO_Port GPIOB
#define SEG0_Pin GPIO_PIN_8
#define SEG0_GPIO_Port GPIOB
#define SEG1_Pin GPIO_PIN_9
#define SEG1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
