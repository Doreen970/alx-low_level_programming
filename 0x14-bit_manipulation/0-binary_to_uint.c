#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string cf 0 and 1 chars
 *
 * Return: unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int val;

	val = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		val <<= 1;
		if (b[a] == '1')
			val += 1;
	}
	return (val);
}
