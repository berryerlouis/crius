/*
 * ConfBoard.h
 *
 * Created: 20/12/2016 12:18:08
 *  Author: berryer
 */ 


#ifndef CONF_BOARD_H_
#define CONF_BOARD_H_


////////////////////////////////////////PUBLIC VERSION CODE/////////////////////////////////////////
//version 1.0
#define VERSION_SOFTWARE				0x10
#define VERSION_HARDWARE				0x50

////////////////////////////////////////PUBLIC PROCESSOR BOARD////////////////////////////////////
//set processor 
#define ATMEGA_644P

//Set oscillation frequency
#define	CONF_FOSC_MHZ					16UL
#define	CONF_FOSC_HZ					CONF_FOSC_MHZ * 1000000UL

//enum which permits to get the reset cause at startup
typedef enum
{
	RESET_CAUSE_POWER_ON	= 1U,
	RESET_CAUSE_EXTERNAL	= 2U,
	RESET_CAUSE_BROWN_OUT	= 4U,
	RESET_CAUSE_WATCHDOG	= 8U,
	RESET_CAUSE_JTAG		= 16U,
}E_ResetCause;


////////////////////////////////////////PUBLIC IHM BOARD///////////////////////////////////////////
//set LEDs used
typedef enum
{
	E_LED_OK,
	E_LED_WARNING,
	E_LED_ERROR,
	//Alaways at end
	E_NB_LEDS,
	E_LED_NONE
}ELed;

//set buttons used
typedef enum
{
	E_BUTTON_SETUP,
	//Alaways at end
	E_NB_BUTTONS,
	E_BUTTON_NONE
}EButton;


//set output IR used
typedef enum
{
	E_ADC_1,
	//Alaways at end
	E_NB_ADCS,
	E_ADC_NONE
}EAdc;

//set output UltraSound used
typedef enum
{
	E_US_1,
	//Alaways at end
	E_NB_USS,
	E_US_NONE
}EUs;

//set output software PWM used
typedef enum
{
	E_SOFT_PWM_1,
	E_SOFT_PWM_2,
	E_SOFT_PWM_3,
	E_SOFT_PWM_4,
	//Alaways at end
	E_NB_SOFT_PWMS,
	E_SOFT_PWM_NONE
}ESoftPwm;

//set output hardware PWM used
typedef enum
{
	E_HARD_PWM_1,
	E_HARD_PWM_2,
	E_HARD_PWM_3,
	E_HARD_PWM_4,
	//Alaways at end
	E_NB_HARD_PWMS,
	E_HARD_PWM_NONE
}EHardPwm;

//set output Uart used
typedef enum
{
	E_UART_1,
	E_UART_2,
	//Alaways at end
	E_NB_UARTS,
	E_UART_NONE
}EUart;

//set output Uart used
typedef enum
{
	E_I2C_1,
	//Alaways at end
	E_NB_I2CS,
	E_I2C_NONE
}EI2c;

////////////////////////////////////////PUBLIC SENSORS BOARD///////////////////////////////////////
//list of board with or without sensors
#define DAISY_7		
//#define CRIUS	


#ifdef DAISY_7
//details of sensors available on this board
	#define ACC_LIS331DLH
	#define GYR_L3G4200D
	#define MAG_HMC5883
	#define BAR_BMP085
	#define US_SRF04
	#define GPS_VENUS638LPX
//enable sensors type
	#define ACC							1U
	#define BAR							1U
	#define MAG							1U
	#define GPS							1U
	#define US							1U
#endif

#ifdef CRIUS
//details of sensors available on this board
	#define ACC_BMA180
	#define GYR_ITG3205
	#define MAG_HMC5883
	#define BAR_BMP085
//enable sensors type
	#define ACC							1U
	#define BAR							1U
	#define MAG							1U
	#define GPS							0U
	#define US							0U
#endif

////////////////////////////////////////PUBLIC DEVICE TYPE /////////////////////////////////////////
#define BI
//#define QUADX






#endif /* CONF_BOARD_H_ */