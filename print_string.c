#include "main.h"

/**
 * print_string - prints a string
 * @str: string to print
 * Return: number of characters printed
 */
int print_string(char *str)
{
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}

	return (len);
}
