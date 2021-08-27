#include <stdio.h>

main() {

    int num, n1, n2;
    int contador = 0;



    printf ("Insira um valor: ");
    scanf ("%i", &num);

    while ((n1 + n2) != num) {
        if ((contador % 2) == 0) {
            printf ("Insira outro valor: ");
            scanf ("%i", &n1);
            contador += 1;
        } else if (contador % 2 != 0) {
            printf ("Insira outro valor: ");
            scanf ("%i", &n2);
            contador += 1;
        }


    }


}