#include "main.h"

int _puts_S(char *str);

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

	while (str[i])
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] == 127)
		{
			_putchar('\\');
			_putchar('x');
			str_S = dec_hex(str[i], 'X');
			if (str[i] <= 10)
				_putchar('0');
			_puts(str_S);
			i++;
		}
		_putchar(str[i++]);
	}

	free(str_S);
	return (_strlen(s) + 2);
}
