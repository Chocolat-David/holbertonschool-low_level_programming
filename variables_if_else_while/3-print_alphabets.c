#include <stdio.h>

/**
* main - main function
*
* Return: char
*/

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
		{
		putchar(c);
		c++;
		}

	while (C <= 'Z')
		{
		putchar(C);
		C++;
		}
	putchar('\n');

	return (0);
}
