#include <stdlib.h>

/**
 * print_name - ...
 * @name: ...
 * @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
