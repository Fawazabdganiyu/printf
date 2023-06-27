#include "main.h"

int print_ptr(va_list ap);
int print_rev(va_list ap);

/**
 * print_ptr - prints pointer value
 * @ap: The argument pointer to void *
 *
 * Return: The numbers of characters printer
 */
int print_ptr(va_list ap)
{
	void *ptr;

	ptr = va_arg(ap, void *);
	if (ptr == NULL)
		return (_puts("(nil)"));

	return (_puts_ptr(ptr));
}

/**
 * print_rev - prints a string in reverse
 * @ap: pointer to variable to print
 * Return: length of string it printed
*/
int print_rev(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		return (_puts("(null)"));
	return (put_reverse(str));
}

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


	return (put_rot13(str));
}
