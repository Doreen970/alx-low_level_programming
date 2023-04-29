#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet letters
 *
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	letter = 'a';
	for (i = 0; i <= 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}

