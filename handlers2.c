#include "main.h"

int print_unsigned(va_list ap);
int print_oct(va_list ap);
int print_HEX(va_list ap);
int print_hex(va_list ap);
int print_S(va_list ap);

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

/**
 * print_S - prints the string with specifier S
 * @ap: The argument pointer to string
 *
 * Return: The numbers of bytes printed
 */
int print_S(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";

	return (_putws(s));
}
