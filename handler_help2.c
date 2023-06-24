#include "main.h"

/**
 * dec_bin - converts decimal to binary
 * @num: The number to be converted
 *
 * Return: bin form of num in strings
*/
char *dec_bin(unsigned int num)
{
	unsigned int cpy = num, counter = 0;
	char *bit;

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

	while (num > 0)
	{
		s[i++] = (num % 10) + '0';
		num /= 10;
	}
	s[i] = '\0';

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

	i = 0;
	while (num > 0)
	{
		s[i++] = (num % 8) + '0';
		num /= 8;
	}
	s[i] = '\0';

	reverse(s);

	count = _puts(s);

	return (count);
}

