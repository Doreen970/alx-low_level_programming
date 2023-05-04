#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @base: base of the exponent
 * @pwr: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int pwr)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= pwr; i++)
		n *= base;
	return (n);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int m)
{
	unsigned long int div, check;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = m & div;
		if (check == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
