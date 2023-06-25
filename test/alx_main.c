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
char c;

c = 'A';

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
    _printf("Address:[%x]\n", add);
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

    printf("****************************************************\n");
    
ui = (unsigned int)INT_MAX + 1024;

len = _printf("Let's try to printf a simple sentence with a %c and a %s.\n", c, "string");
len2 = printf("Let's try to printf a simple sentence with a %c and a %s.\n", c, "string");
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len2);

_printf("Unsigned:[%u] Hex:[%x] Oct:[%o]\n", ui, ui, ui);
printf("Unsigned:[%u] Hex:[%x] Oct:[%o]\n", ui, ui, ui);

_printf("Multiple characters: %c %c %c\n", 'A', 'B', 'C');
printf("Multiple characters: %c %c %c\n", 'A', 'B', 'C');

_printf("Multiple strings: %s %s %s\n", "string1", "string2", "string3");
printf("Multiple strings: %s %s %s\n", "string1", "string2", "string3");

_printf("Mixed: %c %s %u\n", 'A', "string", ui);
printf("Mixed: %c %s %u\n", 'A', "string", ui);

_printf("Percent sign: %%\n");
printf("Percent sign: %%\n");

_printf("Unknown specifier: [%y]\n");
printf("Unknown specifier: [%y]\n");

_printf("Empty string: [%s]\n", "");
printf("Empty string: [%s]\n", "");

_printf("NULL string: [%s]\n", NULL);
printf("NULL string: [%s]\n", NULL);

_printf("Width: [%10s]\n", "Hello");
printf("Width: [%10s]\n", "Hello");

_printf("Left-justified: [%-10s]\n", "Hello");
printf("Left-justified: [%-10s]\n", "Hello");

_printf("%d\n",-2147483648);
printf("%d\n",-2147483648);

_printf("%d\n",-2147483647);
printf("%d\n",-2147483647);

_printf("%d\n",-2147483646);
printf("%d\n",-2147483646);

_printf("%d\n",-2147483645);
printf("%d\n",-2147483645);

_printf("%d\n",-2147483644);
printf("%d\n",-2147483644);

_printf("%d\n",-2147483643);
printf("%d\n",-2147483643);

_printf("%d\n",-2147483642);
printf("%d\n",-2147483642);

_printf("%d\n",-2147483641);
printf("%d\n",-2147483641);

_printf("%d\n",-2147483640);
printf("%d\n",-2147483640);

_printf("%i\n",-2147483639);
printf("%i\n",-2147483639);

_printf("%i\n",-2147483638);
printf("%i\n",-2147483638);

_printf("%i\n",-2147483637);
printf("%i\n",-2147483637);

_printf("%i\n",-2147483636);
printf("%i\n",-2147483636);

_printf("%i\n",-2147483635);
printf("%i\n",-2147483635);


    return (0);
}