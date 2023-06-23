#ifndef _MAIN_H_
#define _MAIN_H_

#define BUFFER_SIZE 1024

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * print - custom data type for pointer to function
 */
typedef int (*print)(va_list ap);

/* wrapper, where specifiers are selected */
print get_speci_func(char);

/* main custum function */
int _printf(const char *format, ...);

/* handler_helpers */
int _putchar(char c);
int _strlen(char *s);
int _puts(char *s);
int put_int(int num);
void reverse(char *s);
char *dec_bin(unsigned int num);

/* specifier handlers */
int print_char(va_list ap);
int print_str(va_list ap);
int print_int(va_list ap);
int print_per(va_list ap);
int print_bin(va_list ap);

/**
 * struct handle_s - structure for the specifiers and their corresponding
 *	funtion
 * @spec: The specifier
 * @handler: A pointer to function
 */
typedef struct handle_s
{
	char *spec;
	print handler;
} handle_t;
#endif /* _MAIN_H_ */
