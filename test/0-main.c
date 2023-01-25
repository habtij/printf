#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main()
{
	char c = 'a';
	char *s = "Hello World!";
	int len, len1;

	printf(NULL);
	_printf(NULL);
	len = _printf("This is a char c: %c%%\n", c);
	len1 = printf("This is a char c: %c%%\n", c);
	printf("%d\n", len);
	printf("%d\n", len1);
	len = _printf("This is a string s: %s\n", s);
	len1 = printf("This is a string s: %s\n", s);
	printf("%d\n", len);
	printf("%d\n", len1);
	return (0);
}
