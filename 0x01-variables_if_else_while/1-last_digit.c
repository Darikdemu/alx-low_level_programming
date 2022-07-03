#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the last digit of a randomly generated number
* and whether it is greater than 5, less than 6, or 0.
* Return: Always 0.
*/

int main(void)
{
int last_digit, n;

/* Intializes random number generator */


srand(time(0));

n = rand() - RAND_MAX / 2;

last_digit = n % 10;

if (last_digit > 5)
printf("Last Digit of %i is %i and is greater than %i\n", n, last_digit, 5);

else if (last_digit == 0)
printf("Last Digit of %i is %i and is %i\n", n, last_digit, 0);

else if (last_digit < 6)
printf("Last Digit of %i is %i and is less than %i and not %i\n"
, n, last_digit, 6, 0);

return (0);
}
