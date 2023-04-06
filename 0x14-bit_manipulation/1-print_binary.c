#include <stdio.h>

/**
 * print_binary - prints number in binary
 * @n: number printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int a = sizeof(unsigned long int) * 8;
	unsigned long int divisor = (unsigned long int)1 << (a - 1);
	int counter = 0;

	while (divisor != 0)
	{
		if ((n & divisor) != 0)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
		divisor >>= 1;
		counter++;
		if (counter % 4 == 0)
		{
			putchar(' ');
		}
	}
}
