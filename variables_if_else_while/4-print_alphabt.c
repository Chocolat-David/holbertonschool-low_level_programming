#include <stdio.h>

/**
* main - main function
*
* Return: char
*/

int main(void)
{
	char c = 'a';

	while ((c <= 'z') && (c != 'e') && (c != 'q'))
		{
		putchar(c);
		c++;
		}
	putchar('\n');

	return (0);
}
