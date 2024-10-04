/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

// Idea: Use switch case and 2 LED7
void display7SEG(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_1_Pin|LED7_2_Pin|LED7_3_Pin|LED7_4_Pin|LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_6_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, LED7_1_Pin|LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_3_Pin|LED7_4_Pin|LED7_5_Pin|LED7_6_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_1_Pin|LED7_3_Pin|LED7_4_Pin|LED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_2_Pin|LED7_5_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_1_Pin|LED7_2_Pin|LED7_3_Pin|LED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_4_Pin|LED7_5_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, LED7_1_Pin|LED7_2_Pin|LED7_5_Pin|LED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_3_Pin|LED7_4_Pin, SET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_2_Pin|LED7_3_Pin|LED7_5_Pin|LED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_1_Pin|LED7_4_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_2_Pin|LED7_3_Pin|LED7_4_Pin|LED7_5_Pin|LED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_1_Pin, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_1_Pin|LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_3_Pin|LED7_4_Pin|LED7_5_Pin|LED7_6_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_1_Pin|LED7_2_Pin|LED7_3_Pin|LED7_4_Pin|LED7_5_Pin|LED7_6_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_1_Pin|LED7_2_Pin|LED7_3_Pin|LED7_5_Pin|LED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED7_4_Pin, SET);
		break;
	default:
		HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_1_Pin|LED7_2_Pin|LED7_3_Pin|LED7_4_Pin|LED7_5_Pin|LED7_6_Pin, SET);
		break;
	}
}

