#include <stdio.h>

main() {

    float x, n, div ;

    printf ("Insira o primeiro numero: ");
    scanf ("%f", &x);
    printf ("Insira o segundo numero: ");
    scanf ("%f", &n);

    while (n != 2) {
        div = x / n;
        printf("\n%0.2f", div);
        x = div;
        n -= 1;
    }



}