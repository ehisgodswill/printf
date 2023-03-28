#include "main.h"
#include <stddef.h>

/**
 * getfunction -  the function that selects the correct function
 * to perform the operation asked by the user.
 * @s: An input char pointer operator passed as argument
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter.
 */
int (*getfunction(char s))(int, int *)
{
	op_t ops[] = {
		/* {'s', _putstr},*/
		{'c', _putchar},
		{'%', _putperc},
		{'d', _putnum},
		{'i', _putnum},
		{'b', _putbin},
		{'\0', NULL}
	};
	int i = 0;

	while (ops[i].op != '\0')
	{
		if ((ops[i]).op == s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
