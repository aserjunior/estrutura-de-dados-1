#include <stdio.h>
main()
{
    float vel, km;

    printf ("Insira a velocidade em m/s\n");
    scanf ("%f", &km);
    vel = (km / 3.6);
    printf ("A velocidade em m/s eh: %0.2f", vel);

}