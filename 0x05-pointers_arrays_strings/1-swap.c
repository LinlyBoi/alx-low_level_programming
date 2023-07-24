/**
 * swap_int - swapping ints
 * Description: Mi is Yu and Yu is Mi
 * @a: Yu (First number)
 * @b: Mi (Second number)
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
