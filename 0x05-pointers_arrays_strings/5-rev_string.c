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
	char temp;

	for (idx = 0; *(s + idx) != '\0'; idx++)
		;
	idx--;
	tail = 0;

	for (; idx >= 0; idx--)
	{
		temp = *(s + tail);
		*(s + tail) = *(s + idx);
		*(s + idx) = temp;
		tail++;
	}
}
