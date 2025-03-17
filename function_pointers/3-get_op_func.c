#include "3-calc.h"
/**
 *get_op_func - function select the correct function to perform the operation
 *asked by the user.
 *@s : pointer to op
 *Return: the good function
 */
int (*get_op_func(char *s))(int, int)
{
int i;
while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op == 0)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
