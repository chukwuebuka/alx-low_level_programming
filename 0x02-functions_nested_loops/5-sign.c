#include "main.h"

/**
 * print_sign - prints the sign of a digit
 *
 * @n: The character to check
 *
 * Return: 1 if positive, -1 if negativ, 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}
