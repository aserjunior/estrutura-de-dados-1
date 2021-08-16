#include <stdio.h>

main()
{

    int N1, N2, N3, maior ;

    printf ("Insira o primeiro numero: \n");
    scanf ("%i", &N1);
    printf ("Insira o segundo numero: \n");
    scanf ("%i", &N2);
    printf ("Insira o terceiro numero: \n");
    scanf ("%i", &N3);

    if (N1 > N2) {
        maior = N1;
    } else {
        maior = N2;
    } if (maior > N3 && maior == N1) {
            printf ("O maior numero eh %i", N1);
        } else if (maior > N3 && maior == N2) {
            printf("O maior numero eh %i", N2);
        } else if (maior < N3){
            printf ("O maior numero eh %i", N3);
        }

        
    }