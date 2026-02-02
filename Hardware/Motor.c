#include "stm32f10x.h"                  // Device header
#include "PWM.h"
void Motor_Init(void)
{	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
		GPIO_InitTypeDef GPIO_InitStructure;
		GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
		GPIO_InitStructure.GPIO_Pin=GPIO_Pin_4 | GPIO_Pin_5;
		GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
		GPIO_Init(GPIOA,&GPIO_InitStructure);
	PWM_Init();
}
void Motor_SetRightSpeed(int8_t RSpeed)
{	
	if(RSpeed>0){
		GPIO_ResetBits(GPIOA,GPIO_Pin_4);
		GPIO_SetBits(GPIOA,GPIO_Pin_5);
	Setcompare3(RSpeed);}
	else if(RSpeed==0){
		GPIO_ResetBits(GPIOA,GPIO_Pin_5);
		GPIO_SetBits(GPIOA,GPIO_Pin_4);
	Setcompare3(RSpeed);
	}
	else{
		Setcompare3(-RSpeed);
	}
}
void Motor_SetLeftSpeed(int8_t LSpeed)
{	
	if(LSpeed>0){
		GPIO_ResetBits(GPIOA,GPIO_Pin_4);
		GPIO_SetBits(GPIOA,GPIO_Pin_5);
	Setcompare3(LSpeed);}
	else if(LSpeed==0){
		GPIO_ResetBits(GPIOA,GPIO_Pin_5);
		GPIO_SetBits(GPIOA,GPIO_Pin_4);
	Setcompare3(LSpeed);
	}
	else{
		Setcompare3(-LSpeed);
	}
}
