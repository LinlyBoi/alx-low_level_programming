#include "main.h"
/**
 * _isalpha - letter? YES
 * Description: A, a :), 0 :(
 * @c: the character you wanna check
 * Return: 1 if letter (any case), 0 otherwise
 */
int _isalpha(int c)
{
	if (_islower(c) || _isupper(c))
		return (1);
	else
		return (0);
}
/**
 * _islower - lowercase?
 * Description: a :), A :(
 * @c: the character you wanna check
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
/**
 * _isupper - uppercase?
 * Description: A :), a :(
 * @c: the character you wanna check
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
