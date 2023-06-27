#include "main.h"

int put_reverse(char *s);

/**
 * put_reverse - prints a string in reverse form
 * @s: string to print
 *
 * Return: length of printed string
*/
int put_reverse(char *s)
{
	int retval = 0;
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
		retval += _putchar(s[len--]);
	}
	return (retval);

}
