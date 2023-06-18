#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;
	int m;
	int n;

	while (l <= '7')
	{
		while (m <= '8')
		{
			while (n <= '9')
			{
				if (l < m && m < n)
				{
					putchar(l);
					putchar(m);
					putchar(n);
					if (!(l == '7' && m == '8' && n == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				n++;
			}
			n = '0';
			m++;
		}
		m = 'o';
		l++;
	}
	putchar('\n');
	return (0);
}
