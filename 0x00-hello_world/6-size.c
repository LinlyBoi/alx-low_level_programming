#include <stdio.h>
/**
 * main - PLS
 * Description: Does something
 * Return: 0
 */
int main(void)
{
int char_size = sizeof(char);
printf("Size of a char: %d byte(s)\n",char_size);
int int_size = sizeof(int);
printf("Size of an int: %d byte(s)\n",int_size);
int long_size = sizeof(long int);
printf("Size of a long int: %d byte(s)\n",long_size);
int longlong_size = sizeof(long long int);
printf("Size of a long long int: %d byte(s)\n",longlong_size);
int float_size = sizeof(float);
printf("Size of a float: %d byte(s)\n",float_size);
return (0);
}
