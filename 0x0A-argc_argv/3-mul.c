#include <stdio.h>

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
		printf("%d\n", (*argv[1] - '0') * (*argv[2] - '0'));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
