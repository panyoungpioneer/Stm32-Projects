/***************************************************************************************
 *	FileName					:	
 *	CopyRight					:
 *	ModuleName				:	
 *
 *	CPU							:
 *	RTOS						:
 *
 *	Create Data							:	2015/01/31
 *	Author/Corportation			:	Ray
 *
 *	Abstract Description		:	
 *
 *--------------------------------Revision History--------------------------------------
 *	No	version		Data		Revised By			Item			Description
 *	1		v1.0							Ray												Create this file
 *	2		v2.0			2015/4/23	Ray											Sucessfully control the air conditioner
 *
 ***************************************************************************************/



/**************************************************************
*	Debug switch Section
**************************************************************/


/**************************************************************
*	Include File Section
**************************************************************/
#include "stm32f10x.h"
#include "Infrared.h"
#include "pwm.h"

/**************************************************************
*	Macro Define Section
**************************************************************/


/**************************************************************
*	Struct Define Section
**************************************************************/


/**************************************************************
*	Prototype Declare Section
**************************************************************/


/**************************************************************
*	Global Variable Declare Section
**************************************************************/


/**************************************************************
*	File Static Variable Define Section
**************************************************************/


/**************************************************************
*	Function Define Section
**************************************************************/
int main(void)
{
	SystemInit();
	delay_init(72);
	TIM2_PWM_Init(1895,0);
	Infrared_GPIO_Configuration();
	Infrared_EXTI_Configuration();
	
	Key_GPIO_Configuration();
	
	while(1)
	{
		if(Is_Press_Key() == 1)
			Infrared_Send();
	}


	return 0;
}
/**
 *  @name
 *	@description
 *	@param			
 *	@return		
 *  @notice
 */