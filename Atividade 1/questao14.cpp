#include <stdio.h>
main()
{
    char sexo, letra;

    printf ("Insira o letra que represanta o sexo escolhido \n");
    letra = getchar();
    sexo = ("%i", letra);
    
    switch ( sexo ) 
    {
        case (77) :
        printf ("M - Masculino");
        break;

        case (70) :
        printf ("F - Feminino");
        break;

        default :
        printf ("Sexo Invalido");

    }
     
}