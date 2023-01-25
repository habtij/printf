#include "main.h"

/**
 * print_decimal - prints decimal of num
 * @num: argument
 *
 * Return: nothing
 */
void print_decimal(int num)
{
	if (num < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}
