/**
  ******************************************************************************
  * @file		src/USARTDrv.h
  * @author		Mateusz Kozłowski
  * @brief		Header for I2C driver
  ******************************************************************************
  * @par		...
  ******************************************************************************
  */

#ifndef I2C_DRV_H_
#define I2C_DRV_H_

////////////////////////////////// Includes ////////////////////////////////////
#include "stm32F4xx.h"
#include <stddef.h>
#include <stdint.h>
////////////////////////////// Public definitions //////////////////////////////
////////////////// Public typedefs and structures declarations /////////////////
//////////////////////// Module structure declaration //////////////////////////

/** @brief Main device structure declaration.
* Contains all device functions structures object.
*/
typedef struct _I2CDrv{
//public:
//privat:
	void	(*pCallback[16])(void);		///<Callbacks table
}I2CDrv;

///////////////////// Module public methods declaration ////////////////////////
void I2CDrv_Init(I2CDrv* this);
void I2CDrv_DeInit(I2CDrv* this);
void I2CDrv_RX();
void I2CDRV_TX();
void I2CDrv_SetCallback();

#endif /* I2CDRV_H_ */
