#include "main.h"

/**
 * more numbers - print numbers to 14
 * atsen ict file
 * Return: return nothing
 */
 
void more_numbers(void)
{

int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
	}
}
