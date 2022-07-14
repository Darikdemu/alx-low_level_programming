#include "main.h"
/**
* _strncpy - Entry point
* @dest: copy toi
* @src: copy from
* @n: input number of char
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		if (i < n)
			dest[i] = src[i];

		while (i < n)
			dest[i++] = '\0';

	return (dest);

}
