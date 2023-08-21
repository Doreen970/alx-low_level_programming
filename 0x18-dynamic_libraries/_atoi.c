#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int int_result = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			int_result = int_result * 10 + (*s - '0');
		else if (int_result != 0)
			break;
		s++;
	}
	return (int_result * sign);
}
