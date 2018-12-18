/*********************************************************************
 *  File:       main.c
 *
 *  Module:     Main
 *
 *  Summary:    This module contains the entry point of the oxalis test
 *             	program. From this program various subtest will be called
 *
 *  Notes:
 *
 ********************************************************************/
/*********************************************************************
 * Revision history:
 * 23112018 AVR: Stub Creation Date
 *
 ********************************************************************/


/*******************************************
 * Const and Macro Defines
 ******************************************/

// none

/*******************************************
 * Typedefs and Enum Declarations
 ******************************************/

// none

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
 * Function:    int main()
 *
 * Summary:     Entry point of oxalis unit test code
 *
 * Design:      The Design flow of the main function is as follows:
 *              1. Checks the various compiled memory segments
 *              2. Initializes all the modules
 *              3. Enter the the main loop.
 *              4. If we exit the main loop (should never happen),
 *                 disable the caches and return 0.
 *
 * Parameters:  None.
 *
 * Return:      Set to return 0, but never actually returns it.
 *
 * Limitations: None.
 *
 * Notes:
 *
 * Revision History:
 * 	23112018 AVR: Stub Creation Date
 ********************************************************************/
int main()
{
	printf(" Oxalis Test Software \n\r");

	/* dummy test call */
	usb_test(0);
    
	return 0;
}

/*******************************************
 * Private Functions
 ******************************************/

// none
