#include<stdio.h>

/**
 * pre_main_function - constructor attribute brings control to begin here.
 */
void pre_main_function(void) __attribute__ ((constructor));

/**
 * pre_main_function - new control function
 */
void pre_main_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
