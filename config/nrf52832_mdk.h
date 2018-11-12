/**
* Copyright (c) 2018 Nordic Semiconductor ASA & makerdiary
* All rights reserved.
* 
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*
* * Redistributions of source code must retain the above copyright
*   notice, this list of conditions and the following disclaimer.
*
* * Redistributions in binary form must reproduce the above
*   copyright notice, this list of conditions and the following
*   disclaimer in the documentation and/or other materials provided
*   with the distribution.

* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
* OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/

/**
 * @file nrf52832_mdk.h
 * @brief nRF52832-MDK board definitions.
 */

#ifndef NRF52832_MDK_H
#define NRF52832_MDK_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

// LEDs definitions
#define LEDS_NUMBER    3

#define LED_1          NRF_GPIO_PIN_MAP(0,22)
#define LED_2          NRF_GPIO_PIN_MAP(0,23)
#define LED_3          NRF_GPIO_PIN_MAP(0,24)
#define LED_START      LED_1
#define LED_STOP       LED_3

#define LEDS_ACTIVE_STATE 0

#define LEDS_LIST { LED_1, LED_2, LED_3 }

#define LEDS_INV_MASK  LEDS_MASK

#define BSP_LED_0      LED_1
#define BSP_LED_1      LED_2
#define BSP_LED_2      LED_3

#define LED_0_GREEN    LED_1
#define LED_1_RED      LED_2
#define LED_2_BLUE     LED_3

#define LED_G_IDX      0
#define LED_R_IDX      1
#define LED_B_IDX      2

// Buttons definitions
#define BUTTONS_NUMBER 4

#define BUTTON_1       NRF_GPIO_PIN_MAP(0,27)  // on Grove Port #1
#define BUTTON_2       NRF_GPIO_PIN_MAP(0,29)  // on Grove Port #2
#define BUTTON_3       NRF_GPIO_PIN_MAP(0,31)  // on Grove Port #3
#define BUTTON_4       NRF_GPIO_PIN_MAP(0,3)   // on Grove Port #4
#define BUTTON_PULL    NRF_GPIO_PIN_NOPULL

#define BUTTONS_ACTIVE_STATE 1

#define BUTTONS_LIST { BUTTON_1, BUTTON_2, BUTTON_3, BUTTON_4 }

#define BSP_BUTTON_0   BUTTON_1
#define BSP_BUTTON_1   BUTTON_2
#define BSP_BUTTON_2   BUTTON_3
#define BSP_BUTTON_3   BUTTON_4


// UART DEBUG PORT
#define RX_PIN_NUMBER  NRF_GPIO_PIN_MAP(0,19)
#define TX_PIN_NUMBER  NRF_GPIO_PIN_MAP(0,20)
#define HWFC           false


#ifdef __cplusplus
}
#endif

#endif // NRF52832_MDK_H
