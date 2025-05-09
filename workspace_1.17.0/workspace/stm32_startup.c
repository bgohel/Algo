/* function prototypes of STM32F407x system exception and IRQ handlers */

#include<stdint.h>
#include"stm32_startup.h"


extern uint32_t _la_data;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _etext;
extern uint32_t _sbss;
extern uint32_t _ebss;

int main(void);

void Default_Handler(void)
{
	while(1);
}

void Reset_Handler(void)
{

	// copy Data section to SRAM

	uint32_t size = (uint32_t)&_edata - (uint32_t)&_sdata;

	// uint8_t *pSrc = (uint8_t*)&_etext; //SRAM before integrate system calls
	uint8_t *pSrc = (uint8_t*)&_la_data; //SRAM After Integrate system calls

	uint8_t *pDst = (uint8_t*)&_sdata; //flash

	for(int i=0; i<size; i++)
	{
		*pDst++ = *pSrc++;
	}

	// init bss section to Zero in SRAM
	size = (uint32_t)&_ebss - (uint32_t)&_sbss;

	pDst = (uint8_t*)&_sbss;

	for(int i=0; i<size; i++)
	{
		*pDst++ = 0;
	}


	// while(1);

	main();
}





uint32_t vectors[] __attribute__((section(".isr_vector"))) = {
STACK_START
,(uint32_t)&Reset_Handler
,(uint32_t)&NMI_Handler
,(uint32_t)&HardFault_Handler
,(uint32_t)&MemManage_Handler
,(uint32_t)&BusFault_Handler
,(uint32_t)&UsageFault_Handler
,0
,0
,0
,0
,(uint32_t)&SVC_Handler
,(uint32_t)&DebugMon_Handler
,0
,(uint32_t)&PendSV_Handler
,(uint32_t)&SysTick_Handler
,(uint32_t)&WWDG_IRQHandler              			/* Window Watchdog interrupt                                          */
,(uint32_t)&PVD_IRQHandler               			/* PVD through EXTI line detection interrupt                          */
,(uint32_t)&TAMP_STAMP_IRQHandler        			/* Tamper and TimeStamp interrupts through the EXTI line              */
,(uint32_t)&RTC_WKUP_IRQHandler          			/* RTC Wakeup interrupt through the EXTI line                         */
,0                            			/* Reserved                                                           */
,(uint32_t)&RCC_IRQHandler               			/* RCC global interrupt                                               */
,(uint32_t)&EXTI0_IRQHandler             			/* EXTI Line0 interrupt                                               */
,(uint32_t)&EXTI1_IRQHandler             			/* EXTI Line1 interrupt                                               */
,(uint32_t)&EXTI2_IRQHandler             			/* EXTI Line2 interrupt                                               */
,(uint32_t)&EXTI3_IRQHandler             			/* EXTI Line3 interrupt                                               */
,(uint32_t)&EXTI4_IRQHandler             			/* EXTI Line4 interrupt                                               */
,(uint32_t)&DMA1_Stream0_IRQHandler      			/* DMA1 Stream0 global interrupt                                      */
,(uint32_t)&DMA1_Stream1_IRQHandler      			/* DMA1 Stream1 global interrupt                                      */
,(uint32_t)&DMA1_Stream2_IRQHandler      			/* DMA1 Stream2 global interrupt                                      */
,(uint32_t)&DMA1_Stream3_IRQHandler      			/* DMA1 Stream3 global interrupt                                      */
,(uint32_t)&DMA1_Stream4_IRQHandler      			/* DMA1 Stream4 global interrupt                                      */
,(uint32_t)&DMA1_Stream5_IRQHandler      			/* DMA1 Stream5 global interrupt                                      */
,(uint32_t)&DMA1_Stream6_IRQHandler      			/* DMA1 Stream6 global interrupt                                      */
,(uint32_t)&ADC_IRQHandler               			/* ADC3 global interrupts                                             */
,(uint32_t)&CAN1_TX_IRQHandler           			/* CAN1 TX interrupts                                                 */
,(uint32_t)&CAN1_RX0_IRQHandler          			/* CAN1 RX0 interrupts                                                */
,(uint32_t)&CAN1_RX1_IRQHandler          			/* CAN1 RX1 interrupts                                                */
,(uint32_t)&CAN1_SCE_IRQHandler          			/* CAN1 SCE interrupt                                                 */
,(uint32_t)&EXTI9_5_IRQHandler           			/* EXTI Line[9:5] interrupts                                          */
,(uint32_t)&TIM1_BRK_TIM9_IRQHandler     			/* TIM1 Break interrupt and TIM9 global interrupt                     */
,(uint32_t)&TIM1_UP_TIM10_IRQHandler     			/* TIM1 Update interrupt and TIM10 global interrupt                   */
,(uint32_t)&TIM1_TRG_COM_TIM11_IRQHandler			/* TIM1 Trigger and Commutation interrupts and TIM11 global interrupt */
,(uint32_t)&TIM1_CC_IRQHandler           			/* TIM1 Capture Compare interrupt                                     */
,(uint32_t)&TIM2_IRQHandler              			/* TIM2 global interrupt                                              */
,(uint32_t)&TIM3_IRQHandler              			/* TIM3 global interrupt                                              */
,(uint32_t)&TIM4_IRQHandler              			/* TIM4 global interrupt                                              */
,(uint32_t)&I2C1_EV_IRQHandler           			/* I2C1 event interrupt                                               */
,(uint32_t)&I2C1_ER_IRQHandler           			/* I2C1 error interrupt                                               */
,(uint32_t)&I2C2_EV_IRQHandler           			/* I2C2 event interrupt                                               */
,(uint32_t)&I2C2_ER_IRQHandler           			/* I2C2 error interrupt                                               */
,(uint32_t)&SPI1_IRQHandler              			/* SPI1 global interrupt                                              */
,(uint32_t)&SPI2_IRQHandler              			/* SPI2 global interrupt                                              */
,(uint32_t)&USART1_IRQHandler            			/* USART1 global interrupt                                            */
,(uint32_t)&USART2_IRQHandler            			/* USART2 global interrupt                                            */
,(uint32_t)&USART3_IRQHandler            			/* USART3 global interrupt                                            */
,(uint32_t)&EXTI15_10_IRQHandler         			/* EXTI Line[15:10] interrupts                                        */
,(uint32_t)&RTC_Alarm_IRQHandler         			/* RTC Alarms (A and B) through EXTI line interrupt                   */
,(uint32_t)&OTG_FS_WKUP_IRQHandler       			/* USB On-The-Go FS Wakeup through EXTI line interrupt                */
,(uint32_t)&TIM8_BRK_TIM12_IRQHandler    			/* TIM8 Break interrupt and TIM12 global interrupt                    */
,(uint32_t)&TIM8_UP_TIM13_IRQHandler     			/* TIM8 Update interrupt and TIM13 global interrupt                   */
,(uint32_t)&TIM8_TRG_COM_TIM14_IRQHandler			/* TIM8 Trigger and Commutation interrupts and TIM14 global interrupt */
,(uint32_t)&TIM8_CC_IRQHandler           			/* TIM8 Capture Compare interrupt                                     */
,(uint32_t)&DMA1_Stream7_IRQHandler      			/* DMA1 Stream7 global interrupt                                      */
,(uint32_t)&FSMC_IRQHandler              			/* FSMC global interrupt                                              */
,(uint32_t)&SDIO_IRQHandler              			/* SDIO global interrupt                                              */
,(uint32_t)&TIM5_IRQHandler              			/* TIM5 global interrupt                                              */
,(uint32_t)&SPI3_IRQHandler              			/* SPI3 global interrupt                                              */
,(uint32_t)&UART4_IRQHandler             			/* UART4 global interrupt                                             */
,(uint32_t)&UART5_IRQHandler             			/* UART5 global interrupt                                             */
,(uint32_t)&TIM6_DAC_IRQHandler          			/* TIM6 global interrupt, DAC1 and DAC2 underrun error interrupt      */
,(uint32_t)&TIM7_IRQHandler              			/* TIM7 global interrupt                                              */
,(uint32_t)&DMA2_Stream0_IRQHandler      			/* DMA2 Stream0 global interrupt                                      */
,(uint32_t)&DMA2_Stream1_IRQHandler      			/* DMA2 Stream1 global interrupt                                      */
,(uint32_t)&DMA2_Stream2_IRQHandler      			/* DMA2 Stream2 global interrupt                                      */
,(uint32_t)&DMA2_Stream3_IRQHandler      			/* DMA2 Stream3 global interrupt                                      */
,(uint32_t)&DMA2_Stream4_IRQHandler      			/* DMA2 Stream4 global interrupt                                      */
,(uint32_t)&ETH_IRQHandler               			/* Ethernet global interrupt                                          */
,(uint32_t)&ETH_WKUP_IRQHandler          			/* Ethernet Wakeup through EXTI line interrupt                        */
,(uint32_t)&CAN2_TX_IRQHandler           			/* CAN2 TX interrupts                                                 */
,(uint32_t)&CAN2_RX0_IRQHandler          			/* CAN2 RX0 interrupts                                                */
,(uint32_t)&CAN2_RX1_IRQHandler          			/* CAN2 RX1 interrupts                                                */
,(uint32_t)&CAN2_SCE_IRQHandler          			/* CAN2 SCE interrupt                                                 */
,(uint32_t)&OTG_FS_IRQHandler            			/* USB On The Go FS global interrupt                                  */
,(uint32_t)&DMA2_Stream5_IRQHandler      			/* DMA2 Stream5 global interrupt                                      */
,(uint32_t)&DMA2_Stream6_IRQHandler      			/* DMA2 Stream6 global interrupt                                      */
,(uint32_t)&DMA2_Stream7_IRQHandler      			/* DMA2 Stream7 global interrupt                                      */
,(uint32_t)&USART6_IRQHandler            			/* USART6 global interrupt                                            */
,(uint32_t)&I2C3_EV_IRQHandler           			/* I2C3 event interrupt                                               */
,(uint32_t)&I2C3_ER_IRQHandler           			/* I2C3 error interrupt                                               */
,(uint32_t)&OTG_HS_EP1_OUT_IRQHandler    			/* USB On The Go HS End Point 1 Out global interrupt                  */
,(uint32_t)&OTG_HS_EP1_IN_IRQHandler     			/* USB On The Go HS End Point 1 In global interrupt                   */
,(uint32_t)&OTG_HS_WKUP_IRQHandler       			/* USB On The Go HS Wakeup through EXTI interrupt                     */
,(uint32_t)&OTG_HS_IRQHandler            			/* USB On The Go HS global interrupt                                  */
,(uint32_t)&DCMI_IRQHandler              			/* DCMI global interrupt                                              */
,(uint32_t)&CRYP_IRQHandler              			/* CRYP crypto global interrupt                                       */
,(uint32_t)&HASH_RNG_IRQHandler          			/* Hash and Rng global interrupt                                      */
,(uint32_t)&FPU_IRQHandler               			/* Floating point interrupt                                           */
,0                            			/* Reserved                                                           */
,0                            			/* Reserved                                                           */
,0                            			/* Reserved                                                           */
,0                            			/* Reserved                                                           */
,0                            			/* Reserved                                                           */
,0                            			/* Reserved                                                           */
,(uint32_t)&LCD_TFT_IRQHandler           			/* LTDC global interrupt                                              */
,(uint32_t)&LCD_TFT_1_IRQHandler         			/* LTDC global error interrupt                                        */,
};




