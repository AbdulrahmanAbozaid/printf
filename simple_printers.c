#include "main.h"

/**
 * print_from_to - prints range
 * @start: from
 * @stop: to
 * @except: skip
 * Return: num of bytes
 */

int print_from_to(char *start, char *stop, char *except)
{
	int num_of_bytes = 0;

	while (start <= stop)
	{
		if (start != except)
			num_of_bytes += _putchar(*start);
		start++;
	}
	return (num_of_bytes);
}

/**
 * print_rev - prints reverse
 * @ap: string
 * Return: num of bytes
 */

int print_rev(va_list ap)
{
	int len, num_of_bytes = 0;
	char *str = va_arg(ap, char *);

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str--)
			num_of_bytes += _putchar(*str);
	}
	return (num_of_bytes);
}

/**
 * print_rot13 - prints rot13 crypt
 * @ap: args
 * Return: num of bytes
 */

int print_rot13(va_list ap)
{
	char rot13[] =
		"NOPQRSTUVQXYZABCDEFGHIJKLM       nopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(ap, char *);
	int str_i = 0, rot_i = 0, num_of_bytes = 0;

	while (str[str_i])
	{
		if ((str[str_i] >= 'A' && str[str_i] <= 'Z') ||
			str[str_i] >= 'a' && str[str_i] <= 'z')
		{
			rot_i = str[str_i] - 65;
			num_of_bytes = _putchar(rot13[rot_i]);
		}
		else
			num_of_bytes = _putchar(str[str_i]);
		str_i++;
	}
	return (num_of_bytes);
}

