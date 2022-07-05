#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line
* @n: starting integer
* Return: void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar("%d", n);
			if (n != 98)
			{
				_putchar(", ");
			}
			n++;
		}
	}

	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar("%d", n);
			if (n != 98)
			{
			_putchar(", ")
		}
			n--;

		}
	}

	else
	{
		_putchar("98");
	}
	_putchar("\n");

	}

}


