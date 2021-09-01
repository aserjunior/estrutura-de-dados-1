#include <stdio.h>

main(){

    int n, i;

    printf("Tamanho dos vetores: ");
    scanf("%i", &n);

    int valor = 0;
    int vA[n];
    int vB[n];


    for (i = 0; i < n; i++) {
        printf("Insira os valores do vetor A: ");
        scanf("%i", &valor);
        vA[i] = valor;
    }

    for (i = 0; i < n; i++) {
        if ((vA[i] % 2) == 0) {
            vB[i] = 0;
        } else if ((vA[i] % 2) != 0) {
            vB[i] = 1;  
        }
    }

    printf("Vetor B:\n");
    for (i = 0; i < n; i++) {
        printf("%i\n", vB[i]);
    }

}