#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1
#define UNUSED(x) (void)(x)
#define NULL_STRING "(null)"


/**
 * struct specifier - struct tok
 * @specifier: fdsgd
 * @func: fsgsd
 */

typedef struct specifier
{
	char *specifier;
	int (*func)(va_list);
} specifier_t;

int _puts(char *str);
int _putchar(char c);


int print_char(va_list);
int print_string(va_list);
int print_int(va_list);
int print_percent(va_list);
int print_binary(va_list);
int print_S(va_list ap);


int (*get_specifier(char *s))(va_list);
int get_print_func(char *s, va_list);

int print_from_to(char *start, char *stop, char *exept);

int _isdigit(char c);
int _strlen(char *s);

int print_number(char *str);
char *convert(long int num, int base);

int _printf(const char *format, ...);

#endif

