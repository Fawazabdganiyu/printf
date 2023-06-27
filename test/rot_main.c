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
    len = _printf("%R\n", s);
    printf("------------------------------------\n");
    printf("Now is control\n");
    len2 = printf("%s\n", s);
    printf("------------------------------------\n");
	printf("Len: %d Len: %d\n", len, len2);
    _printf("%R\n", NULL);
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    _printf("Hello, World! %R\n", "Hello, World!");
    printf("------------------------------------\n");
    _printf("Special characters: %R\n", "!@#$%^&*()");
    printf("------------------------------------\n");
    _printf("Escape sequences: %R\n", "Hello,\nWorld!");
    printf("------------------------------------\n");
    _printf("Empty string: %R\n", "");
    printf("------------------------------------\n");
    _printf("Null string: %R\n", NULL);
    printf("%s\n", NULL);
    return (0);
}
