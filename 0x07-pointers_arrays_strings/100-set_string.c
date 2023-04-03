#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: argument one, pointer to a pointer
 * @to: argument two,
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
