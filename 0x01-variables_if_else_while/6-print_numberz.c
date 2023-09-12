#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;

	for (f = 48; f < 58; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
