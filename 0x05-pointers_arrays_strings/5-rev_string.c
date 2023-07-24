#include "main.h"
/**
 * rev_string - Now draw it in reverse
 * Description: I have done nothing but teleport bread
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{

	int i, tail, head;
	char temp;

	for (tail = 0; *(s + tail) != '\0'; tail++)
		;
	head = tail - 1;

	for (i = 0; i < tail / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + head);
		*(s + head--) = temp;
	}
}
