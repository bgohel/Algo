#define SRAM_START  0x20000000U
#define SRAM_SIZE  (128*1024)
#define SRAM_END  (SRAM_START + SRAM_SIZE)

#define STACK_START  SRAM_END


void Reset_Handler(void);
void Default_Handler(void);

void NMI_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void HardFault_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void MemManage_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void BusFault_Handler(void) __attribute__ ((weak, alias("Default_Handler")));
void UsageFault_Handler(void) __attribute__ ((weak, alias("Default_Handler")));

void SVC_Handler(void) __attribute__ ((weak, alias("Default_Handler")));             
void DebugMon_Handler(void) __attribute__ ((weak, alias("Default_Handler")));      
                         
void PendSV_Handler(void) __attribute__ ((weak, alias("Default_Handler")));             
void SysTick_Handler(void) __attribute__ ((weak, alias("Default_Handler")));           
void WWDG_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler")));           
void PVD_IRQHandler               			(void) __attribute__ ((weak, alias("Default_Handler")));           
void TAMP_STAMP_IRQHandler        			(void) __attribute__ ((weak, alias("Default_Handler")));           
void RTC_WKUP_IRQHandler          			(void) __attribute__ ((weak, alias("Default_Handler")));           

void RCC_IRQHandler               			(void) __attribute__ ((weak, alias("Default_Handler")));    
void EXTI0_IRQHandler             			(void) __attribute__ ((weak, alias("Default_Handler")));    
void EXTI1_IRQHandler             			(void) __attribute__ ((weak, alias("Default_Handler")));    
void EXTI2_IRQHandler             			(void) __attribute__ ((weak, alias("Default_Handler")));    
void EXTI3_IRQHandler             			(void) __attribute__ ((weak, alias("Default_Handler")));    
void EXTI4_IRQHandler             			(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream0_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));             
void DMA1_Stream1_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));         
void DMA1_Stream2_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));        
void DMA1_Stream3_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));        
void DMA1_Stream4_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));        
void DMA1_Stream5_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));         
void DMA1_Stream6_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));   
void ADC_IRQHandler               			(void) __attribute__ ((weak, alias("Default_Handler")));   
void CAN1_TX_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN1_RX0_IRQHandler          			(void) __attribute__ ((weak, alias("Default_Handler")));         
void CAN1_RX1_IRQHandler          			(void) __attribute__ ((weak, alias("Default_Handler")));            
void CAN1_SCE_IRQHandler          			(void) __attribute__ ((weak, alias("Default_Handler")));            
void EXTI9_5_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler")));            
void TIM1_BRK_TIM9_IRQHandler     			(void) __attribute__ ((weak, alias("Default_Handler")));         
void TIM1_UP_TIM10_IRQHandler     			(void) __attribute__ ((weak, alias("Default_Handler")));         
void TIM1_TRG_COM_TIM11_IRQHandler			(void) __attribute__ ((weak, alias("Default_Handler")));         
void TIM1_CC_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler")));         
void TIM2_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler")));           
void TIM3_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler")));            
void TIM4_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler")));         
void I2C1_EV_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler")));        
void I2C1_ER_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler")));        
void I2C2_EV_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler")));     
void I2C2_ER_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler")));    
void SPI1_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler"))); 
void SPI2_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler")));
void USART1_IRQHandler            			(void) __attribute__ ((weak, alias("Default_Handler")));
void USART2_IRQHandler            			(void) __attribute__ ((weak, alias("Default_Handler")));
void USART3_IRQHandler            			(void) __attribute__ ((weak, alias("Default_Handler")));
void EXTI15_10_IRQHandler         			(void) __attribute__ ((weak, alias("Default_Handler")));
void RTC_Alarm_IRQHandler         			(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_FS_WKUP_IRQHandler       			(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM8_BRK_TIM12_IRQHandler    			(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM8_UP_TIM13_IRQHandler     			(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM8_TRG_COM_TIM14_IRQHandler			(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM8_CC_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream7_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));
void FSMC_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler")));
void SDIO_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM5_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler")));
void SPI3_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler")));
void UART4_IRQHandler             			(void) __attribute__ ((weak, alias("Default_Handler")));
void UART5_IRQHandler             			(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM6_DAC_IRQHandler          			(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM7_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream0_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream1_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream2_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream3_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream4_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));
void ETH_IRQHandler               			(void) __attribute__ ((weak, alias("Default_Handler")));
void ETH_WKUP_IRQHandler          			(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_TX_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_RX0_IRQHandler          			(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_RX1_IRQHandler          			(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_SCE_IRQHandler          			(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_FS_IRQHandler            			(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream5_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream6_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream7_IRQHandler      			(void) __attribute__ ((weak, alias("Default_Handler")));
void USART6_IRQHandler            			(void) __attribute__ ((weak, alias("Default_Handler")));
void I2C3_EV_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler")));
void I2C3_ER_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_HS_EP1_OUT_IRQHandler    			(void) __attribute__ ((weak, alias("Default_Handler"))); 
void OTG_HS_EP1_IN_IRQHandler     			(void) __attribute__ ((weak, alias("Default_Handler"))); 
void OTG_HS_WKUP_IRQHandler       			(void) __attribute__ ((weak, alias("Default_Handler"))); 
void OTG_HS_IRQHandler            			(void) __attribute__ ((weak, alias("Default_Handler"))); 
void DCMI_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler"))); 
void CRYP_IRQHandler              			(void) __attribute__ ((weak, alias("Default_Handler"))); 
void HASH_RNG_IRQHandler          			(void) __attribute__ ((weak, alias("Default_Handler"))); 
void FPU_IRQHandler               			(void) __attribute__ ((weak, alias("Default_Handler"))); 
                            			
void LCD_TFT_IRQHandler           			(void) __attribute__ ((weak, alias("Default_Handler"))); 
void LCD_TFT_1_IRQHandler         			(void) __attribute__ ((weak, alias("Default_Handler"))); 
