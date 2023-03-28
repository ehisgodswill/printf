#ifndef _PRINT_F_
#define _PRINT_F_
extern int lent;
int _putchar(char c);
int _putnum(int n);
int _putbin(int n);
int (*getfunction(char *s))(int, int);
int _printf(const char *string, ...);
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif
