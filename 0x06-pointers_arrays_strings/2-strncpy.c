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

	
	strncpy(dest, src, n);

	return (dest);

}
