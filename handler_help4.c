#include "main.h"

int put_reverse(char *s);
int rot13(char str);
int put_rot13(char *str);

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
/**
 * rot13 - encodes a string using rot13.
 * @c: string to encode
 *
 * Return: Encoded and decoded string
 */
int rot13(char c)
{
	int retval = 0;

	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		retval += _putchar(c + 13);
	else if ((c > 'M' && c <= 'Z') || (c > 'm' && c <= 'z'))
		retval += _putchar(c - 13);
	else
		retval += _putchar(c);
	return (retval);
}

/**
 * put_rot13 - prints a string of alpha char in rot13
 * @str: string to print
 *
 * Return: number of printed characters
*/
int put_rot13(char *str)
{
	int retval = 0;

	while (*str)
	{
		rot13(*(str++));
		retval++;
	}
	return (retval);
}
