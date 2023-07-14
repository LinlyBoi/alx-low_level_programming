#include <stdio.h>
/**
 * main - Alphabet
 * Description: nuts
 * I DONT KNOW
 * WHAT
 * YOU
 * WANT
 * Return: 0 on success (I never fail)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
			putchar(letter);

	putchar('\n');
	return (0);
}
