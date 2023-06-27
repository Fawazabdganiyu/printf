#include "main.h"

/**
 * print_rot - prints the rot13'ed string
 * @ap: The argument pointer to the string
 *
 * Return: The numbers of bytes printed
 */
int print_rot(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		return (_puts("(null)"));


	return (rot13(str));
}
