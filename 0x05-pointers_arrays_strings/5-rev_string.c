#include "main.h"
/**
 * rev_string - Now draw it in reverse
 * Description: I have done nothing but teleport bread
 * Return: void
 */
void rev_string(char *s)
{

	int idx, bdx;
	char *rev;

	for (idx = 0; *(s + idx) != '\0'; idx++)
		;
	idx--;
	bdx = idx;

	rev = s;
	for (idx = 0; idx <= bdx; idx++)
	{
		rev[idx] = *(s + bdx);
		bdx--;
	}
	s = rev;


}
