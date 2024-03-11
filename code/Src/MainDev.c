/**
  ******************************************************************************
  * @file		src/MainDev.c
  * @author		Mateusz Kozłowski
  * @brief		Main Device - methods implementation.
  ******************************************************************************
  * @par			...
  *
  ******************************************************************************
  */

////////////////////////////////// Includes ////////////////////////////////////
#include "MainDev.h"
#include <stddef.h>

/////////////////////////// Definitions (in module) ////////////////////////////
///////////////// Extern variables and functions declaration  //////////////////
//////////////// Private variables definitions (&declarations) /////////////////
static MainDev *pMainDev = NULL;
/////////////////////// Private functions declarations /////////////////////////
//////////////////////////// Functions definitions /////////////////////////////

/**
  * @brief		MainDev initialization function.
  * @param[in]  this: pointer to \ref MainDev object;
  * @retval 	None
  */
void MainDev_Init(MainDev* this)
{
	pMainDev = this;
}

/**
  * @brief		MainDev deinitialization function.
	* For MainDev it is only template because it will be never call
  * @param[in]  this: pointer to \ref MainDev object;
  * @retval 	None
  */
void MainDev_DeInit(MainDev* this)
{

}

/**
  * @brief		Class processing loop.
  * Insert in main loop
  * @param[in]  this: pointer to \ref MainDev object;
  * @retval 	None
  */
void MainDev_MainLoopProc(MainDev* this)
{

}

