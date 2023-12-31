#include "3-calc.h"

/**
 * main - main loop of this cluster
 * @argc: length of arguments
 * @argv: arguments
 * Return: 0 succ, 98 on arg error, 99 invalid op, 100 div by 0
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
