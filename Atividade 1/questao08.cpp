#include <stdio.h>
main()
{
    int numero, D, U;

    printf ("Insira um numero de dois digitos: \n");
    scanf ("%i", &numero);
    if (numero > 99 || numero < 10) {
        printf ("Esse nao eh um numero de dois digitos!");
    } else {
        U = (numero % 10);
        D = ((numero - U)/ 10);
        if (U == D){
            printf ("O algarismo da dezena eh igual ao da centena");
        } else {
            printf ("O algarismo da dezena eh diferente da centena");
        }
    }
    

}