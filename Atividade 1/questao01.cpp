#include <stdio.h>
main()
{
    float vel, m;

    printf ("Insira a velocidade em m/s \n\n");
    system("Pause");
    scanf ("%f", &m);
    vel=(m * 3.6);
    printf ("A velocidade em Km/h e: %f\n\n", vel);

    system("Pause");
}