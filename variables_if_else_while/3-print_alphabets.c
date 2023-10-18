#include <stdio.h>

/**
* main - main function
*
* Return: char
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
		{
		putchar(c);
		c++;
		}

	char C = 'A';

	while (C <= 'Z')
		{
		putchar(C);
		C++;
		}
	putchar('\n');

	return (0);
}
