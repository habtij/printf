#include "main.h"
#include <stdlib.h>

/**
 * binary - convert to binary
 * @num: the value to covert
 *
 * Return: Retuen int
 */
int binary(unsigned int num)
{
	unsigned int i, j;
	unsigned int bin[1024];

	for (i = 0; num > 0; i++)
	{
		bin[i] = num % 2;
		num /= 2;
	}

	
	for (j = (i - 1); j > 0; j--)
	{
		_putchar(bin[j] + '0');
	}


	if (num == 0)
	{
		_putchar('0');
		i++;
	}

	return (i);
}	
