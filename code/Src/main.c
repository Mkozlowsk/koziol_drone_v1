
/**
  ******************************************************************************
  * @file		Src/main.c
  * @author		Mateusz Kozłowski
  * @brief		Program entry point.
  ******************************************************************************
  * @par			In entry point system clock will be configure, main devices
	* structures will be initialized.
	* Additionally some helper functions will be defined.
	*
  * @bug ...
  *
  ******************************************************************************
  */
////////////////////////////////// Includes ////////////////////////////////////

#include "main.h"
#include "MainDev.h"

/////////////////////////// Definitions (in module) ////////////////////////////
///////////////// Extern variables and functions declaration  //////////////////
//////////////// Private variables definitions (&declarations) /////////////////
MainDev MainDevOb;
/////////////////////// Private functions declarations /////////////////////////
void SystemClock_Config(void);
void Error_Handler(uint8_t *file, uint32_t line);
void SystemCoreClockUpdate(void);
//////////////////////////// Functions definitions /////////////////////////////
int main(void)
{
	SystemClock_Config();
	MainDev_Init(&MainDevOb);
	for( ;; )
	{
		MainDev_MainLoopProc(&MainDevOb);
	}
}


/**
  * @brief  System Clock Configuration
  *         The system Clock is configured as follow :
  *            System Clock source            = PLL (HSE)
  *            SYSCLK(Hz)                     = 100000000
  *            HCLK(Hz)                       = 100000000
  *            AHB Prescaler                  = 1
  *            APB1 Prescaler                 = 2
  *            APB2 Prescaler                 = 1
  *            HSE Frequency(Hz)              = 8000000
  *            PLL_M                          = 8
  *            PLL_N                          = 400
  *            PLL_P                          = 4
  *            VDD(V)                         = 3.3
  *            Main regulator output voltage  = Scale1 mode
  *            Flash Latency(WS)              = 3
  * @param  None
  * @retval None

  */

void SystemClock_Config(void)
{
  /* Enable HSE oscillator */
  LL_RCC_HSE_EnableBypass();
  LL_RCC_HSE_Enable();
  while(LL_RCC_HSE_IsReady() != 1)
  {
  };

  /* Set FLASH latency */
  LL_FLASH_SetLatency(LL_FLASH_LATENCY_3);

  /* Main PLL configuration and activation */
  LL_RCC_PLL_ConfigDomain_SYS(LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_8, 400, LL_RCC_PLLP_DIV_4);
  LL_RCC_PLL_Enable();
  while(LL_RCC_PLL_IsReady() != 1)
  {
  };

  /* Sysclk activation on the main PLL */
  LL_RCC_SetAHBPrescaler(LL_RCC_SYSCLK_DIV_1);
  LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_PLL);
  while(LL_RCC_GetSysClkSource() != LL_RCC_SYS_CLKSOURCE_STATUS_PLL)
  {
  };

  /* Set APB1 & APB2 prescaler */
  LL_RCC_SetAPB1Prescaler(LL_RCC_APB1_DIV_2);
  LL_RCC_SetAPB2Prescaler(LL_RCC_APB2_DIV_1);

  /* Set systick to 1ms */
  SysTick_Config(100000000 / 1000);

  /* Update CMSIS variable (which can be updated also through SystemCoreClockUpdate function) */

  SystemCoreClockUpdate();
}


/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(uint8_t *file, uint32_t line)
{
#ifdef DEBUG
	__ASM volatile("BKPT #01");
#else
#endif
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
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d", file, line) */
#ifdef DEBUG
	__ASM volatile("BKPT #01");
#else
#endif
}
#endif /*USE_FULL_ASSERT*/
