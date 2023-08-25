#include "main.h"

/**
 * _printf - print
 * @format: fmt
 * Return: length.
 */


int _printf(const char *format, ...)
{
	int len = 0;
	va_list args;
	char *p, *start;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (p = (char *)format; *p; p++)
	{
		if (*p != '%')
		{
			len += _putchar(*p);
			continue;
		}

		start = p;
		p++;

		if (!get_specifier(p))
			len += print_from_to(start, p, 0);
		else
			len += get_print_func(p, args);
	}
	_putchar(BUF_FLUSH);
	va_end(args);
	return (len);
}

