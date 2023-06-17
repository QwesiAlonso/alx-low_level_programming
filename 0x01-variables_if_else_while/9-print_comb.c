#include <stdio.h>
/**
 * main - Enter point
 * Return: Outcome 0
 */
int main(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
