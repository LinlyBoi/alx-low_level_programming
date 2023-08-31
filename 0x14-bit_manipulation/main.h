#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int resolve_binary(const char *b, unsigned int power);
unsigned int _strlen(const char *str);
void print_binary(long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
