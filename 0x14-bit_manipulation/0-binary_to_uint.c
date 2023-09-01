#include "main.h"
#include <stddef.h>

int _strlen(const char *str);
int _pwr(int base, int raise);

/**
 * binary_to_uint - convert binary to decimal
 * @b: binary
 *
 * Return: decimal or 0 if typing error
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = _strlen(b) - 1, total = 0;

	while  (i <= j)
	{
		if ((b[i] != '0' && b[i] != '1') || b == NULL)
			return (0);
		total += _pwr(2, j - i) * (b[i] - '0');
		i++;
	}

	return (total);
}

/**
 * _strlen  - count the length of string
 * @str: memory address of string
 *
 * Return: length
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _pwr  - exponent
 * @base: base number
 * @raise: exponent number
 *
 * Return: length
 */
int _pwr(int base, int raise)
{
	int total = base;

	if (raise == 0)
		return (1);
	else if (raise == 1)
		return (base);
	while (raise > 1)
	{
		total *= base;
		raise--;
	}
	return (total);
}
