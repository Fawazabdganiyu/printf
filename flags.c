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
	int retval = 0, num;

	(*ptr)++;
	if (**ptr == 'i' || **ptr == 'd')
	{
		num = va_arg(ap, int);
		(*ptr)--;
	}
	else
	{
		(*ptr)--;
		return (0);
	}

	if (**ptr == ' ')
	{
		if (num >= 0)
			retval += _putchar(' ');

		(*ptr) += 2;
		if (num == 0)
			return (_putchar('0') + retval);

		return (put_int(num) + retval);
	}

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
	int retval;

	(void)ap;

	retval = 0;
	if (**ptr == '#')
	{
		(*ptr)++;
		if (**ptr == 'o')
		{
			retval += _putchar('0');
		}
		else if (**ptr == 'x')
		{
			retval += _putchar('0');
			retval += _putchar('x');
		}
		else
		{
			retval += _putchar('0');
			retval += _putchar('X');
		}
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
	int retval = 0, num = va_arg(ap, int);

	if (**ptr == '+' && num >= 0)
	{
		retval += _putchar('+');
	}

	(*ptr) += 2;
	if (num == 0)
		return (_putchar('0') + retval);

	return (put_int(num) + retval);
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
