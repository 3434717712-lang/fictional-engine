#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "Buzzer.h"
#include "LightSensor.h"
#include "OLED.h"
#include "PWM.h"	
#include "Motor.h"
#include "Key.h"
int8_t RSpeed,LSpeed;
int main(void)
{	
	Motor_Init();
	Motor_SetRightSpeed(50);
	Motor_SetLeftSpeed(50);
while(1)
	{

	}
}
