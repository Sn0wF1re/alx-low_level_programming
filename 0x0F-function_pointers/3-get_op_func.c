#include "3-calc.h"
/**
 *get_op_func - select correct function based on user input
 *@s: pointer to function
 *
 *Return: pointer to the function that corresponds
 *to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
		{
			break;
		}
		i++;
	}
	return (ops[i / 2].f);
}