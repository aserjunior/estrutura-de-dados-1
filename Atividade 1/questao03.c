#include <stdio.h>
main()
{
    float valor, real;
    const float dolar = 5.25;

    printf ("1 dolar eh igual a: R$ %0.2f\n", dolar);
    system ("Pause");
    
    printf ("Insira o valor em dolar para a conversao: \n");
    scanf ("%f", &valor);
    real = (valor * dolar);

    printf("%0.2f dolares eh equivalente a e: R$ %0.2f\n", valor, real);

}