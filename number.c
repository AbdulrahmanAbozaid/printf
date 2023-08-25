#include "main.h"

/**
 * convert - integer to string
 * @num: int
 * @base: radix
 * Return: str
 */

char *convert(long int num, int base)
{
	static char *bases;
	static char conv_num[50];
	char sign = 0;
	char *p_str;
	unsigned long tnum = num;

	if (num < 0)
	{
		tnum = -num;
		sign = '-';
	}

	bases = "0123456789";
	p_str = &conv_num[49];
	*p_str = '\0';

	do {
		*--p_str = bases[tnum % base];
		tnum /= base;
	} while (tnum != 0);

	if (sign)
	{
		*--p_str = sign;
	}

	return (p_str);
}
