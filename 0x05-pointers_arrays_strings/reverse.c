#include<stdio.h>
#include "main.h"

/**
 * _rev - prints string in reverse followed by new line
 * @*s - string to be printed
 *
 * Returns: 0
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		s++;
	}
	for (count = -1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
