#include <stdio.h>

main() {

    int n, i, j, k;


    printf("Tamanho dos vetores: ");
    scanf("%i", &n);


    int valor = 0;
    int vA[n];
    int maior;
    int menor;


    for (i = 0; i < n; i++) {
        printf("Insira os valores do vetor A: ");
        scanf("%i", &valor);
        vA[i] = valor;
    }
    
    maior = valor;
    menor = valor;
    

    for (i = 0; i < n; i++) {

        if (vA[i] > maior) {
            j = i;
            maior = vA[i];
            
        } else if (vA[i] < menor){
            k = i;
            menor = vA[i];
    
        }
        
    }


    printf("O maior e %i, o menor e %i e eles estao na posicao %i e %i respectivamente", maior, menor, j, k);




}