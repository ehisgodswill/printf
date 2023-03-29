#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @lp: length pointer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c, int *lp)
{
	*lp = *lp + 1;
	return (write(1, &c, 1));
}
/**
 * _putstr - writes the string s to stdout
 * @s: The string to print
 * @lp: length pointer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putstr(char *s, int *lp)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i++], lp);
	}
	return (1);
}

/**
 * _putperc - writes the character % to stdout
 * @c: The character to print
 * @lp: length pointer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putperc(int c, int *lp)
{
	c++;
	return (_putchar('%', lp));
}

/**
 * _putnum - writes the number n to stdout
 * @n: The number to print
 * @lp: length pointer
 *
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
		_putnum(n / 10, lp);
	}
	r = _putchar((n % 10) + '0', lp);
	return (r);
}

/**
 * _putbin - converts to binary and writes the number n to stdout
 * @n: The number to print
 * @lp: length pointer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putbin(int n, int *lp)
{
	short binaryNum[32], i = 0, j = 0, r;

	if (n < 0)
	{
		_putchar('-', lp);
		n = -n;
	}
	if (n == 0)
		_putchar('0', lp);
	while (n > 0)
	{
		binaryNum[i++] = n % 2;
		n /= 2;
	}

	for (j = i - 1; j >= 0; j--)
		r = _putchar('0' + binaryNum[j], lp);
	return (r);
}
