#include <stdio.h>
main()
{
    int num, C, D, U, soma;

    printf ("Coloque um numero inteiro de 3 digitos:");
    scanf ("%i", &num);
    U = (num % 10);
    
    #define varia (num - U)
    
    D = (varia / 10) % 10;

    C = (((varia / 10) - D) / 10);

    soma = (C + D + U);

    printf("A soma dos elementos de %i eh %i", num, soma);

}