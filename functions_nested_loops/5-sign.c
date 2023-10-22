#include <stdio.h>
#include <main.h>

int main(void)
{
	int i;

	if (i > 0)
		{
		printf("le nombre est positif %hd"\n, i);
		return (1);
		};
		else if (i < 0)
			{
			printf("le nombre est négatif %hd"\n, i);
			return (-1);
			};
		printf("le nombre est nul %hd"\n, i);
		return (0);
		}

return (0);
}
