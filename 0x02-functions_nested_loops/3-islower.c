#include "main.h"
/**
 * _islower -A function that checks for lowercase characters
 * @c: Parameter to be checked
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
