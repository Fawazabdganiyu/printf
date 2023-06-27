#include "main.h"
#include <stdio.h>

int main(void)
{
    printf("%d\n", _printf("%+d\n", 12));
    printf("%d\n", _printf("%+d\n", 123));
    printf("%d\n", printf("%+d\n", 12));
    printf("%d\n", printf("%+d\n", 123));
    return (0);
}