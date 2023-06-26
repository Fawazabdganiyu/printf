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

	printf("len = %d len2 = %d\n", len, len2);

	return (0);
}
