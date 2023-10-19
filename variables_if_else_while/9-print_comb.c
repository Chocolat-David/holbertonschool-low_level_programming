#include <stdio.h>

/**
* main - main function
*
* Return: char
*/

int main(void)
{
	int n = '0';

	while (n <= '8')
		{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
		}
	n++;
	putchar(n);
	putchar('\n');

	return (0);
}
