#include "main.h"

/**
 * _putbin - converts to binary and writes the number n to stdout
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putbin(int n)
{
	short binaryNum[32], i = 0, j = 0, r;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		binaryNum[i++] = n % 2;
		n /= 2;
	}

	for (j = i-1; j >= 0; j--)
		r = _putchar('0' + binaryNum[j]);
	return (r);
}
