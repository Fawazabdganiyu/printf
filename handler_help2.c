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
