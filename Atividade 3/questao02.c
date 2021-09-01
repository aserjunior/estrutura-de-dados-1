#include <stdio.h>

main() {

    int n, i, j;

    printf("Tamanho dos vetores: ");
    scanf("%i", &n);

    int valor = 0;
    int vA[n];
    int vB[n];
    int vC[2 * n];
    j = 0;

    for (i = 0; i < n; i++) {
        printf("Insira os valores do vetor A: ");
        scanf("%i", &valor);
        vA[i] = valor;
        vC[j] = valor;
        j++;
    }

    for (i = 0; i < n; i++) {
        printf("Insira os valores do vetor B: ");
        scanf("%i", &valor);
        vB[i] = valor;
        vC[j] = valor;
        j++;
    }

   
   
    printf("Vetor C:\n");
    for (i = 0; i < (n * 2);i++) {
        printf("%i\n", vC[i]);

   }



    








}