void displayS7SEG(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(GPIOB, SLED7_0_Pin|SLED7_1_Pin|SLED7_2_Pin|SLED7_3_Pin|SLED7_4_Pin|SLED7_5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SLED7_6_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, SLED7_1_Pin|SLED7_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SLED7_0_Pin|SLED7_3_Pin|SLED7_4_Pin|SLED7_5_Pin|SLED7_6_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, SLED7_0_Pin|SLED7_1_Pin|SLED7_3_Pin|SLED7_4_Pin|SLED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SLED7_2_Pin|SLED7_5_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, SLED7_0_Pin|SLED7_1_Pin|SLED7_2_Pin|SLED7_3_Pin|SLED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SLED7_4_Pin|SLED7_5_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, SLED7_1_Pin|SLED7_2_Pin|SLED7_5_Pin|SLED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SLED7_0_Pin|SLED7_3_Pin|SLED7_4_Pin, SET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, SLED7_0_Pin|SLED7_2_Pin|SLED7_3_Pin|SLED7_5_Pin|SLED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SLED7_1_Pin|SLED7_4_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, SLED7_0_Pin|SLED7_2_Pin|SLED7_3_Pin|SLED7_4_Pin|SLED7_5_Pin|SLED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SLED7_1_Pin, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, SLED7_0_Pin|SLED7_1_Pin|SLED7_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SLED7_3_Pin|SLED7_4_Pin|SLED7_5_Pin|SLED7_6_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, SLED7_0_Pin|SLED7_1_Pin|SLED7_2_Pin|SLED7_3_Pin|SLED7_4_Pin|SLED7_5_Pin|SLED7_6_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, SLED7_0_Pin|SLED7_1_Pin|SLED7_2_Pin|SLED7_3_Pin|SLED7_5_Pin|SLED7_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SLED7_4_Pin, SET);
		break;
	default:
		HAL_GPIO_WritePin(GPIOB, SLED7_0_Pin|SLED7_1_Pin|SLED7_2_Pin|SLED7_3_Pin|SLED7_4_Pin|SLED7_5_Pin|SLED7_6_Pin, SET);
		break;
	}
}

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */
  int counter = 10;
    // Idea: Use two variable for lights at two directions
    int direction1 = 0;
    int direction2 = 0;
    /* Infinite loop */
    /* USER CODE BEGIN WHILE */
    while (1)
    {
      /* USER CODE END WHILE */
  	if (counter == 10) {
  		direction1 = 5;
  		HAL_GPIO_WritePin ( RED_1_GPIO_Port, RED_1_Pin, RESET);
  		HAL_GPIO_WritePin ( YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET);
  		HAL_GPIO_WritePin ( GREEN_1_GPIO_Port, GREEN_1_Pin, SET);

  		direction2 = 3;
  		HAL_GPIO_WritePin ( RED_2_GPIO_Port, RED_2_Pin, SET);
  		HAL_GPIO_WritePin ( YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET);
  		HAL_GPIO_WritePin ( GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);
  	}
  	else if (counter == 7) {
  		direction2 = 2;
  		HAL_GPIO_WritePin ( RED_2_GPIO_Port, RED_2_Pin, SET);
  		HAL_GPIO_WritePin ( YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
  		HAL_GPIO_WritePin ( GREEN_2_GPIO_Port, GREEN_2_Pin, SET);
  	}
  	else if (counter == 5) {
  		direction1 = 3;
  		HAL_GPIO_WritePin ( RED_1_GPIO_Port, RED_1_Pin, SET);
  		HAL_GPIO_WritePin ( YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET);
  		HAL_GPIO_WritePin ( GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);

  		direction2 = 5;
  		HAL_GPIO_WritePin ( RED_2_GPIO_Port, RED_2_Pin, RESET);
  		HAL_GPIO_WritePin ( YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET);
  		HAL_GPIO_WritePin ( GREEN_2_GPIO_Port, GREEN_2_Pin, SET);
  	}
  	else if (counter == 2) {
  		direction1 = 2;
  		HAL_GPIO_WritePin ( RED_1_GPIO_Port, RED_1_Pin, SET);
  		HAL_GPIO_WritePin ( YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
  		HAL_GPIO_WritePin ( GREEN_1_GPIO_Port, GREEN_1_Pin, SET);
  	}
  	display7SEG(direction1);
  	displayS7SEG(direction2);
  	counter--;
  	direction1--;
  	direction2--;
  	if (counter == 0) {
  		counter = 10;
  	}
  	HAL_Delay(1000);
      /* USER CODE BEGIN 3 */
    }
    /* USER CODE END 3 */
  }

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, RED_1_Pin|YELLOW_1_Pin|GREEN_1_Pin|RED_2_Pin
                          |YELLOW_2_Pin|GREEN_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED7_0_Pin|LED7_1_Pin|LED7_2_Pin|SLED7_2_Pin
                          |SLED7_3_Pin|SLED7_4_Pin|SLED7_5_Pin|SLED7_6_Pin
                          |LED7_3_Pin|LED7_4_Pin|LED7_5_Pin|LED7_6_Pin
                          |SLED7_0_Pin|SLED7_1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : RED_1_Pin YELLOW_1_Pin GREEN_1_Pin RED_2_Pin
                           YELLOW_2_Pin GREEN_2_Pin */
  GPIO_InitStruct.Pin = RED_1_Pin|YELLOW_1_Pin|GREEN_1_Pin|RED_2_Pin
                          |YELLOW_2_Pin|GREEN_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED7_0_Pin LED7_1_Pin LED7_2_Pin SLED7_2_Pin
                           SLED7_3_Pin SLED7_4_Pin SLED7_5_Pin SLED7_6_Pin
                           LED7_3_Pin LED7_4_Pin LED7_5_Pin LED7_6_Pin
                           SLED7_0_Pin SLED7_1_Pin */
  GPIO_InitStruct.Pin = LED7_0_Pin|LED7_1_Pin|LED7_2_Pin|SLED7_2_Pin
                          |SLED7_3_Pin|SLED7_4_Pin|SLED7_5_Pin|SLED7_6_Pin
                          |LED7_3_Pin|LED7_4_Pin|LED7_5_Pin|LED7_6_Pin
                          |SLED7_0_Pin|SLED7_1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
