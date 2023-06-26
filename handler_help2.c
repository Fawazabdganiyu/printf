#include "main.h"

char *dec_bin(unsigned int num);
int put_u_int(unsigned int num);
int put_dec_oct(unsigned int num);
char *dec_hex(unsigned int num, char h_case);
const char *reduce_blank(const char *s);

/**
 * dec_bin - converts decimal to binary
 * @num: The number to be converted
 *
 * Return: bin form of num in strings
*/
char *dec_bin(unsigned int num)
{
	unsigned int cpy, counter = 0;
	char *bit;

	if (num == 0)
	{

	}
	else
	{
		cpy = num;
		while (cpy > 0)
		{
			cpy >>= 1;
			counter++;
		}

		bit = malloc(sizeof(char) * counter + 1);
		if (bit == NULL)
			return (NULL);

		bit[counter--] = '\0';

		while (num > 0)
		{
			bit[counter--] = (num & 1) + '0';
			num >>= 1;
		}
	}

	return (bit);
}

/**
 * put_u_int - prints unsigned integer
 * @num: The number to be printed
 *
 * Return: The length of the printed num
*/
int put_u_int(unsigned int num)
{
	int i = 0, count;
	char s[INT_BUFFER_SIZE];

	if (num == 0)
	{
		return (_puts("0"));
	}
	else
	{
		while (num > 0)
		{
			s[i++] = (num % 10) + '0';
			num /= 10;
		}
		s[i] = '\0';
	}

	reverse(s);
	count = _puts(s);

	return (count);
}

/**
 * put_dec_oct - converts from decimal to octal number
 * @num: The given decimal
 *
 * Return: String representation of the converted number
 */
int put_dec_oct(unsigned int num)
{
	int i, count;
	char s[INT_BUFFER_SIZE];

	if (num == 0)
	{
		return (_puts("0"));
	}
	else
	{
		i = 0;
		while (num > 0)
		{
			s[i++] = (num % 8) + '0';
			num /= 8;
		}
		s[i] = '\0';
	}

	reverse(s);

	count = _puts(s);

	return (count);
}

/**
 * dec_hex - converts an integer from base ten to base 16(hexa)
 * @num: num to convert to hexa form
 * @h_case: hexadecimal case to convert upper or lower
 * Return: str of num in hexa
 */
char *dec_hex(unsigned int num, char h_case)
{
	char *hex = (h_case == 'x') ? "0123456789abcdef" : "0123456789ABCDEF", *str;
	unsigned int num_copy = num, count = 0, i = 0;

	if (num == 0)
	{

	}
	else
	{
		while (num_copy > 0)
		{
			count++;
			num_copy /= 10;
		}
		str = malloc(sizeof(char) * count + 1);
		if (str == NULL)
			return (NULL);
		while (num > 0)
		{
			str[i++] = hex[num % 16];
			num /= 16;
		}
		str[i] = '\0';
	}

	reverse(str);
	return (str);
}

/**
 * reduce_blank - reduces exess string space character after %
 * @s: The string to check for space character
 *
 * Return: A pointer to the non space character
 */
const char *reduce_blank(const char *s)
{
	char space = ' ';

	while (1)
	{
		if (*s != space)
		{
			break;
		}
		s++;
	}

	return (s);
}
