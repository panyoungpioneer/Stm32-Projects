/***************************************************************************************
 *	File Name				:		Key.h	
 *	CopyRight				:
 *	ModuleName			:	
 *
 *	CPU						:
 *	RTOS					:
 *
 *	Create Data				:	2015/04/21
 *	Author/Corportation		:	Ray
 *
 *	Abstract Description	:	this will be used for 
 *
 *--------------------------------Revision History--------------------------------------
 *	No	version		Data			Revised By			Item			Description
 *	1		v1.0			2015/04/21	Ray												Create this file
 *
 ***************************************************************************************/


/**************************************************************
*	Multi-Include-Prevent Section
**************************************************************/
#ifndef __KEY_H
#define __KEY_HS


/**************************************************************
*	Debug switch Section
**************************************************************/



/**************************************************************
*	Include File Section
**************************************************************/
#include "stm32f10x.h"

/**************************************************************
*	Macro Define Section
**************************************************************/


/**************************************************************
*	Struct Define Section
**************************************************************/



/**************************************************************
*	Prototype Declare Section
**************************************************************/
void Key_GPIO_Configuration();
u8 Is_Press_Key();

/**************************************************************
*	End-Multi-Include-Prevent Section
**************************************************************/
#endif