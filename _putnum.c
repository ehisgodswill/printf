#include "main.h"

/**
 * _putnum - writes the number n to stdout
 * @n: The number to print
 * @*lp: pointer to string length
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putnum(int n, int *lp)
{
	int r = 0;

	if (n < 0)
	{
		_putchar('-', lp);
		n = -n;
	}
	if (n > 9)
	{
		_putnum((n / 10), lp);
	}
	r = _putchar(((n % 10) + '0'), lp);
	return (r);
}
