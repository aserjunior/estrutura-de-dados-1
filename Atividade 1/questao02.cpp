#include <stdio.h>
main()
{
    int hrs, min, total, valorh;

    printf ("Insira o total de horas \n");
    scanf ("%i", &hrs);
    valorh = (hrs * 60);
    
    printf ("Insira o total de minutos \n");
    scanf ("%i", &min);
    total = (valorh + min);

    printf("O tempo total em minutos e: %0.2i minutos\n\n", total);

}
