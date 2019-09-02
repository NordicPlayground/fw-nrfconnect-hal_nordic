/**
 * Copyright (c) 2017 - 2018, Nordic Semiconductor ASA
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef NRFX_CONFIG_H__
#define NRFX_CONFIG_H__


/*
 * These are mappings of Kconfig options enabling nrfx drivers and particular
 * peripheral instances to the corresponding symbols used inside of nrfx.
 * Please note that only subsets of these entries are used for particular SoCs
 * supported by nrfx (see the corresponding nrfx_config_*.h files).
 */

#ifdef CONFIG_NRFX_ADC
#define NRFX_ADC_ENABLED 1
#endif

#ifdef CONFIG_NRFX_CLOCK
#define NRFX_CLOCK_ENABLED 1
#endif

#ifdef CONFIG_NRFX_DPPI
#define NRFX_DPPI_ENABLED 1
#endif

#ifdef CONFIG_NRFX_GPIOTE
#define NRFX_GPIOTE_ENABLED 1
#endif

#ifdef CONFIG_NRFX_NFCT
#define NRFX_NFCT_ENABLED 1
#endif

#ifdef CONFIG_NRFX_NVMC
#define NRFX_NVMC_ENABLED 1
#endif

#ifdef CONFIG_NRFX_PPI
#define NRFX_PPI_ENABLED 1
#endif

#ifdef CONFIG_NRFX_PWM
#define NRFX_PWM_ENABLED 1
#endif
#ifdef CONFIG_PWM_0
#define NRFX_PWM0_ENABLED 1
#endif
#ifdef CONFIG_PWM_1
#define NRFX_PWM1_ENABLED 1
#endif
#ifdef CONFIG_PWM_2
#define NRFX_PWM2_ENABLED 1
#endif
#ifdef CONFIG_PWM_3
#define NRFX_PWM3_ENABLED 1
#endif

#ifdef CONFIG_NRFX_QDEC
#define NRFX_QDEC_ENABLED 1
#endif

#ifdef CONFIG_NRFX_RTC
#define NRFX_RTC_ENABLED 1
#endif
#ifdef CONFIG_NRFX_RTC0
#define NRFX_RTC0_ENABLED 1
#endif
#ifdef CONFIG_NRFX_RTC1
#define NRFX_RTC1_ENABLED 1
#endif
#ifdef CONFIG_NRFX_RTC2
#define NRFX_RTC2_ENABLED 1
#endif

#ifdef CONFIG_NRFX_SAADC
#define NRFX_SAADC_ENABLED 1
#endif

#ifdef CONFIG_NRFX_SPI
#define NRFX_SPI_ENABLED 1
#endif
#ifdef CONFIG_SPI_0_NRF_SPI
#define NRFX_SPI0_ENABLED 1
#endif
#ifdef CONFIG_SPI_1_NRF_SPI
#define NRFX_SPI1_ENABLED 1
#endif
#ifdef CONFIG_SPI_2_NRF_SPI
#define NRFX_SPI2_ENABLED 1
#endif
// NRFX_SPI_MISO_PULL_CFG:
// 0 - NRF_GPIO_PIN_NOPULL
// 1 - NRF_GPIO_PIN_PULLDOWN
// 3 - NRF_GPIO_PIN_PULLUP
#ifdef CONFIG_SPI_NRFX_SPI_MISO_NO_PULL
#define NRFX_SPI_MISO_PULL_CFG 0
#endif
#ifdef CONFIG_SPI_NRFX_SPI_MISO_PULL_DOWN
#define NRFX_SPI_MISO_PULL_CFG 1
#endif
#ifdef CONFIG_SPI_NRFX_SPI_MISO_PULL_UP
#define NRFX_SPI_MISO_PULL_CFG 3
#endif

#ifdef CONFIG_NRFX_SPIM
#define NRFX_SPIM_ENABLED 1
#endif
#ifdef CONFIG_SPI_0_NRF_SPIM
#define NRFX_SPIM0_ENABLED 1
#endif
#ifdef CONFIG_SPI_1_NRF_SPIM
#define NRFX_SPIM1_ENABLED 1
#endif
#ifdef CONFIG_SPI_2_NRF_SPIM
#define NRFX_SPIM2_ENABLED 1
#endif
#ifdef CONFIG_SPI_3_NRF_SPIM
#define NRFX_SPIM3_ENABLED 1
#endif
// NRFX_SPIM_MISO_PULL_CFG:
// 0 - NRF_GPIO_PIN_NOPULL
// 1 - NRF_GPIO_PIN_PULLDOWN
// 3 - NRF_GPIO_PIN_PULLUP
#ifdef CONFIG_SPI_NRFX_SPIM_MISO_NO_PULL
#define NRFX_SPIM_MISO_PULL_CFG 0
#endif
#ifdef CONFIG_SPI_NRFX_SPIM_MISO_PULL_DOWN
#define NRFX_SPIM_MISO_PULL_CFG 1
#endif
#ifdef CONFIG_SPI_NRFX_SPIM_MISO_PULL_UP
#define NRFX_SPIM_MISO_PULL_CFG 3
#endif

