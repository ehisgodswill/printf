#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putperc(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putnum - writes the number n to stdout
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putnum(int n)
{
	int r = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		_putnum(n / 10);
	}
	r = _putchar((n % 10) + '0');
	return (r);
}

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
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		binaryNum[i++] = n % 2;
		n /= 2;
	}

	for (j = i - 1; j >= 0; j--)
		r = _putchar('0' + binaryNum[j]);
	return (r);
}
