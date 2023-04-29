#include "main.h"
#include <stdio.h>

/**
 *  _islower - prints letters in lowercase
 * @c: char that will be returned
 *
 * Return: 1 when lower and 0 when otherwise
 */
int _islower(int c)
{

	if (c > 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
