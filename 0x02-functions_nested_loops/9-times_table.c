#include "main.h"
/**
 * times_table - 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int row, collumn, num;

	for (collumn = 0; collumn <= 9; collumn++)
	{
		for (row = 0; row <= 9; row++)
		{
			num = row * collumn;

			if (num < 10)
			{
				_putchar(num + '0');
			}

			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}

			if (row != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
