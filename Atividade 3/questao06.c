#include <stdio.h>

main() {

    int n, i, soma;
    

    printf("Escolha o tamanho do vetor fibonnaci: ");
    scanf("%i", &n);


    int vetor[n];
    int x = 0;
    int y = 1;
    soma = (x + y);
    vetor[0] = x;
    vetor[1] = y;

    for (i = 2; i < n; i++) {
        soma = (x + y);
        x = y;
        y = soma;
        vetor[i] = y;
    }


    printf("Vetor fibonnaci:\n");
    for (i = 0; i < n; i++) {
        printf("%i\n", vetor[i]);
    }
}