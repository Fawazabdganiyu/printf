#include "main.h"


int main(void)
{
    char *str;
    char str2[2]  = {12};
    char strp[] = {65, 66, 67, 9, 10, 13};
    char strq[] = {12};
    _putws("Betty\nHoberlton\t");
     _putchar('\n');
    _putws("Hello\tworld\n");
     _putchar('\n');
    /*Hello\x09world\x0A*/
    _putws("\t\n");
     _putchar('\n');
    /*\x09\x0A*/
    _putws("");
    _putchar('\n');
    /*(an empty line)*/
    str = "Hello\0world";
    _putws(str2);
     _putchar('\n');
    /*Hello*/
    _putws(str);
     _putchar('\n');
    /*\x7F*/
    _printf("*********************************************************************************************************************\n");
    _printf("%S\n", "Hello\tworld\nThis is a test\b");
    _printf("%S\n", "Hello, world!");
    _printf("%S\n", strp);
    _printf("%S\n", strq);
    _printf("%S\n", "Hello\\tworld\\n");
    /**
     * Hello\x09world\x0AThis is a test\x08
Hello, world!
ABC\x09\x0A\xD

Hello\tworld\n
    */




    return (0);
}