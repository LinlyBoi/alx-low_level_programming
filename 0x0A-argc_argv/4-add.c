#include <stdio.h>
int numerate(char *s);

/**
 * main - addition time
 * @argc: argument count
 * @argv: actual arguments passed
 *
 * Return: 0 if success 1 if error (wrong parameter count)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (numerate(argv[i]) == -1)
		{
			printf("Error\n");
			return (-1);
		}
		else
			sum += numerate(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
/**
 * numerate - String -> number
 * @s: Stinky string
 * Return: Int of string or 0 if invalid
 */
int numerate(char *s)
{
	int sum, flag;

	sum = 0;
	flag = 0;

	if (*s == '-')
	{
		flag = 1;
		s++;
	}

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			sum *= 10;
			sum += *s - '0';
			s++;
		}
		else
			return (-1);

	}

	if (flag)
		sum = -sum;

	return (sum);
}
