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
