#include <stdio.h>
main()
{

    char letra;

    printf ("Insira a letra para ser verificada \n");
    letra = getchar();

    if (letra == 97 || letra == 65) {                    // letra a
        printf ("A letra escolhida eh uma vogal");
    } else if (letra == 101 || letra == 69) {            // letra e
        printf ("A letra escolhida eh uma vogal");
    } else if (letra == 105 || letra == 73) {            // letra i
        printf ("A letra escolhida eh uma vogal");
    } else if (letra == 111 || letra == 79) {            // letra o
        printf ("A letra escolhida eh uma vogal");
    } else if (letra == 117 || letra == 85) {            // letra u
        printf ("A letra escolhida eh uma vogal");
    } else {
        printf ("A letra escolhida eh uma consoante");
    }
}