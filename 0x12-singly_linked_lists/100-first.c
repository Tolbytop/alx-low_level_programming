#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * bmain - function executed before main
 * Return: no return.
 */

void first(void)
{
	printf("You're beat! and yet, you must allow");
	rintf(",\nI bore my house upon my back!\n");
}
