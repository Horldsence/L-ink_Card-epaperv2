/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 10/07/2020 08:37:34
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            37000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            8000000
#define MX_HSI48_VALUE                          48000000
#define MX_MSI_VALUE                            2097000
#define MX_PLLCLKFreq_Value                     32000000
#define MX_SYSCLKFreq_VALUE                     32000000
#define MX_HCLKFreq_Value                       32000000
#define MX_FCLKCortexFreq_Value                 32000000
#define MX_AHBFreq_Value                        32000000
#define MX_APB1Freq_Value                       32000000
#define MX_APB2Freq_Value                       32000000
#define MX_48CLKFreq_Value                      48000000
#define MX_48RNGFreq_Value                      48000000
#define MX_48USBFreq_Value                      48000000
#define MX_ADCFreq_Value                        16000000
#define MX_I2C1Freq_Value                       32000000
#define MX_LCDFreq_Value                        37000
#define MX_LPUARTFreq_Value                     32000000
#define MX_LPTIMFreq_Value                      32000000
#define MX_PWRFreq_Value                        32000000
#define MX_USART1Freq_Value                     32000000
#define MX_USART2Freq_Value                     32000000
#define MX_RTCFreq_Value                        37000
#define MX_RTCHSEDivFreq_Value                  4000000
#define MX_TimerFreq_Value                      32000000
#define MX_VCOOutputFreq_Value                  96000000
#define MX_WatchDogFreq_Value                   37000

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PC13 */
#define MX_PC13_Pin                             PC13
#define MX_PC13_GPIOx                           GPIOC
#define MX_PC13_GPIO_PuPd                       GPIO_NOPULL
#define MX_PC13_GPIO_Pin                        GPIO_PIN_13
#define MX_PC13_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PE5 */
#define MX_PE5_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PE5_Pin                              PE5
#define MX_PE5_GPIOx                            GPIOE
#define MX_PE5_PinState                         GPIO_PIN_SET
#define MX_PE5_GPIO_PuPd                        GPIO_NOPULL
#define MX_PE5_GPIO_Pin                         GPIO_PIN_5
#define MX_PE5_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PE7 */
#define MX_PE7_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PE7_Pin                              PE7
#define MX_PE7_GPIOx                            GPIOE
#define MX_PE7_PinState                         GPIO_PIN_SET
#define MX_PE7_GPIO_PuPd                        GPIO_NOPULL
#define MX_PE7_GPIO_Pin                         GPIO_PIN_7
#define MX_PE7_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PD1 */
#define MX_PD1_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PD1_Pin                              PD1
#define MX_PD1_GPIOx                            GPIOD
#define MX_PD1_PinState                         GPIO_PIN_SET
#define MX_PD1_GPIO_PuPd                        GPIO_NOPULL
#define MX_PD1_GPIO_Pin                         GPIO_PIN_1
#define MX_PD1_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PE4 */
#define MX_PE4_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PE4_Pin                              PE4
#define MX_PE4_GPIOx                            GPIOE
#define MX_PE4_PinState                         GPIO_PIN_SET
#define MX_PE4_GPIO_PuPd                        GPIO_NOPULL
#define MX_PE4_GPIO_Pin                         GPIO_PIN_4
#define MX_PE4_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

#endif  /* __MX_DEVICE_H */
