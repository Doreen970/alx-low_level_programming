#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s
 *            which consists only of characters from accept
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the characters to be matched7
 *
 * Return: The number of characters in the initial segment of s
 *         that consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int marked = 1;
	char *t;

	while (*s && marked)
	{
		t = accept;
		marked = 0;
		while (*t)
		{
			if (*s == *t)
			{
				counter++;
				marked = 1;
				break;
			}
			t++;
		}
		s++;
	}
	return (counter);
}
