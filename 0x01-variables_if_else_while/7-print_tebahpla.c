#include <stdio.h>
/**
 * main - Entry point
 * Return: Outcome 0 (Success)
 */
int main(void)
{
	int m = 122;

	while (m >= 97)
	{
		putchar(m);
		m--;
	}
	putchar('\n');
	return (0);
}
