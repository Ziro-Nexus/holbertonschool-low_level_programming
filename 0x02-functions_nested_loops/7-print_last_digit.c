#include "holberton.h"
/**
 * print_last_digit - print and return the las digit of integer value
 * @n: integer num
 * Return: int (always)
 */
int print_last_digit(int n)
{
	int res;
	char resc;

	res = _abs((n % 10));
	resc = res + 48;
	_putchar(resc);
	return (res);
}
