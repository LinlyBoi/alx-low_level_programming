#include <stdio.h>
int numerate(char *s);

/**
 * main - multiplication program
 * @argc: argument count
 * @argv: actual arguments passed
 *
 * Return: 0 if success 1 if error (wrong parameter count)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", (numerate(argv[1]) * numerate(argv[2])));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
 * numerate - String -> number
 * @s: Stinky string
 * Return: Int of string or 0 if invalid
 */
int numerate(char *s)
{
	int sum;

	sum = 0;
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			sum += *s - '0';
			sum *= 10;
			s++;
		}
		else
			break;

	}
	return (sum);
}
