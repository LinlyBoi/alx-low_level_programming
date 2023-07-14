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
	int num, num2, num3;


	for (num = 0; num < 10; num++)
	{

		for (num2 = num + 1; num2 < 10; num2++)
		{

			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar('0' + num);
				putchar('0' + num2);
				putchar('0' + num3);

				if (num != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}

	putchar('\n');
	return (0);
}
