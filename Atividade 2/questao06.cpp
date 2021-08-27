#include <stdio.h>

main() {
    
    float salario;
    float novoSalario;
    float salarAntes = 0;
    float salarDepois = 0;
    float difSalar = 0;
    float ajuste = 0;


    while (salario != 0) {
        printf ("Insira o valor do salario: ");
        scanf ("%f", &salario);     
        salarAntes += salario;
        
        if (salario < 3000.00) {
            ajuste = (salario * 0.25);
            novoSalario = (salario + ajuste);
            salarDepois += novoSalario;
            printf("O novo salario sera >>> %0.2f\n\n", novoSalario);
        } else if (salario >= 3000.00 && salario < 6000.00) {
            ajuste = (salario * 0.20);
            novoSalario = (salario + ajuste);
            salarDepois += novoSalario;
            printf("O novo salario sera >>> %0.2f\n\n", novoSalario);
        } else if (salario >= 6000 && salario < 10000.00) {
            ajuste = (salario * 0.15);
            novoSalario = (salario + ajuste);
            salarDepois += novoSalario;
            printf("O novo salario sera >>> %0.2f\n\n", novoSalario);
        } else if (salario >= 10000.00) {
            ajuste = (salario * 0.10);
            novoSalario = (salario + ajuste);
            salarDepois += novoSalario;
            printf("O novo salario sera >>> %0.2f\n\n", novoSalario);
        } 
        difSalar = (salarDepois - salarAntes);      
    }
    printf("A soma dos salarios atuais sera:\n>>>> %0.2f\nA soma dos salarios reajustados sera:\n>>>> %0.2f\nA diferenca entre as duas somas sera:\n>>>> %0.2f\n\n", salarAntes, salarDepois, difSalar);
}