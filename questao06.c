#include <stdio.h>
main()
{

    int a, b;

    printf ("Insira o primeiro numero: \n ");
    scanf ("%i", &a);
    printf ("Insira o segundo numero: \n");
    scanf ("%i", &b);

    if (a >= b) {
        printf ("%i eh o maior e %i eh o menor", a, b);   
    } else {
        printf ("%i eh maior e %i eh o menor", b, a);
    }

}