#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 * Return: void
 */

void print_alphabet_x10(void)

{
	int i = 0;
	char c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(la);
		}
		_putchar('\n');
	i++;
	}
}
