#include "main.h"
/**
 * main - alphabet
 * Description: prints out _putchar
 * Return: 0 (I'm the best)
 *
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
