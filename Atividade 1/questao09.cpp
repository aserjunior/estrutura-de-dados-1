#include <stdio.h>
main()
{
    int D, M ,A, bissexto;

    printf("Insira uma data nesse formato >>> Dia, Mes, Ano \n");
    scanf ("%i, %i, %i", &D, &M, &A);

    bissexto = (A % 4);

    if (M == 1 && D > 31) {
        printf ("A data escolhida eh invalida");
    } else if (M == 2 && bissexto == 0 && D > 29) {
        printf ("A data escolhida eh invalida");
    } else if (M == 2 && bissexto == 1 && D > 28) {
        printf ("A data escolhida eh invalida");
    } else if (M == 3 && D > 31) {
        printf ("A data escolhida eh invalida");
    } else if (M == 4 && D > 30) {
        printf ("A data escolhida eh invalida");
    } else if (M == 5 && D > 31) {
        printf ("A data escolhida eh invalida");
    } else if (M == 6 && D > 30) {
        printf ("A data escolhida eh invalida");
    } else if (M == 7 && D > 31) {
        printf ("A data escolhida eh invalida");
    } else if (M == 8 && D > 31) {
        printf ("A data escolhida eh invalida");
    } else if (M == 9 && D > 30) {
        printf ("A data escolhida eh invalida");
    } else if (M == 10 && D > 31) {
        printf ("A data escolhida eh invalida");
    } else if (M == 11 && D > 30) {
        printf ("A data escolhida eh invalida");
    } else if (M == 12 && D > 31) {
        printf ("A data escolhida eh invalida");
    } else {
        printf ("A data escolhida eh valida");
    }


}