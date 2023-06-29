#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Input string
 */
void puts_half(char *str)
{
	int length = 0;
	int i, n;

	while (str[length] != '\0')
		length++;

	n = length / 2;

	if (length % 2 == 1)
		n += 1;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}

