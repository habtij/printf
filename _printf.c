#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _strlen - count the length of string - null byte
 * @s: string argument
 *
 * Return: the length of strlen, or -1 on error
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (-1);

	while (s[len] != '\0')
		len++;

	return (len);
}

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
 * check_format - checks the format specified
 * @arg: va list argument
 * @fmt: format argument
 *
 * Return: 0 or number of write character
 */
int check_format(va_list arg, char fmt)
{
	char c_val;
	char *s_val;
	int count = 0;

	switch (fmt)
	{
	case 'c':
		c_val = va_arg(arg, int);
		_putchar(c_val);
		count++;
		break;
	case 's':
		s_val = va_arg(arg, char *);
		print_string(s_val);
		if (_strlen(s_val) != -1)
			count += _strlen(s_val);

		break;
	case '%':
		_putchar('%');
		count++;
		break;
	}
	return (count);
}

/**
 * _printf - a function that prints anything
 * @format: variadic argument
 *
 * Return: Non zero on success, and 0 on failure
 */
int _printf(const char *format, ...)
{
	int i;
	va_list args;
	int count = 0;

	if (format != NULL)
	{
		va_start(args, format);
		for (i = 0; format[i] != '\0'; i++)
		{
			switch (format[i])
			{
			case '%':
				i++;
				count += check_format(args, format[i]);
				continue;
			case '\n':
				_putchar('\n');
				count++;
				continue;
			}
			_putchar(format[i]);
			count++;
		}
		va_end(args);
	}
	return (count);
}
