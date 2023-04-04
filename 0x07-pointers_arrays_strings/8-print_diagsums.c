#include "main.h"
/**
 * print_diagsums - this customised function prints per the requirement.
 * @a: argument one, a pointer
 * @size: argument two,
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, l = 0, r = 0;

	for (i = 0; i < size * size; i += size + 1)
		l += a[i];
	for (i = size - 1; i < size * size - 1; i += size - 1)
		r += a[i];
	printf("%d, %d\n", l, r);
}
