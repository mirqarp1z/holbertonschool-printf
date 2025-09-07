#include "main.h"

/**
 * print_char - prints a single character
 * @c: character to print
 * Return: number of characters printed
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}
