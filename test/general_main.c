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
    int len, len3, len4;
    int len2;
    unsigned int ui;
    void *addr;
    char *add;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = &ui;
    add = addr;
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
    _printf("Address:[%p]\n", add);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
 len3 =  _printf("Unknown:[%r]\n");
 len4 =  printf("Unknown:[%r]\n");
 printf("len3 = %d, len4 = %d\n", len3, len4);
    _printf("%\n");
    printf("%\n");

    _printf("% s\n", "feranim1");
    printf("% s\n", "feranim");

    _printf("%     s\n", "Mmm");
    printf("%     s\n", "Mmm");

    _printf("%   s you\n", "Mmm");
    printf("%   syou \n", "Mmm");

    _printf("%");

    _printf("%\n");
    printf("%\n");
    return (0);
}
