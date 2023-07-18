#include "main.h"
/**
 * main - putchar
 * Description: prints out _putchar
 * Return: 0 (I'm the best)
 *
 * _putchar - actually puts out the char
 * Description: they really want us to do this?
 * Return: VOID
 */
#include <wchar.h>
int main(void)
{
	int i;

	char str[] = "_putchar";
	for ( i = 0; i < sizeof(str); i++)
	{
		_putchar(&str[i]);
	}


	return (0);
}
