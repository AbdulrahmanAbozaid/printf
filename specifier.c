#include "main.h"

/**
 * get_specifier - format fun
 * @s: format
 * Return: num of printed bytes
 */

int (*get_specifier(char *s))(va_list)
{
	specifier_t specs[] = {
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL},
	};
	int n = 0;

	while (specs[n].specifier)
	{
		if (*s == specs[n].specifier[0])
		{
			return (specs[n].func);
		}
		n++;
	}
	return (NULL);
}

/**
 * get_print_func - format func
 * @s: fmt string
 * @ap: args
 * Return: num of byes
 */

int get_print_func(char *s, va_list ap)
{
	int (*func)(va_list) = get_specifier(s);

	if (func)
		return (func(ap));
	return (0);
}
