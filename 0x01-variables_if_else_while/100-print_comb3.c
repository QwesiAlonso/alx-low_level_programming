#include <stdio.h>
/**
 * main - Enter point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = '0';
	int n = '1';

	while (m <= '8')
	{
		while (n <= '9')
		{
			for (m = '0'; m < '9'; m++)
			{
				for (n = m + 1; n <= '9'; n++)

				{
					putchar(m);
					putchar(n);
					if (m == '8' && n == '9')
					{
						putchar('\n');
						}
						else
						{
						putchar(',');
						putchar(' ');
					}
				}	
			}
			n++;
		}
		n = '0';
		m++;

	}
return (0);
}
