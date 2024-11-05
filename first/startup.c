#include <stdint.h>

#define SRAM_START 0x20000000U
#define SRAM_SIZE (20U * 1024U) // 20KB
#define SRAM_END ((SRAM_START) + (SRAM_SIZE))
#define STACK_START SRAM_END  
extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;
int main(void);
void Reset_Handler(void);
void NMI_Handler                            (void)__attribute__((weak,alias("Default_Handler")));
void Hardfault_Handler                      (void)__attribute__((weak,alias("Default_Handler")));
void MemManage_Handler(void)    __attribute__((weak,alias("Default_Handler")));
void Busfault_Handler(void)    __attribute__((weak,alias("Default_Handler")));
void Usagefault_Handler(void)    __attribute__((weak,alias("Default_Handler")));
void Svcall_Handler(void)    __attribute__((weak,alias("Default_Handler")));
void DebugMontior_Handler(void)    __attribute__((weak,alias("Default_Handler")));
void Pendsv_Handler(void)    __attribute__((weak,alias("Default_Handler")));
void Systick_Handler(void)    __attribute__((weak,alias("Default_Handler")));
void WWDG_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void Pvd_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void Tamper_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void RTC_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void FLASH_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void RCC_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void EXTI0_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void EXTI1_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void EXTI2_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void EXTI3_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void EXTI4_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void DMA1_Channel1_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void DMA1_Channel2_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void DMA1_Channel3_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void DMA1_Channel4_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void DMA1_Channel5_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void DMA1_Channel6_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void DMA1_Channel7_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void Adc1_2_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void Can_Tx_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void Can_Rx0_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void Can_Rx1_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void Can1_SCE_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void EXTI9_5_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM1_BRK_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM1_UP_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM1_TRG_COM_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM1_CC_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM2_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM3_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM4_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void I2C1_EV_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void I2C1_ER_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void I2C2_EV_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void I2C2_ER_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void SPI1_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void SPI2_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void USART1_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void USART2_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void USART3_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void EXTI15_10_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void RTCAlarm_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM8_BRK_TIM12_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM8_UP_TIM13_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM8_TRG_COM_TIM14_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM8_CC_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void Adc3_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void FMSC_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void SDIO_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM5_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void SPI3_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void UART4_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void UART5_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM6_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void TIM7_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void DMA2_Channel1_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void DMA2_Channel2_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void DMA2_Channel3_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));
void DMA2_Channel4_5_IRQHandler(void)    __attribute__((weak,alias("Default_Handler")));





uint32_t vectors[]__attribute__((section(".isr_vector")))={
          STACK_START,
		(uint32_t)Reset_Handler,
		(uint32_t)NMI_Handler,
		(uint32_t)MemManage_Handler,
		(uint32_t)Busfault_Handler,
		(uint32_t)Usagefault_Handler,
		0,//reserved
		0,//reserved
		0,//reserved
		0,//reserved
		(uint32_t)Svcall_Handler,
		(uint32_t)DebugMontior_Handler,
			0,//reserved
		(uint32_t)Pendsv_Handler,
		(uint32_t)Systick_Handler,
		(uint32_t)WWDG_IRQHandler,
		(uint32_t)Pvd_IRQHandler,
		(uint32_t)Tamper_IRQHandler,
		(uint32_t)RTC_IRQHandler,
		(uint32_t)FLASH_IRQHandler,
		(uint32_t)RCC_IRQHandler,
		(uint32_t)EXTI0_IRQHandler,
		(uint32_t)EXTI1_IRQHandler,
		(uint32_t)EXTI2_IRQHandler,
		(uint32_t)EXTI3_IRQHandler,
		(uint32_t)EXTI4_IRQHandler,
		(uint32_t)DMA1_Channel1_IRQHandler,
		(uint32_t)DMA1_Channel2_IRQHandler,
		(uint32_t)DMA1_Channel3_IRQHandler,
		(uint32_t)DMA1_Channel4_IRQHandler,
		(uint32_t)DMA1_Channel5_IRQHandler,
		(uint32_t)DMA1_Channel6_IRQHandler,
		(uint32_t)DMA1_Channel7_IRQHandler,
		(uint32_t)Adc1_2_IRQHandler,	
		(uint32_t)Can_Tx_IRQHandler,
		(uint32_t)Can_Rx0_IRQHandler,
		(uint32_t)Can_Rx1_IRQHandler,
		(uint32_t)Can1_SCE_IRQHandler,
		(uint32_t)EXTI9_5_IRQHandler,
		(uint32_t)TIM1_BRK_IRQHandler,
		(uint32_t)TIM1_UP_IRQHandler,
		(uint32_t)TIM1_TRG_COM_IRQHandler,
		(uint32_t)TIM1_CC_IRQHandler,
		(uint32_t)TIM2_IRQHandler,
		(uint32_t)TIM3_IRQHandler,
		(uint32_t)TIM4_IRQHandler,
		(uint32_t)I2C1_EV_IRQHandler,
		(uint32_t)I2C1_ER_IRQHandler,
		(uint32_t)I2C2_EV_IRQHandler,
		(uint32_t)I2C2_ER_IRQHandler,
		(uint32_t)SPI1_IRQHandler,
		(uint32_t)SPI2_IRQHandler,
		(uint32_t)USART1_IRQHandler,
		(uint32_t)USART2_IRQHandler,
		(uint32_t)USART3_IRQHandler,
		(uint32_t)EXTI15_10_IRQHandler,
		(uint32_t)RTCAlarm_IRQHandler,
		0,
		(uint32_t)TIM8_BRK_TIM12_IRQHandler,
		(uint32_t)TIM8_UP_TIM13_IRQHandler,
		(uint32_t)TIM8_TRG_COM_TIM14_IRQHandler,
		(uint32_t)TIM8_CC_IRQHandler,
		(uint32_t)Adc3_IRQHandler,
		(uint32_t)FMSC_IRQHandler,
		(uint32_t)SDIO_IRQHandler,
        (uint32_t)TIM5_IRQHandler,
        (uint32_t)SPI3_IRQHandler,
        (uint32_t)UART4_IRQHandler,
        (uint32_t)UART5_IRQHandler,
        (uint32_t)TIM6_IRQHandler,
        (uint32_t)TIM7_IRQHandler,
        (uint32_t)DMA2_Channel1_IRQHandler,
        (uint32_t)DMA2_Channel2_IRQHandler,
        (uint32_t)DMA2_Channel3_IRQHandler,
        (uint32_t)DMA2_Channel4_5_IRQHandler,	   	
};
void Reset_Handler(void)
{
	// copy .data section to sram 
	// init the .bss section to zero in sram
	// initalise c std library
	// call main
	uint32_t size = (uint32_t)&_edata - (uint32_t)&_sdata;
	uint8_t* pDst = (uint8_t*)&_sdata; //sram
	uint8_t* pSrc = (uint8_t*)&_edata; //flash
	for(uint32_t i=0 ; i< size ;i++)
	{
		*pDst++ =*pSrc;
	}
	size =&_ebss - &_sbss;
	pDst = (uint8_t*)&_sbss;
	for(uint32_t i=0 ; i<size ;i++)
	{
		*pDst++=0;
	}
	main();
}
void Default_Handler(void)
{
	
	//while(1);
}