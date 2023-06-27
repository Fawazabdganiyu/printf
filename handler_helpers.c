#include "main.h"

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
 * put_int - prints integer
 * @num: number to be printed
 * Return: length of num
*/
int put_int(int num)
{
	int sign, i = 0, count;
	char s[INT_BUFFER_SIZE];

	if (num == 0)
	{
		return (_putchar('0'));
	}
	else
	{
		sign = num;
		if (sign < 0)
			num = -num;

		while (num > 0)
		{
			s[i++] = (num % 10) + '0';
			num /= 10;
		}
		if (sign < 0)
			s[i++] = '-';

		s[i] = '\0';
	}
	reverse(s);
	count = _puts(s);

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
