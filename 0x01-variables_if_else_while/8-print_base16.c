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
	int num;

	char larger_nums;

	for (num = 0; num < 10; num++)
		putchar('0' + num);

	for (larger_nums = 'a'; larger_nums <= 'f'; larger_nums++)
		putchar(larger_nums);

	putchar('\n');
	return (0);
}
