#include <stdio.h>
main()
{
    int D, M ,A, bissexto, D2, M2, A2, bissexto2;

    printf("Insira a primeira data nesse formato >>> Dia, Mes, Ano \n");
    scanf ("%i, %i, %i", &D, &M, &A);
    printf("Insira a segunda data nesse formato >>> Dia, Mes, Ano \n");
    scanf ("%i, %i, %i", &D2, &M2, &A2);

    bissexto = (A % 4);
    bissexto2 = (A2 % 4);


    //CHECAR DATA 1
    if (M == 1 && D > 31) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 2 && bissexto == 0 && D > 29) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 2 && bissexto == 1 && D > 28) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 3 && D > 31) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 4 && D > 30) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 5 && D > 31) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 6 && D > 30) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 7 && D > 31) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 8 && D > 31) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 9 && D > 30) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 10 && D > 31) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 11 && D > 30) {
        printf ("A data 1 escolhida eh invalida");
    } else if (M == 12 && D > 31) {
        printf ("A data 1 escolhida eh invalida");
        
        //CHECAR DATA 2
        } else if (M2 == 1 && D2 > 31) {                            
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 2 && bissexto2 == 0 && D > 29) {
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 2 && bissexto2 == 1 && D > 28) {
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 3 && D2 > 31) {
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 4 && D2 > 30) {
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 5 && D2 > 31) {
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 6 && D2 > 30) {
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 7 && D2 > 31) {
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 8 && D2 > 31) {
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 9 && D2 > 30) {
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 10 && D2 > 31) {
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 11 && D2 > 30) {
            printf ("A data 2 escolhida eh invalida");
        } else if (M2 == 12 && D2 > 31) {
            printf ("A data 2 escolhida eh invalida");
            
            //COMPARAR AS DATAS
            } else if (A > A2){
                printf ("A primeira data eh mais recente");
            } else if (A < A2) {
                printf ("A segunda data eh mais recente");
            } else if (M > M2) {
                printf ("A primeira data eh mais recente");
            } else if (M < M2) {
                printf ("A segunda data eh mais recente");
            } else if (D > D2) {
                printf ("A primeira data eh mais recente");
            } else if (D < D2) {
                printf ("A segunda data eh mais recente");
            } else if (A == A2 && M == M2 && D == D2) {
                printf ("As datas escolhidas sao iguais");
            }



}