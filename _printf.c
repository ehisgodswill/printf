#include <stdarg.h>
#include <stddef.h>
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
	int *lp = &lent;
	int (*func)(int, int *);

	va_start(ap, str);
	while (str != NULL && str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			func = getfunction(str[i]);
			if (str[i] == 's')
				_putstr(va_arg(ap, char *), lp);
			else if (func == NULL)
			{
				_putchar('%', lp);
				_putchar(str[i], lp);
			}
			else
				func(va_arg(ap, int), lp);
			i++;
		}
		else
			_putchar(str[i++], lp);
	}
	va_end(ap);
	return (lent);
}
