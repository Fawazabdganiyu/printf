#ifndef _MAIN_H_
#define _MAIN_H_

#define INT_BUFFER_SIZE 11

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

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
int put_u_int(unsigned int num);
int put_dec_oct(unsigned int num);
char *dec_hex(unsigned int num, char h_case);
const char *reduce_blank(const char *format);
int _puts_S(char *str);
int _puts_ptr(void *ptr);
int _putwchar(char c);
int put_hex(unsigned int num);
int _putws(char *s);
int put_reverse(char *s);


/* specifier handlers */
int print_char(va_list ap);
int print_str(va_list ap);
int print_int(va_list ap);
int print_per(va_list ap);
int print_bin(va_list ap);
int print_unsigned(va_list ap);
int print_oct(va_list ap);
int print_HEX(va_list ap);
int print_hex(va_list ap);
int print_S(va_list);
int print_ptr(va_list ap);
int print_rev(va_list ap);

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
