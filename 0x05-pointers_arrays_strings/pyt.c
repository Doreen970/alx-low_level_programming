#include "main.h"
#include <main.h>

/**
 * _puts - prints string followed by new line
 * @str: string to be printed
 *
 * Return: always 0
 */

void _puts(char *str)
{
	char str;

	while (str != '\0')
	{
		str++;
		printf("%c\n", str);
	}
	printf("\n");
	return (0);
}
