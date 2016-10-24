/*
 * DrvAdc.h
 *
 * Created: 14/11/2011 15:18:48
 *  Author: berryer
 */ 
////////////////////////////////////////INCLUDES//////////////////////////////////////////////////
#ifndef DRV_ADC_H_
#define DRV_ADC_H_

#include "Tools/tools_typedefs.h"

#include "Drv/DrvIo.h"

////////////////////////////////////////PUBLIC DEFINES////////////////////////////////////////////

////////////////////////////////////////PUBLIC ENUMS//////////////////////////////////////////////

////////////////////////////////////////PUBLIC STRUCTURES/////////////////////////////////////////
typedef struct
{
	Int16S value;
}Adc;

////////////////////////////////////////PUBLIC FUNCTIONS//////////////////////////////////////////
//Fonction d'initialisation
Boolean DrvAdcInit ( void ) ;

//Fonction de lecture ADC
Int16S DrvAdcRead ( EIoPin pin );

#endif /* DRV_ADC_H_ */
