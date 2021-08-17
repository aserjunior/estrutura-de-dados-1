#include <stdio.h>
main()
{
    int numero;

    printf ("Insira um numero para a verificacao \n");
    scanf ("%i", &numero);

    if (numero < 0) {
        printf ("O numero escolhido eh negativo");
    } else {
        printf ("O numero escolhido eh positivo");
    }
}