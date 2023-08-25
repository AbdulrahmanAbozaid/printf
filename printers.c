#include "main.h"

/**
 * print_char - char
 * @ap: args
 * Return: length
 */

int print_char(va_list ap)
{
	unsigned int num_of_bytes = 0, c = va_arg(ap, int);

	num_of_bytes += _putchar(c);
	return (num_of_bytes);
}

/**
 * print_int - int
 * @ap: args
 * Return: length
 */

int print_int(va_list ap)
{
	long i_num;

	i_num = (int)va_arg(ap, int);
	return (print_number(convert(i_num, 10)));
}


/**
 * print_string - string
 * @ap: args
 * Return: length
 */

int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	unsigned int num_of_bytes = 0;

	str = ((int)(!str)) ? NULL_STRING : str;

	num_of_bytes += _puts(str);
	return (num_of_bytes);
}


/**
 * print_percent - %
 * @ap: args
 * Return: length
 */

int print_percent(va_list ap)
{
	(void)ap;
	return (_putchar('%'));
}

