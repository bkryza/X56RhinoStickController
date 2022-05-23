/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#define BluePillLED_Pin GPIO_PIN_13
#define BluePillLED_GPIO_Port GPIOC
#define Button0_Pin GPIO_PIN_1
#define Button0_GPIO_Port GPIOA
#define Button1_Pin GPIO_PIN_2
#define Button1_GPIO_Port GPIOA
#define Button2_Pin GPIO_PIN_3
#define Button2_GPIO_Port GPIOA
#define Button3_Pin GPIO_PIN_0
#define Button3_GPIO_Port GPIOB
#define Button4_Pin GPIO_PIN_1
#define Button4_GPIO_Port GPIOB
#define Button5_Pin GPIO_PIN_2
#define Button5_GPIO_Port GPIOB
#define Button6_Pin GPIO_PIN_10
#define Button6_GPIO_Port GPIOB
#define Butotn8_Pin GPIO_PIN_12
#define Butotn8_GPIO_Port GPIOB
#define Button9_Pin GPIO_PIN_13
#define Button9_GPIO_Port GPIOB
#define Button10_Pin GPIO_PIN_14
#define Button10_GPIO_Port GPIOB
#define Button11_Pin GPIO_PIN_15
#define Button11_GPIO_Port GPIOB
#define Button12_Pin GPIO_PIN_8
#define Button12_GPIO_Port GPIOA
#define Button13_Pin GPIO_PIN_9
#define Button13_GPIO_Port GPIOA
#define Button14_Pin GPIO_PIN_10
#define Button14_GPIO_Port GPIOA
#define Button7_Pin GPIO_PIN_5
#define Button7_GPIO_Port GPIOB
#define Button15_Pin GPIO_PIN_6
#define Button15_GPIO_Port GPIOB
#define Button16_Pin GPIO_PIN_7
#define Button16_GPIO_Port GPIOB
#define Button17_Pin GPIO_PIN_8
#define Button17_GPIO_Port GPIOB
#define Button18_Pin GPIO_PIN_9
#define Button18_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
