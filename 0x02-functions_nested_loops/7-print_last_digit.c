#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int cpm;

	cpm = (nld % 10);

	if (cpm < 0)
	{
		cpm = (-1 * cpm);
	}

	_putchar(cpm + '0');
	return (cpm);
}
