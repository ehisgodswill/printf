#include <stdarg.h>
#include "main.h"

/**
 * _printf - a function similar to printf
 * string - string to print
 * Return: length of the string
*/
int _printf(const char *string, ...)
{
	unsigned short i;
	va_list ap;

	va_start(ap, string);
	while(string[i] != '\0')
	{
		if(string[i] == '%')
		{
			i++;
			switch(string[i++])
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
			}
		}
		else
		{
			_putchar(string[i]);
			i++;
		}
	}
	va_end(ap);
	return (len);
}
