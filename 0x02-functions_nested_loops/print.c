#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers from n to 98
 * each number is separated by comma then space
 * @n: the number to be printed
 *
 * Return: 0
 */
void print_to_98(int n)
{

	n = 0;
	while (n <= 98)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
