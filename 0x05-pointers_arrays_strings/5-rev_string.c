#include "main.h"
#include <stdio.h>
/**
* rev_string - This fuction print a string reverser
* @s: this is the pointer that point to a string
*/
void rev_string(char *s)
{
	int count = 0, i, temp = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	for (i = 0 ; i <= ((count - 1) / 2) ; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (count - (i + 1)));
		*(s + (count - (i + 1))) = temp;
	}

}
