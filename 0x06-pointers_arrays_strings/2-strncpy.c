#include "main.h"
#include <string.h>
/**
* _strncpy - Entry point
* @dest: copy to
* @src: copy from
* @n: input number of char
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)

		dest[i]	= src[i];

		while (i < n)
			dest[i++] = '\0';

	return (dest);

}
