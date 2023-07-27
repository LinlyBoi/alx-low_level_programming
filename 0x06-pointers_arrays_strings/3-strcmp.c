#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if same, +ve value if s1 is larger, -ve if s1 smaller
 */
int _strcmp(char *s1, char *s2)
{
	int idx, sum;

	sum = 0;
	idx = 0;
	while (*(s2 + idx) != '\0' && *(s1 + idx) != '\0')
	{
		if (*(s2 + idx) == '\0')
			sum += *(s1 + idx);
		else if (*(s1 + idx) == '\0')
			sum -= *(s2 + idx);
		else
			sum += *(s1 + idx) - *(s2 + idx);
		idx++;
	}

	return (sum);
}
