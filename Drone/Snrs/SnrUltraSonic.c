////////////////////////////////////////INCLUDES//////////////////////////////////////////////////
#include   "SnrUltraSonic.h"

#ifdef US_SRF04
	#include   "Cmps/CmpSRF04.h"
#endif // #define 
////////////////////////////////////////PRIVATE DEFINES///////////////////////////////////////////

////////////////////////////////////////PRIVATE STRUCTURES////////////////////////////////////////

////////////////////////////////////////PRIVATE FUNCTIONS/////////////////////////////////////////

////////////////////////////////////////PRIVATE VARIABLES/////////////////////////////////////////
static UltraSonic ultrasonic;

////////////////////////////////////////PUBILC FUNCTIONS//////////////////////////////////////////
Boolean SnrUltraSonicInit ( void )
{	
#ifdef US_SRF04
	ultrasonic.data = &srf04Data;
	ultrasonic.functions = &srf04;
#endif // US_SRF04

	//init du composant
	return ultrasonic.functions->init();
}
Boolean SnrUltraSonicGetDistance	( void )
{
	return ultrasonic.functions->readData();
}

UltraSonicData* SnrUltraSonicGetStruct( void )
{
	return ultrasonic.data;
}


////////////////////////////////////////PRIVATE FUNCTIONS/////////////////////////////////////////
