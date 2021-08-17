#include <stdio.h>
main()
{
    char letra;

    printf ("Insira o turno do aluno utilizando apenas a inicial \n");
    letra = getchar();

    if (letra == 109 || letra == 77) {
        printf ("Bom dia!");
    } else if (letra == 118 || letra == 86) {
        printf ("Boa Tarde!");
    } else if (letra == 110 || letra == 78) {
        printf ("Boa Noite!");
    } else {
        printf ("Valor Invalido!");
    }

}