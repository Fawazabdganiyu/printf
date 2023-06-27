#include "main.h"
#include <stdio.h>

int main()
{
    _printf("%r adam\n", "");
    _printf("%r\n", NULL);
    _printf("Empty string: %r\n", "");
    _printf("String with spaces: %r\n", "Hello World");
    _printf("String with special characters: %r\n", "Hello, World!");
    _printf("String with escape sequences: %r\n", "Hello\tWorld\n");
    _printf("String with non-ASCII characters: %S\n", "Hello 世界");
    _printf("Multiple %%r specifiers: %r %r\n", "Hello", "World");
    _printf("Mix of %%r and other specifiers: %s %d %r\n", "Hello", 123, "World");
   return (0);
}