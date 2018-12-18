/*********************************************************************
 *
 *  File:       usb.c
 *
 *  Module:     usb_test
 *
 *  Summary:    This module contains the usb test program for oxalis 
 *              board
 *
 *  Notes:
 *
 ********************************************************************/
/*********************************************************************
 * Revision history:
 * 23112018 AVR: creation date
 ********************************************************************/

#include <stdio.h>
#include "usb.h"

/*******************************************
 * Const and Macro Defines
 ******************************************/

#define USB_SUB_TEST_1 1
#define USB_SUB_TEST_1 2
#define USB_SUB_TEST_1 3

/*******************************************
 * Typedefs and Enum Declarations
 ******************************************/

/*******************************************
 * Const Declarations
 ******************************************/

// none

/*******************************************
 * Public Variables
 ******************************************/

// none

/*******************************************
 * Private Variables
 ******************************************/

// none

/*******************************************
 * Private Prototypes
 ******************************************/

// none

/*******************************************
 * Public Functions
 ******************************************/

/*********************************************************************
 *
 * Function:    void usb_test(int)
 *
 * Summary:     Entry point of USB test function of oxalis 
 *
 * Design:      The Design flow of the main function is as follows:
 *
 * Parameters:  None.
 *
 * Return:      Set to return 0.
 *
 * Limitations: None.
 *
 * Notes:
 *
 * Revision History:
 *   23112018 AVR: Stub Creation date.
 ********************************************************************/
void usb_test(int sub_test)
{
	printf(" usb_test \n\r");
	return 0;
}

/*******************************************
 * Private Functions
 ******************************************/

// none
