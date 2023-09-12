#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, y;

	digit1 = 48;
	digit2 = 49;
	y = 50;
	while  ((digit1 < 56) && (digit2 < 57) && (y < 58))
	{
		putchar(digit1);
		putchar(digit2);
		putchar(y);
		if ((digit1 == 55) && (digit2 == 56) && (y == 57))
		{
			putchar('\n');
			digit1++;
			digit2++;
			y++;
		}
		else
		{
			putchar(',');
			putchar(' ');
			if (y < 57)
			{
				y++;
			}
			else if ((digit1 < 56) && (y == 57))
			{
				y = 1 + ++digit2;
			}
			else
			{
				digit2 = ++digit1 + 1;
				y = digit2 + 1;
			}
		}
	}
	return (0);
}
