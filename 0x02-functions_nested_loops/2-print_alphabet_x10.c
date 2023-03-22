#include "main.h"
/**
 * print_alphabet_x10 - display 10 times lowercase alphabet
 */

void print_alphabet_x10(void)
{
	int n = 1;
	char letter;

	for (n = 1; n <= 10; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
