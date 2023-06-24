#include "main.h"

/**
 * print_HEX - prints integer in hexa form uppercase
 * @ap: number to print in hexa
 * Return: length of char in hexa form of num
*/
int print_HEX(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *retval = dec_hex(num, 'X');
	int n = _puts(retval);

	free(retval);
	return (n);
}

/**
 * print_hex - prints integer in hexa form lowercase
 * @ap: number to print in hexa
 * Return: length of char in hexa form of num
*/
int print_hex(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *retval = dec_hex(num, 'x');
	int n = _puts(retval);

	free(retval);
	return (n);
}
