#include <stdarg.h>
#include "main.h"
int lent = 0;

/**
 * _printf - a function similar to printf
 * @str: string to print
 * Return: length of the string
*/
int _printf(const char *str, ...)
{
	unsigned short i;
	va_list ap;

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
					_putchar('%');
					break;
				case 'd':
				case 'i':
					_putnum(va_arg(ap, int));
					break;
				default:
					_putchar(str[i - 1]);
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
