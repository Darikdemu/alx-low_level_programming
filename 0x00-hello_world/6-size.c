#include <stdio.h>



/**
 * main - prints the size of various types on the computer
 * Return: return the value 0 if exist properly, non zero otherwise
 */

int main(void)

{
int a;

long int b;

long long int c;

char d;

float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));

rintf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));

printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));

printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));

printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);

}
