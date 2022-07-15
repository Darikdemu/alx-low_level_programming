#include "main.h"
/**
* _strncpy - Entry point
* @dest: copy to
* @src: copy from
* @n: input number of char
* Return: copy file
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;


for (i = 0; i < n; && src[i] != '\0'; i++)

dest[i] = src[i];

if (i < n)

dest[i] = src[i];

for (i = 0; i < n; i++)

dest[i] = '\0';




	return (dest);
}
