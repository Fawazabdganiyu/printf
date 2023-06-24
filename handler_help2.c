#include "main.h"
#include <stdio.h>

/**
 * dec_bin - converts decimal to bin
 * @num: number to convert to bin
 * Return: bin form of num in strings
*/
char *dec_bin(unsigned int num)
{
		unsigned int cpy = num, counter = 0, retval = 0;
		char *bit;

		while (cpy > 0)
		{
			cpy >>= 1;
			counter++;
		}
		bit = malloc(sizeof(char) * counter + 1);
		bit[counter--] = '\0';
		while (num > 0)
		{
			bit[counter--] = (num & 1) + '0';
			num >>= 1;
		}
		return (bit);
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
	reverse(str);
	return (str);
}

