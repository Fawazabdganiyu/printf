#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @ap: The argument pointer to integer
 *
 * Return: The number of bytes printed
 */
int print_unsigned(va_list ap)
{
	unsigned int u;

	u = (unsigned int)va_arg(ap, int);

	return (put_u_int(u));
}

/**
 * print_oct - prints an octal representation
 * @ap: The argument pointer to integer
 *
 * Return: The numbers of bytes printed
 */
int print_oct(va_list ap)
{
	unsigned int o;

	o = (unsigned int)va_arg(ap, int);

	return (put_dec_oct(o));
}
