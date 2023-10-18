#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - main function
* on utilise la methode algorithmique de la Dychotomie
* Return: int
* betty style doc for function maion goes there
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{

		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, n % 10);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}

