/*----------------------------------------------------------------------------
 * CMSIS-RTOS 'main' function template
 *---------------------------------------------------------------------------*/

#define osObjectsPublic                     // define objects in main module
#include "osObjects.h"                      // RTOS object definitions

// Copied over from Thread.c 
extern int Init_Thread (void);

/*
 * main: initialize and start the system
 */
int main (void) 
{	
	// initialize CMSIS-RTOS
	osKernelInitialize ();                    
	
	// initialize peripherals here

	// create 'thread' functions that start executing,
	// example: tid_name = osThreadCreate (osThread(name), NULL);
	
	Init_Thread();
	
	// start thread execution 
	osKernelStart ();                         
}
