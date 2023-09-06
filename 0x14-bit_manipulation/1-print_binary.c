#include "main.h"
#include <stdio.h>

int near_dobule(unsigned long int n);

/**
 * print_binary - print binary
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int value = near_dobule(n);

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		while (n > 0)
		{
			_putchar('1');
			n -= value;
			value = value >> 1;
			while (value > n)
			{
				if (n > 1)
					value = value >> 1;
				else
					value = 0;
				_putchar('0');
			}
		}
	}
}

/**
 * near_dobule - print binary
 * @n: decimal number
 *
 * Description: This is a longer description.
 * Return: binary number
 */
int near_dobule(unsigned long int n)
{
	unsigned long int i = 2;

	while (i << 1 < n)
		i = i << 1;
	return (i);
}
