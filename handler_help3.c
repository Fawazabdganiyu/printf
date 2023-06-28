#include "main.h"

int _puts_S(char *str);
int _puts_ptr(void *ptr);
int _putwchar(char c);
int put_hex(unsigned int);
int _putws(char *s);

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


/**
 * _putwchar - prints wchar in thier hexa note
 * @c: char to put
 *
 * Return: length of printed character
*/
int _putwchar(char c)
{
	int retval = 0;

	if ((c > 0 && c < 32) || c >= 127)
	{
		retval += _putchar('\\');
		retval += _putchar('x');
		if (c <= 15)
			_putchar('0');
		retval += put_hex(c);
	}
	else
		retval += _putchar(c);
	return (retval);
}

/**
 * put_hex - prints a uint in hexa note
 * @num: number to print in hexa
 *
 * Return: length of string printed
*/
int put_hex(unsigned int num)
{
	char *hex = dec_hex(num, 'X');
	int retval = _puts(hex);

	free(hex);
	return (retval);
}

/**
 * _putws - prints S string
 * @s: The string to be printed
 *
 * Return: The string length
 */
int _putws(char *s)
{
	char *str = (s == NULL) ? "(null)" : s;
	int i = 0;

	while (str[i] != '\0')
	{
		_putwchar(str[i++]);
	}

	return (_strlen(str));
}
