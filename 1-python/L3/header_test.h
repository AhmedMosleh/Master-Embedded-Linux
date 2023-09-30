/*
 * stm32f103c6_gpio.h
 *
 *  Created on: Jul 9, 2023
 *      Author: ahmed
 */

#ifndef INC_STM32F103C6_GPIO_H_
#define INC_STM32F103C6_GPIO_H_

#include "stm32f103c6.h"

/*=========================================
 * Macros configuration references
==========================================*/

// @ref module

/*=========================================
 * Macros configuration references
==========================================*/

// this way allow us to access bit directly to set or reset without bitwise operations
#define GPIO_PIN_0 		((uint16_t)0x0001)
#define GPIO_PIN_1 		((uint16_t)0x0002)
#define GPIO_PIN_2 		((uint16_t)0x0004)
#define GPIO_PIN_3 		((uint16_t)0x0008)
#define GPIO_PIN_4 		((uint16_t)0x0010)
#define GPIO_PIN_5 		((uint16_t)0x0020)
#define GPIO_PIN_6 		((uint16_t)0x0040)
#define GPIO_PIN_7 		((uint16_t)0x0080)
#define GPIO_PIN_8 		((uint16_t)0x0100)
#define GPIO_PIN_9 		((uint16_t)0x0200)
#define GPIO_PIN_10 	((uint16_t)0x0400)
#define GPIO_PIN_11 	((uint16_t)0x0800)
#define GPIO_PIN_12 	((uint16_t)0x1000)
#define GPIO_PIN_13 	((uint16_t)0x2000)
#define GPIO_PIN_14 	((uint16_t)0x4000)
#define GPIO_PIN_15 	((uint16_t)0x8000)
#define GPIO_PIN_ALL 	((uint16_t)0xFFFF)

enum e_gpio_pin_num
{
    e_GPIO_PIN_0 = ((uint16_t)0x0001),
    e_GPIO_PIN_1 = ((uint16_t)0x0002),
    e_GPIO_PIN_2 = ((uint16_t)0x0004),
    e_GPIO_PIN_3 = ((uint16_t)0x0008),
    e_GPIO_PIN_4 = ((uint16_t)0x0010),
    e_GPIO_PIN_5 = ((uint16_t)0x0020),
    e_GPIO_PIN_6 = ((uint16_t)0x0040),
    e_GPIO_PIN_7 = ((uint16_t)0x0080),
    e_GPIO_PIN_8 = ((uint16_t)0x0100),
    e_GPIO_PIN_9 = ((uint16_t)0x0200),
    e_GPIO_PIN_10 = ((uint16_t)0x0400),
    e_GPIO_PIN_11 = ((uint16_t)0x0800),
    e_GPIO_PIN_12 = ((uint16_t)0x1000),
    e_GPIO_PIN_13 = ((uint16_t)0x2000),
    e_GPIO_PIN_14 = ((uint16_t)0x4000),
    e_GPIO_PIN_15 = ((uint16_t)0x8000),
    e_GPIO_PIN_ALL = ((uint16_t)0xFFFF)
};

// @ref GPIO_MODE_define
#define GPIO_MODE_ANALOG 		0x0UL
#define GPIO_MODE_INPUT_FL 		0x1UL
#define GPIO_MODE_INPUT_PU 		0x2UL
#define GPIO_MODE_INPUT_PD 		0x3UL
#define GPIO_MODE_OUTPUT_PP 	0x4UL
#define GPIO_MODE_OUTPUT_OD 	0x5UL
#define GPIO_MODE_OUTPUT_AF_PP 	0x6UL
#define GPIO_MODE_OUTPUT_AF_OD 	0x7UL
#define GPIO_MODE_INPUT_AF 		0x1UL// same as input floating

enum e_gpio_pin_mode
{
    e_GPIO_MODE_ANALOG,        
    e_GPIO_MODE_INPUT_FL,      
    e_GPIO_MODE_INPUT_PU,     
    e_GPIO_MODE_INPUT_PD,      
    e_GPIO_MODE_OUTPUT_PP,     
    e_GPIO_MODE_OUTPUT_OD,     
    e_GPIO_MODE_OUTPUT_AF_PP,  
    e_GPIO_MODE_OUTPUT_AF_OD,  
    e_GPIO_MODE_INPUT_AF = 0
};


// @ref GPIO_MODE_define
#define GPIO_SPEED_10M 1
#define GPIO_SPEED_2M  2
#define GPIO_SPEED_50M 3

enum e_gpio_output_speed {
    e_GPIO_SPEED_10M  = 1,
    e_GPIO_SPEED_2M,
    e_GPIO_SPEED_50M    
};



//@ref GPIO_PIN_state
#define GPIO_PIN_SET	1
#define GPIO_PIN_RESET 	0

//@ref GPIO_RETURN_LOCK
#define GPIO_RETURN_LOCK_Enabled 1
#define GPIO_RETURN_LOCK_ERROR	 0
/*=========================================
 * PIN configuration structure
==========================================*/

typedef struct
{
    uint16_t pin_number;
    uint8_t  pin_mode;
    uint8_t  pin_output_speed;

} s_pinConfig_t;


/*=========================================
 * APIs in MCAL GPIO Driver
==========================================*/

void    MCAL_GPIO_INIT (s_gpio_t * gpiox,s_pinConfig_t *pinConfig);
void    MCAL_GPIO_DE_INIT (s_gpio_t * gpiox);

uint8_t MCAL_GPIO_READ_PIN (s_gpio_t * gpiox, uint16_t pinNum);
uint16_t MCAL_GPIO_READ_PORT (s_gpio_t * gpiox);

void        MCAL_GPIO_WRITE_PIN(s_gpio_t * gpiox, uint16_t pinNum, uint8_t value);
void MCAL_GPIO_WRITE_PORT (s_gpio_t * gpiox, uint16_t value);
void MCAL_GPIO_TOGGLE_PIN (s_gpio_t * gpiox, uint16_t pinNum);

uint8_t MCAL_GPIO_LOCK_PIN(s_gpio_t *gpiox, uint16_t pinNum);

#endif /* INC_STM32F103C6_GPIO_H_ */
