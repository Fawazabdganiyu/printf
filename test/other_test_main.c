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
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
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
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    /*Bing's test*/
    _printf("Empty string: [%s]\n", "");
    printf("Empty string: [%s]\n", "");


   /*_printf("NULL string: [%s]\n", NULL);*/
  _printf("NULL string: [%s]\n", NULL);
    printf("NULL string: [%s]\n", NULL);

    _printf("Binary: [%b]\n", 98);
    printf("Binary: [1100010]\n");

    _printf("Octal with precision and width: [%#10.5o]\n", 98);
    printf("Octal with precision and width: [%#10.5o]\n", 98);

    printf("% s\n", "School");
    _printf("% s\n", "School");

    _printf("Hexadecimal with precision and width: [%#10.5x]\n", 98);
    printf("Hexadecimal with precision and width: [%#10.5x]\n", 98);

    _printf("Hexadecimal with precision and width (uppercase): [%#10.5X]\n", 98);
    printf("Hexadecimal with precision and width (uppercase): [%#10.5X]\n", 98);

    _printf("Unsigned with precision and width: [%10.5u]\n", 98);
    printf("Unsigned with precision and width: [%10.5u]\n", 98);

    len = _printf("%   k\n");
    len2 = printf("%   k\n");

    _printf("\nLength of invalid format specifier: %d\n", len);
    printf("\nLength of invalid format specifier: %d\n", len2);
    return (0);
}
