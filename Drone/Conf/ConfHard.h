/*
 * ConfHard.h
 *
 * Created: 12/07/2011 18:18:08
 *  Author: berryer
 */ 


#ifndef CONF_HARD_H_
#define CONF_HARD_H_

#include <util/atomic.h>
#include <avr/io.h> 
#include <avr/fuse.h> 
#include <avr/eeprom.h> 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "Conf/ConfBoard.h"
#include "Tools/tools_typedefs.h"
#include "Drv/DrvIo.h"


/////////////////////////////////////PUBLIC LED MANAGMENT//////////////////////////////////////////
//tableau des leds actives
#define LEDS_PINS					{\
										EIO_PIN_B_1, /*E_LED_OK			*/\
										EIO_PIN_B_2, /*E_LED_WARNING	*/\
										EIO_PIN_B_3  /*E_LED_ERROR		*/\
									}

/////////////////////////////////////PUBLIC BOUTON MANAGMENT///////////////////////////////////////
//tableau des boutons actifs
#define BUTTONS_PINS				{\
										EIO_PIN_B_0  /*E_BUTTON_SETUP	*/\
									}

////////////////////////////////////PUBLIC SERVOS PORTS////////////////////////////////////////////
//tableau des PWMs software actifs
#define SOFT_PWM_PINS				{\
										EIO_PIN_A_4, /*E_SOFT_PWM_1		*/\
										EIO_PIN_A_5, /*E_SOFT_PWM_2		*/\
										EIO_PIN_A_6, /*E_SOFT_PWM_3		*/\
										EIO_PIN_A_7  /*E_SOFT_PWM_4		*/\
									}
//tableau des PWMs hardware actifs
#define HARD_PWM_PINS				{\
										EIO_PIN_D_4, /*E_HARD_PWM_1		*/\
										EIO_PIN_D_5, /*E_HARD_PWM_2		*/\
										EIO_PIN_D_6, /*E_HARD_PWM_3		*/\
										EIO_PIN_D_7  /*E_HARD_PWM_4		*/\
									}

/////////////////////////////////////////////PUBLIC ADC////////////////////////////////////////////
//tableau des ADC actifs
#define ADC_PINS					{\
										EIO_PIN_A_1  /*E_IR_1			*/\
									}
	
/////////////////////////////////////////////PUBLIC US/////////////////////////////////////////////
//tableau des US actifs
#define US_PINS						{\
										EIO_PIN_A_0  /*E_US_1			*/\
									}
	
/////////////////////////////////////////////PUBLIC UART///////////////////////////////////////////
//tableau des UART actifs
#define UART_1_PINS					{\
										EIO_PIN_D_0, /*E_UART_1_RX		*/\
										EIO_PIN_D_1  /*E_UART_1_TX		*/\
									}
#define UART_2_PINS					{\
										EIO_PIN_D_2, /*E_UART_2_RX		*/\
										EIO_PIN_D_3  /*E_UART_2_TX		*/\
									}


/////////////////////////////////////////////PUBLIC I2C////////////////////////////////////////////
//tableau des I2C actifs
#define I2C_PINS					{\
										EIO_PIN_C_0, /*SCL				*/\
										EIO_PIN_C_1  /*SDA				*/\
									}
	
////////////////////////////////////////////PUBLIC TIMER///////////////////////////////////////////
//nb timers used
typedef enum
{
	E_TIMER_BUTTON,
	E_TIMER_LED,
	//----------------- Alaways at end -----------------------
	E_NB_TIMER,
	E_TIMER_NONE
}ETimer;

/////////////////////////////////////PUBLIC PID MANAGMENT//////////////////////////////////////////

//nb pid used
typedef enum
{
	PID_ROULIS	,
	PID_TANGAGE	,
	PID_LACET	,
	PID_ALTITUDE,
	//----------------- Alaways at end -----------------------
	E_NB_PIDS,
	E_PID_NONE
}EPid;



#endif /* CONF_HARD_H_ */