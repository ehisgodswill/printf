#ifndef _PRINT_F_
#define _PRINT_F_
int _putchar(int c, int *lp);
int _putstr(char *, int *lp);
int _putnum(int n, int *lp);
int _putperc(int c, int *lp);
int _putbin(int n, int *lp);
int (*getfunction(char s))(int, int *);
int _printf(const char *string, ...);
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char op;
	int (*f)(int c, int *lp);
} op_t;
#endif
