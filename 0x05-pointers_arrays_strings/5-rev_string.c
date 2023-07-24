#include "main.h"
/**
 * rev_string - Now draw it in reverse
 * Description: I have done nothing but teleport bread
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{

	int idx, tail;
	char *rev;

	for (idx = 0; *(s + idx) != '\0'; idx++)
		;

	idx--;
	tail = idx;
	rev = s;

	for (idx = 0; idx <= tail; idx++)
		rev[idx] = *(s + tail - idx);

	s = rev;
}
