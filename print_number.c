#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return: number of characters printed
 */

int print_number(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += write(1, "-", 1);
		num = -n;
	}
	else
	{
        num = n;
	}

	if (num / 10)
		count += print_number(num / 10);

	count += print_char((num % 10) + '0');

	return (count);
}
