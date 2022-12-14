#include "main.h"

/**
 * times_table - print the 9 times tables
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		putchar(0);

		for (mult = 1; mult <= 9; mult++)
		{
			putchar(',');
			putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				putchar(' ');
			else
				putchar((prod / 10) + '0');

			putchar((prod % 10) + '0');
		}
		putchar('\n');
	}
}
