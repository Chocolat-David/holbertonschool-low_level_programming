#include <stdio.h>

/**
* main - main function
*
* Return: char
*/

int main(void)
{
	int n = '0';

	while (n <= '9')
		{
		putchar(n);
		if (n < '9')
			{
			putchar(',');
			putchar(' ');
			}
		else
			n++;
		}
	putchar('\n');

	return (0);
}
