#include <stdio.h>

/**
* main - main function
*
* Return: char
*/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		{
		if (n != 0)
			{
			putchar(',');
			putchar(' ');
			}
		putchar(n + '0');
		}
	putchar('\n');

	return (0);
}
