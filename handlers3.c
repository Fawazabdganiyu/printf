#include "main.h"

int print_ptr(va_list ap);

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
		ptr = "(null)";

	return (_puts_ptr(ptr));
}
