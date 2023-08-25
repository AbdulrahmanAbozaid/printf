#include "main.h"

/**
 * _isdigit - is digit ?
 * @c: char
 *
 * Return: 1 | 0
 */

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - length
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * print_number - nummm
 * @str: number
 * Return: printed??
 */

int print_number(char *str)
{
	unsigned int num_of_bytes = 0, len = _strlen(str);

	num_of_bytes += _puts(str);
	return (num_of_bytes);
}

