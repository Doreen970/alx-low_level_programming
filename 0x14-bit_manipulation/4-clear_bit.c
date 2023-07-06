#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the numberr
 * @index: index of bit
 * Return: 1 if okay, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
