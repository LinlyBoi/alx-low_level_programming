#include "main.h"
/** _atoi - atoi at home
 * @s: String to convert
 * Return: Integer form of string
 */
int _atoi(char *s)
{
	int idx, minus, num, len, f, digit;

	idx = 0;
	minus = 0;
	num = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (idx < len && f == 0)
	{
		if (s[idx] == '-')
			++minus;

		if (s[idx] >= '0' && s[idx] <= '9')
		{
			digit = s[idx] - '0';
			if (minus % 2)
				digit = -digit;
			num = num * 10 + digit;
			f = 1;
			if (s[idx + 1] < '0' || s[idx + 1] > '9')
				break;
			f = 0;
		}
		idx++;
	}

	if (f == 0)
		return (0);

	return (num);
}
