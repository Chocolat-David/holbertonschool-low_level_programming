#include <stdio.h>
#include <main.h>

int main(void)
{

	char c = 'a';
	int i = 0;
	for (i ; i < 10 ; i++)
	{
	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	}
	return (0);
}
