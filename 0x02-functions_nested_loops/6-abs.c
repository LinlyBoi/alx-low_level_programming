#include "main.h"
/**
 * _abs - no -ve
 * Description: "-" >:( -> ""
 * @n: the number
 * Return: number without the "-" if exists
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
