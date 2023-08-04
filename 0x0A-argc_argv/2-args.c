#include <stdio.h>
/**
 * main - calling argv[0]
 * Return: Exit status 0 success, 1 error
 * @argc: length of arguments
 * @argv: arguments
 */
int main(int argc, char *argv[])
{
	while (*argv)
		printf("%s\n", *argv++);
	argc = argc;
	return (0);
}
