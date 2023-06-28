#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2, len3, len4, len5;
    unsigned int ui;
    void *addr;
    int* ptr2 = malloc(sizeof(int));
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("%d\n", 0);
    len2 = printf("%d\n", 0);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("%x\n", 0);
    len2 = printf("%x\n", 0);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("%o\n", 0);
    len2 = printf("%o\n", 0);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len3 =  _printf("Address:[%p]\n", addr);
    len4 = printf("Address:[%p]\n", addr);
    _printf("Address:[%p]\n", NULL);
    _printf("Address:[%p]\n", NULL);

    printf("Len:[%d]\n", len3);
    printf("Len:[%d]\n", len4);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%y]\n");
    printf("Unknown:[%y]\n");
    _printf("String with spaces: %r\n", "Hello World");
    _printf("String with special characters: %r\n", "Hello, World!");
    _printf("%     s\n", "\n MMm\n");
    printf("%     s\n", "\n MMm\n");
    _printf("Non-null pointer: %p\n", ptr2);
    printf("Non-null pointer: %p\n", ptr2);
    len = _printf("%R\n", s);
    printf("------------------------------------\n");
    printf("Now is control\n");
    len2 = printf("%s\n", s);
    _printf("%S\n", "Hello\vWorld\r\n");
	_printf("%S\n", "\a\b\f\n\r\t\v");

    _printf("%b\n", 98);
    len5 = _printf("%S\n", "Best\nSchool");
    printf("Len:[%d]\n", len5);

    return (0);
}
