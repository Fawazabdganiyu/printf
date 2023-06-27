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
	char *p;
    _printf("%R", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");

    _printf("%R", NULL);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", NULL);
    printf("------------------------------------\n");
    return (0);
}
