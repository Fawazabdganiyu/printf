#include "main.h"

/**
 * print_char - print a character
 * @ap: The argument pointer to character
 *
 * Return: length of printed char = 1
 */
int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	return (_putchar(c));
}

/**
 * print_str - prints the given strings
 * @ap: The argument pointer to string
 *
 * Return: length of printed string
 */
int print_str(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";

	return (_puts(str));
}

/**
 * print_int - prints an integer
 * @ap: pointer to integer
 *
 * Return: legnth of integer
 */
int print_int(va_list ap)
{
	int i = va_arg(ap, int);

	return (put_int(i));
}

/**
 * print_per - prints percent
 * @ap: void pointer
 *
 * Return: length of printed char = 1
 */
int print_per(va_list ap)
{
	(void) ap;

	return (_putchar('%'));
}

/**
 * print_bin - converts unsigned int argument to binary
 * @ap: The argument pointer to int
 *
 * Return: The number of bytes printed
 */
int print_bin(va_list ap)
{
	unsigned int num;
	char *bit;
	int retval;

	num = (unsigned int)va_arg(ap, int);
	bit = dec_bin(num);

	retval = _puts(bit);

	free(bit);

	return (retval);
}
