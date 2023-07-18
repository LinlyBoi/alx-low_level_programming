#include "main.h"
/**
 * main - putchar
 * Description: prints out _putchar
 * Return: 0 (I'm the best)
 *
 */
#include <wchar.h>
int main(void)
{
	int i;

	char str[] = "_putchar\n";
	int size = sizeof(str);

	for (i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}


	return (0);
}
