#include <stdio.h>
#include "main.h"

int main(void)
{
    int len = _putws("\n");
    putchar('\n');
    _printf("[%d] <-->\n", len);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("%S\n", "\n");
    _printf("[%d] <-->\n", len);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("%S\n", "\x01\x02\x03\x04\x05\x06\x07");
    _printf("[%d] <-->\n", len);
    printf("-----------------------------------------------------------------------\n");
    len = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
    _printf("[%d] <-->\n", len);
    printf("-----------------------------------------------------------------------\n");
    len = _putws("\x1F\x7F\n");
    _printf("[%d] <-->\n", len);
    return 0;
}