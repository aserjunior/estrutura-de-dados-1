#include <stdio.h>
main()
{
    float p1, p2, p3, menor ;

    printf ("Insira o preco do primeiro produto \n");
    scanf ("%f", &p1);
    printf ("Insira o preco do segundo produto \n");
    scanf ("%f", &p2);
    printf ("Insira o preco do terceiro produto \n");
    scanf ("%f", &p3);

    if (p1 < p2) {
        menor = p1;
    } else {
        menor = p2;
    } if (menor < p3 && menor == p1){
        printf ("O primeiro produto deve ser comprado");
    } else if (menor < p3 && menor == p2) {
        printf ("O segundo produto deve ser comprado");
    } else if (menor > p3){
        printf ("O terceiro produto deve ser comprado");
    }
    
}