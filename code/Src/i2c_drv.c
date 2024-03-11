/**
  ******************************************************************************
  * @file		src/i2c_drv.c
  * @author		Mateusz Kozłowski
  * @brief		I2C dma + interrupt driver - methods implementation.
  ******************************************************************************
  * @par			...
  *
  ******************************************************************************
  */

////////////////////////////////// Includes ////////////////////////////////////
#include "i2c_drv.h"


/////////////////////////// Definitions (in module) ////////////////////////////
///////////////// Extern variables and functions declaration  //////////////////
void Error_Handler(uint8_t *file, uint32_t line);
//////////////// Private variables definitions (&declarations) /////////////////
static I2CDrv *pI2CDrv = NULL;				///<local copy of pointer to driver object
/////////////////////// Private functions declarations /////////////////////////
//////////////////////////// Functions definitions /////////////////////////////

/**
  * @brief		I2CDrv initialization function.
  * @param[in]  this: pointer to \ref I2CDrv object;
  * @retval 	None
  */
void I2CDrv_Init(I2CDrvDrv* this)
{
	pI2CDrvDrv = this;
}

/**
  * @brief		I2CDrv deinitialization function.
  * @param[in]  this: pointer to \ref I2CDrv object;
  * @retval 	None
  */
void I2CDrvDrv_DeInit(I2CDrv* this)
{

}

/**
  * @brief		Set callbacks for I2C.
  * @param[in]  this: pointer to \ref I2CDrv object;
  * @retval 	None
  */
void I2CDrv_SetCallback(I2CDrv *this)
{

}

/**
  * @brief		RX for I2C.
  * @param[in]  this: pointer to \ref I2CDrv object;
  * @retval 	None
  */

void I2CDrv_RX(I2CDrv *this)
{

}

/**
  * @brief		TX for I2C.
  * @param[in]  this: pointer to \ref I2CDrv object;
  * @retval 	None
  */

void I2CDrv_TX(I2CDrv *this)
{

}
