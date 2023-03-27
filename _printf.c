#include <stdarg.h>
#include "main.h"

/**
 * _printf - a function similar to printf
 * @str: string to print
 * Return: length of the string
*/
int _printf(const char *str, ...)
{
	unsigned short i = 0;
	va_list ap;
	int lent = 0;

	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			switch (str[i++])
			{
				case 'c':
					_putchar(va_arg(ap, int));
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
				case 'b':
					_putbin(va_arg(ap, int));
					break;
				default:
					_putchar('%');
					_putchar(str[i - 1]);
					break;
			}
		}
		else
			_putchar(str[i++]);
	}
	va_end(ap);
	return (lent);
}
