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
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int index;
	int size = sizeof(alphabet);

	for (index = 0; index < size; index++)
		putchar(alphabet[index]);

	putchar('\n');
	return (0);
}
