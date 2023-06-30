#include <stdio.h>
#include "main.h"

/**
 * space - prints ' ' if the flag in indicated
 * @ptr: A pointer to a pointer to formated string
 * @ap: argument pointer
 *
 * Return: The bytes printed  if the flag is ' ', 0 otherwise
 */
int space(const char **ptr, va_list ap)
{
	int  num, retval = 0;
	va_list aq;

	va_copy(aq, ap);
	num = va_arg(aq, int);
	if (**ptr == ' ')
	{
		(*ptr)++;
		if (**ptr == '+' || num < 0)
			(*ptr)++;
		else if (num >= 0)
			retval += _putchar(' ');

		va_end(aq);
		return (retval);
	}

	va_end(aq);
	return (0);
}

/**
 * hash - prints # if the flag in indicated
 * @ptr: A pointer to a pointer to formated string
 * @ap: argument pointer
 *
 * Return: The number of bytes printed if flag is #, 0 otherwise
 */
int hash(const char **ptr, va_list ap)
{
	int retval, num;
	va_list aq;

	va_copy(aq, ap);
	retval = 0;
	if (**ptr == '#')
	{
		num = va_arg(aq, int);
		(*ptr)++;
		if (**ptr == 'o')
		{
			if (num != 0)
				retval += _putchar('0');
		}
		else if (**ptr == 'x')
		{
			if (num != 0)
			{
				retval += _putchar('0');
				retval += _putchar('x');
			}
		}
		else
		{
			if (num != 0)
			{
				retval += _putchar('0');
				retval += _putchar('X');
			}
		}
		va_end(aq);
		return (retval);
	}

	return (0);
}

/**
 * plus - prints + if the flag in indicated
 * @ptr: A pointer to a pointer to formated string
 * @ap: argument pointer
 *
 * Return: bytes printed if the flag is +, 0 otherwise
 */
int plus(const char **ptr, va_list ap)
{
	int num, retval = 0;
	va_list aq;

	va_copy(aq, ap);
	num = va_arg(aq, int);
	if (**ptr == '+')
	{
		(*ptr)++;
		if (**ptr == ' ')
		{
			retval += _putchar('+');
			(*ptr)++;
		}
		else if (num >= 0)
		{
			retval += _putchar('+');
		}
		va_end(aq);
		return (retval);
	}

	va_end(aq);
	return (0);
}

/**
 * get_flag - gets the input flag function
 * @ptr: The flag character to be tested
 *
 * Return: A pointer to  function that returns int
 */
int (*get_flag(char ptr))(const char **ptr, va_list ap)
{
	int i;

	flags_t flags[] = {
		{'+', plus},
		{' ', space},
		{'#', hash},
		{'\0', '\0'}
	};

	for (i = 0; flags[i].sign; i++)
	{
		if (flags[i].sign == ptr)
			return (flags[i].flag);
	}

	return ('\0');
}
