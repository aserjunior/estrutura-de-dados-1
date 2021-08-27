#include <stdio.h>

main() {

    
    float num;
    int contador = 0;

    printf("Insira um numero: ");
    scanf("%f", &num);

    while (num >= 1.0) {
        num = (num / 10);
        contador += 1;
        
        

    }
    printf("O numero escolhido, possui %i digitos", contador);

}