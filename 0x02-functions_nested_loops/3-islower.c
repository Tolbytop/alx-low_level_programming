#include "main.h"

/**
 * _islower -> Check if the character is lowercase
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
