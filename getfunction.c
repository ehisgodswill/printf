include "main.h"

/**
 * getfunction -  the function that selects the correct function
 * to perform the operation asked by the user.
 * @s: An input char pointer operator passed as argument
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter.
 */
int (*getfunction(char *s))(int, int)
{
	op_t ops[] = {
		{'s', _putnum},
		{'c', _putchar},
		{'%', _putperc},
		{'d', _putnum},
		{'i', _putnum},
		{'b', _putbin},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 7)
	{
		if (*(ops[i]).op == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
