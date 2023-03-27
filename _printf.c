#include <stdarg.h>
#include "main.h"

/**
 * _printf - a function similar to printf
 * @str - string to print
 * Return: length of the string
*/
int _printf(const char *str, ...)
{
	unsigned short i;
	va_list ap;
	int lent = 0;
	int *lp = &lent;

	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			switch (str[i++])
			{
				case 'c':
					break;
				case 's':
					break;
				case '%':
					_putchar('%', lp);
					break;
				case 'd':
				case 'i':
					_putnum(va_arg(ap, int), lp);
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(str[i]);
			i++;
		}
	}
	va_end(ap);
	return (lent);
}
