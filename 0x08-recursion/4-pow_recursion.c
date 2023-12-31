#include "main.h"

/**
 * _pow_recursion - pow
 *
 * @x: value to raise power
 * @y: power to raise x
 *
 * Return: value of x to the power y or -1 if y < -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
