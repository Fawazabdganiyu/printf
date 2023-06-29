#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: A character string
 *
 * Description: writes output to the standard output stream
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	const char *ptr;
	int retval = 0;
	va_list ap;
	print func;
	int (*flag)(const char **ptr, va_list ap);

	if (format == NULL)
		exit(EXIT_FAILURE);

	va_start(ap, format);
	ptr = format;
	for (; *ptr; ptr++)
	{
		if ((_con_strlen(format) == 1) && (format[0] == '%' && format[1] == '\0'))
			return (-1);
		if (*ptr != '%')
		{
			retval += _putchar(*ptr);
			continue;
		}
		ptr = reduce_blank(ptr + 1);
		flag = get_flag(*ptr);
		if (flag)
			retval += flag(&ptr, ap);
		func = get_speci_func(*ptr);
		if (func != NULL)
		{
			retval += func(ap);
		}
		else
		{
			retval += _putchar('%');
			retval += _putchar(*ptr);
		}
	}

	va_end(ap);
	return (retval);
}