#ifdef CONFIG_NRFX_SPIS
#define NRFX_SPIS_ENABLED 1
#endif
#ifdef CONFIG_SPI_0_NRF_SPIS
#define NRFX_SPIS0_ENABLED 1
#endif
#ifdef CONFIG_SPI_1_NRF_SPIS
#define NRFX_SPIS1_ENABLED 1
#endif
#ifdef CONFIG_SPI_2_NRF_SPIS
#define NRFX_SPIS2_ENABLED 1
#endif
#ifdef CONFIG_SPI_3_NRF_SPIS
#define NRFX_SPIS3_ENABLED 1
#endif

#ifdef CONFIG_NRFX_SYSTICK
#define NRFX_SYSTICK_ENABLED 1
#endif

#ifdef CONFIG_NRFX_TIMER
#define NRFX_TIMER_ENABLED 1
#endif
#ifdef CONFIG_NRFX_TIMER0
#define NRFX_TIMER0_ENABLED 1
#endif
#ifdef CONFIG_NRFX_TIMER1
#define NRFX_TIMER1_ENABLED 1
#endif
#ifdef CONFIG_NRFX_TIMER2
#define NRFX_TIMER2_ENABLED 1
#endif
#ifdef CONFIG_NRFX_TIMER3
#define NRFX_TIMER3_ENABLED 1
#endif
#ifdef CONFIG_NRFX_TIMER4
#define NRFX_TIMER4_ENABLED 1
#endif

#ifdef CONFIG_NRFX_TWI
#define NRFX_TWI_ENABLED 1
#endif
#ifdef CONFIG_I2C_0_NRF_TWI
#define NRFX_TWI0_ENABLED 1
#endif
#ifdef CONFIG_I2C_1_NRF_TWI
#define NRFX_TWI1_ENABLED 1
#endif

#ifdef CONFIG_NRFX_TWIM
#define NRFX_TWIM_ENABLED 1
#endif
#ifdef CONFIG_I2C_0_NRF_TWIM
#define NRFX_TWIM0_ENABLED 1
#endif
#ifdef CONFIG_I2C_1_NRF_TWIM
#define NRFX_TWIM1_ENABLED 1
#endif
#ifdef CONFIG_I2C_2_NRF_TWIM
#define NRFX_TWIM2_ENABLED 1
#endif
#ifdef CONFIG_I2C_3_NRF_TWIM
#define NRFX_TWIM3_ENABLED 1
#endif

#ifdef CONFIG_NRFX_UART
#define NRFX_UART_ENABLED 1
#define NRFX_UART0_ENABLED 1
#endif

#ifdef CONFIG_NRFX_UARTE
#define NRFX_UARTE_ENABLED 1
#endif
#ifdef CONFIG_NRFX_UARTE0
#define NRFX_UARTE0_ENABLED 1
#endif
#ifdef CONFIG_NRFX_UARTE1
#define NRFX_UARTE1_ENABLED 1
#endif
#ifdef CONFIG_NRFX_UARTE2
#define NRFX_UARTE2_ENABLED 1
#endif
#ifdef CONFIG_NRFX_UARTE3
#define NRFX_UARTE3_ENABLED 1
#endif

#ifdef CONFIG_NRFX_USBD
#define NRFX_USBD_ENABLED 1
#endif

#ifdef CONFIG_NRFX_WDT
#define NRFX_WDT_ENABLED 1
#endif


#if defined(NRF51)
    #include <nrfx_config_nrf51.h>
#elif defined(NRF52810_XXAA)
    #include <nrfx_config_nrf52810.h>
#elif defined(NRF52811_XXAA)
    #include <nrfx_config_nrf52811.h>
#elif defined(NRF52832_XXAA) || defined (NRF52832_XXAB)
    #include <nrfx_config_nrf52832.h>
#elif defined(NRF52840_XXAA)
    #include <nrfx_config_nrf52840.h>
#elif defined(NRF9160_XXAA)
    #include <nrfx_config_nrf9160.h>
#else
    #error "Unknown device."
#endif


#endif // NRFX_CONFIG_H__
