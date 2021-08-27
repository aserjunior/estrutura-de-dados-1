#include <stdio.h>
main()
{
    int A, B, codigo, acao;

    printf ("Insira o primerio numero \n");
    scanf ("%i", &A);
    printf ("Insira o segundo numero \n");
    scanf ("%i", &B);
    printf ("Escolha qual operacao deve ser executada \n");
    scanf ("%i", &codigo);

    switch ( codigo )
    {
        case (1) :
        acao = (A + B);
        printf ("O resultado da soma eh %i", acao);
        break;

        case (2) :
        acao = (A - B);
        printf ("O resultado da subtracao eh %i", acao);
        break;

        case (3) :
        acao = (A * B);
        printf ("O resultado da multiplicacao eh %i", acao);
        break;

        case (4) :
        acao = (A / B);
        printf ("O resultado da divisao eh %i", acao);
        break;

        default :
        printf ("So existem 4 tipos de operacoes!");
    } 



}