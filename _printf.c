#include "main.h"
#include <stdarg.h>

/**
 * print_string - iterate and write character to standard stdout
 * @s: string argument
 *
 * Return: nothing
 */
void print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}

/**
 * _printf - a function that prints anything
 * @format: variadic argument
 *
 * Return: 0 on success, and non zero on failure
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, len;

	for (len = 0; format[len] != '\0'; len++)
		;

	i = 0;
	va_start(args, format);
	while (i < len)
	{
		switch (format[i])
		{
		case '%':
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(args, int));
					continue;
				case 's':
					print_string(va_arg(args, char*));
					continue;
				case '%':
					_putchar('%');
					continue;
			}
			break;
		case '\n':
			_putchar('\n');
			continue;
		}
		putchar(format[i]);
	}
	return (len);
}
