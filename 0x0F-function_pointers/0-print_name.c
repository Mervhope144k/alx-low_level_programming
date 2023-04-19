#include "function_pointers.h"

/**
 * print_name - function
 * @name: argument
 * @f: pointer function
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
