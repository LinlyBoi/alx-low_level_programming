#include <stdio.h>
/**
 * main - calling argv[0]
 * Return: Exit status 0 success, 1 error
 * @argc: length of arguments
 * @argv: arguments
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = argv[0];
	return (0);
}
