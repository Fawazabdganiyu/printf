#include "main.h"
#include <limits.h>

int _putchar(char c);
int _puts(char *s);
int _strlen(char *s);
int put_int(int num);
void reverse(char *s);

/**
 * _putchar - prints a char
 * @c: char to print
 * Return: char length = 1;
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _puts - prints a string
 * @s: str to print
 * Return: str length
*/
int _puts(char *s)
{
	char *str = (s == NULL) ? "(null)" : s;
	int i = 0, retval = 0;

	while (str[i])
	{
		retval += _putchar(str[i++]);
	}

	return (retval);
}

/**
 * _strlen - calcs the len of s
 * @s: str of whose length to count
 * Return: strings length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

/**
 * _con_strlen - calcs the len of const str
 * @s: str of whose length to count
 * Return: strings length
*/
int _con_strlen(const char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

/**
 * put_int - prints integer
 * @num: number to be printed
 * Return: length of num
*/
int put_int(int num)
{
	/*declare str (size = 11) and othe variables*/
	char *str;
	int i = 0, store, count;

	if (num == 0)
		return (_puts("0"));
	str = malloc(12 * sizeof(char));
	if (str == NULL)
		return (-1);

	/*get absolute if num is negative*/
	store = num;
	if (num == INT_MIN)
	{
		str[i++] = '8';
		num /= 10;
	}
	if (num < 0)
	{
		num = -num;
	}
	/*store each digit in str by using % 10*/
	while (num > 0)
	{
		str[i++] = num % 10 + '0';
		num /= 10;
	}

	/*if number is negative append a '-'*/
	if (store < 0)
	{
		str[i++] = '-';
	}
	/*reverse string and null terminate;*/
	str[i++] = '\0';
	reverse(str);
	count = _puts(str);
	return (count);
}

/**
 * reverse - reverses a string
 * @s: string to reverse*
 */
void reverse(char *s)
{
	int len, i, tmp;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len - 1; i >= len / 2 ; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
