#include <stdio.h>

main() {

    int matricula;
    float nota1, nota2, nota3;
    float media = 0;
    int alunos = 0;
    int aprov = 0;
    int repro = 0;


    while (matricula != 0) {
        
        printf ("Insira a matricula: ");
        scanf ("%i", &matricula);
        if (matricula == 0){
            break;
        }
        
        printf("\nInsira a primeira nota: ");
        scanf ("%f", &nota1);

        printf("\nInsira a segunda nota: ");
        scanf ("%f", &nota2);

        printf("\nInsira a terceira nota: ");
        scanf ("%f", &nota3);

        media = ((2 * nota1) + (3 * nota2) + (5 * nota3)) / 10;

        if (media >= 7.0) {
            aprov += 1;
            alunos += 1;
        } else if (media < 7.0) {
            repro += 1;
            alunos += 1;
        }
    }
    
    printf("O total de alunos foi:\n>>>>> %i\nTotal de aprovados:\n>>>>> %i\nTotal de reprovados:\n>>>>> %i", alunos, aprov, repro);
}