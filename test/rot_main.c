#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	int len, len2;
    len = _printf("%R", s);
    printf("------------------------------------\n");
    printf("Now is control\n");
    len2 = printf("%s", s);
    printf("------------------------------------\n");
	printf("Len: %d Len: %d\n", len, len2);
    _printf("%R", NULL);
    printf("------------------------------------\n");
    printf("%s", NULL);
    printf("------------------------------------\n");
    return (0);
}
