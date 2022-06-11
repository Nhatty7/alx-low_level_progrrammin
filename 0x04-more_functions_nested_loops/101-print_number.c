#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		n *= -1;
		x = n;
		_putchar('-');
	}

	x = x / 10;

	if (x != 0)
	{
		print_number(x);
	}

	_putchar((unsigned int) n % 10 + '0');
}
