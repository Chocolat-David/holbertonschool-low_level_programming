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
		n++;
		}
	putchar('\n');

	return (0);
}
