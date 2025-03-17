#include "function_pointers.h"
/**
 *print_name - function print name
 *@name: parameter pointer
 *@f : function
 *Return : nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0)
f(name);
}
