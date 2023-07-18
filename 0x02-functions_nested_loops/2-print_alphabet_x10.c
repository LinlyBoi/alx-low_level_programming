#include "main.h"
/**
 * print_alphabet_x10 - abcd... 10 times
 * Description: Is good...no more description. Go call.
 * Return: VOID
 */
void print_alphabet_x10(void)
{
	int count;

	count = 0;
	while (count < 10)
	{
		print_alphabet();
		count++;
	}
}

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
