#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lower case 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int b;
	char c;

	for (b = 0 ; b <= 9 ; b++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
			_putchar(c);
		_putchar('\n');
	}
}
