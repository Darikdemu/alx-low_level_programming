#include "main.h"

/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*desc: The function uses loop to operate
 *Return: no return
*/

void print_alphabet_x10(void)
{

int i;
char c;
for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)


_putchar(c);
_putchar(10);
}
}
