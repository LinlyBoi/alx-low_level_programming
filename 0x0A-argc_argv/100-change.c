#include <stdio.h>
int numerate(char *s);

/**
 * main - SPARE CHANANGEG?!
 * Return: 0 (i always succeed), 1 (unless?)
 * @argc: argument count
 * @argv: arguments
 */
int main(int argc, char **argv)
{
	int num, coins;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (-1);
	}


	num = numerate(argv[1]);
	coins = 0;
	if (num < 0)
	{
		printf("0\n");
		return (-1);
	}
	else
	{
		while (num >= 25)
		{
			coins++;
			num -= 25;
		}
		while (num >= 10)
		{
			coins++;
			num -= 10;
		}
		while (num >= 5)
		{
			coins++;
			num -= 5;
		}
		while (num >= 2)
		{
			coins++;
			num -= 2;
		}
		while (num >= 1)
		{
			coins++;
			num -= 1;
		}
		printf("%d\n", coins);
		return (0);
	}

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
