#include <stdio.h>

/**
* main - main function
*
* Return: char
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
		{
		putchar(c);
		c--;
		}
	putchar('\n');

	return (0);
}
