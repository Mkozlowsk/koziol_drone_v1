/*
 * MainDev.h
 *
 *  Created on: Mar 2, 2024
 *      Author: panba
 */

#ifndef MAINDEV_H_
#define MAINDEV_H_



////////////////////////////////// Includes ////////////////////////////////////
////////////////////////////// Public definitions //////////////////////////////
////////////////// Public typedefs and structures declarations /////////////////
//////////////////////// Module structure declaration //////////////////////////

/** @brief Main device structure declaration.
* Contains all device functions structures object.
*/
typedef struct _MainDev{
//public:
//private:
}MainDev;

///////////////////// Module public methods declaration ////////////////////////
void MainDev_Init(MainDev* this);
void MainDev_DeInit(MainDev* this);
void MainDev_MainLoopProc(MainDev* this);

#endif /*MAINDEV_H_*/
