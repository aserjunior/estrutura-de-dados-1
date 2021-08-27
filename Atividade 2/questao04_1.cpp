#include <stdio.h>


main() 
{
    float n1, div;

    printf("Insira o numero: ");
    scanf ("%f", &n1);
    

    while (n1 > 1) {
        n1 = n1 / 2;
        div = n1;
        
        if (n1 < 1) {
            div = (n1 * 2);
            printf ("O resultado da ultima divisao feita foi %0.2f", n1);  
        } else if (n1 == 1) {
            printf("O resultado da ultima divisao feita foi %0.2f", n1);
        }
        
    }



}