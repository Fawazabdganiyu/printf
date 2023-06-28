#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

/*	_printf("%S\n", NULL);
	printf("%S\n", NULL);
*/	len =	_printf("%S\n", "Best\nSchool");
	len2 = printf("%S\n", "Best\nSchool");

	_printf("%S\n", "Best\aSchool");

	_printf("%S\n", "Best\tSchool");
	_printf("%S\n", "Hello\vWorld\r\n");
	_printf("%S\n", "\a\b\f\n\r\t\v");
	_printf("%S\n", "\tHello World\b");
	_printf("%S\n", "");
	_printf("%S\n", NULL);
	_printf("%%\n");
	_printf("%z\n", 42);
	_printf("%\n", 42);
	_printf("Hello %s %S\n", "World", "!\n");
	_printf("Hello\tWorld\n");

	printf("len = %d len2 = %d\n", len, len2);

	return (0);
}
