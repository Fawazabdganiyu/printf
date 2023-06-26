#include "main.h"

int _puts_S(char *str);
int _puts_ptr(void *ptr);

/**
 * _puts_S - prints S string
 * @s: The string to be printed
 *
 * Return: The string lenght
 */
int _puts_S(char *s)
{
	char *str = (s == NULL) ? "(null)" : s;
	unsigned int i = 0;
	char *str_S;
	int retval = 0;

	while (str[i])
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] == 127)
		{
			retval += _putchar('\\');
			retval += _putchar('x');
			str_S = dec_hex(str[i], 'X');
			if (str[i] <= 10)
				retval += _putchar('0');
			retval += _puts(str_S);
			i++;
		}
		retval += _putchar(str[i++]);
	}

	free(str_S);
	return (retval);
}

/**
 * _puts_ptr - prints pointer value as a string
 * @ptr: The pointer value to be printed
 *
 * Return: The numbers of characters printed
 */
int _puts_ptr(void *ptr)
{
	unsigned long value, value_copy;
	int count = 0, i, digits, retval = 0;

	value = (unsigned long)ptr;
	value_copy = value;

	/* Divide the value by 16 (equivalent ( >> 4)) to get the numbers of digits */
	while (value_copy > 0)
	{
		++count;
		value_copy >>= 4;
	}

	/* Print the hexadecimal prefix */
	retval += _putchar('0');
	retval += _putchar('x');


	/*count = */
	for (i = (count - 1) * 4; i >=  0; i -= 4)
	{
		digits = (value >> i) & 15;
		if (digits < 10)
			retval += _putchar('0' + digits);
		else
			retval += _putchar('a' + (digits - 10));
	}

	return (retval);
}
