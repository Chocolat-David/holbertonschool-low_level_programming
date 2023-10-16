#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    int n;
    
    srand(time(0));
    n = rand() - RAND_MAX 2;
    /* your code goes there */
    if ( n > 0 ) {
      printf("la valeur de n est supérieure à zéro donc le resultat est negatif\n");
    } else if ( n < 0 ) {
      printf("la valeur de n est inférieure à zéro donc le resultat est positif\n");
    }
    printf("la valeur de n est : %d\n", n);

    return (0);
}

