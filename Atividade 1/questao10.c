#include <stdio.h>
main()
{
    float N1, N2, NF, media;

    printf ("Insira a primeira nota \n");
    scanf ("%f", &N1);
    printf ("Insira a segunda nota \n");
    scanf ("%f", &N2);

    media = ((N1 + N2) / 2);

    if (media > 7.0) {
        printf ("Aprovado");
    } else {
        printf ("O aluno deve fazer a prova final! \n");
        system ("Pause");
        printf ("Insira a nota da prova final \n");
        scanf ("%f", &NF);
        if (NF >= 6.0) {
            printf ("Aprovado!");
        } else {
            printf ("Reprovado!");
        }
    }

}