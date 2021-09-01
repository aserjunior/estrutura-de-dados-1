#include <stdio.h>

main() {

    int n, j, i;
    

    printf("Tamanho dos vetores: ");
    scanf("%i", &n);
    
    j = n - 1;
    int valor = 0;
    int vA[n];
    int vB[n];
    

    for (i = 0; i < n; i++) {
        printf("Insira um valor: ");
        scanf("%i", &valor);
        vA[i] = valor;
        vB[j] = valor;
        j--;
    }
    
    printf("Vetor A:\n");
    for (i = 0; i < n; i++) {
        printf("%i\n", vA[i]);
    }

    printf("Vetor B:\n");
    for (i = 0; i < n; i++) {
        printf("%i\n", vB[i]);
    }






}
