#include "main.h"

/**
 * print_alphabet - Yeah?
 * Description: it does what it should do
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
