#include <stdio.h>


main() 
{
    int numero, divisor ;
    while (numero != 0) {
        printf ("\nInsira um numero para analise: ");
        scanf ("%i", &numero);
        for (int i = 2; i <= numero; i++) {
            if (numero % i == 0) {
                printf (" %i ", i);
            }
        }

        
    }
}
