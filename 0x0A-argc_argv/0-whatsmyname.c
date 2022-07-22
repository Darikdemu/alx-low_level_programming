#include <stdio.h>
/**
* main - this function prints it's name
*@argc: parameter
*@argv: an arry of a command listed
*return: 0 for success
*/
int main (int argc, char argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
