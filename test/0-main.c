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
	int c = 100;
	unsigned int num = 98;
	char *s = "Hello World!";
	int len, len1;

	printf("%5c\n", c);
	len = _printf("This is a char c: %b%%\n", num);
	len1 = printf("This is a char c: %d%%\n", num);
	printf("%d\n", len);
	printf("%d\n", len1);
	len = _printf("This is a string s: %s\n", s);
	len1 = printf("This is a string s: %s\n", s);
	printf("%d\n", len);
	printf("%d\n", len1);
	return (0);
}
