#include <stdio.h>

main() {

    int voto;
    int total = 0;
    int serra = 0;
    int dilma = 0;
    int ciro = 0;
    int inde = 0;
    int outro = 0;
    int nulo = 0;
    int s = 0;
    int d = 0;
    int c = 0;
    int i = 0;
    int o = 0;
    int n = 0;

    

    while (voto != -1) {
        printf (">>>>>Escolha o seu candidato<<<<<");
        printf ("\nSerra 45\nDilma 13\nCiro Gomes 23\nIndeciso 99\nOutros 98\nNulo/Branco 0\nEncerrar -1\n");
        scanf ("%i", &voto);

        if (voto == 45) {
            serra += 1;
            total += 1;
        } else if (voto == 13) {
            dilma += 1;
            total += 1;
        } else if (voto == 23) {
            ciro += 1;
            total += 1;
        } else if  (voto == 99) {
            inde += 1;
            total += 1;
        } else if (voto == 98) {
            outro += 1;
            total += 1;
        } else if (voto == 0) {
            nulo += 1;
            total += 1;
        }
    }

    s = ((serra * 100) / total);
    d = ((dilma * 100) / total);
    c = ((ciro * 100) / total);
    i = ((inde * 100) / total);
    o = ((outro * 100) / total);
    n = ((nulo * 100) / total);

    printf("Serra:\n>>>>> %i\nDilma:\n>>>>> %i\nCiro:\n>>>>> %i\nIndecisos:\n>>>>> %i\nOutros:\n>>>>> %i\nNulos:\n>>>>> %i\nTotal:\n>>>>> %i\n", s, d, c, i, o, n, total);
    
    
    int novoTotal = 0;
    novoTotal =(total - (outro + nulo + inde));
    if (serra > (novoTotal / 2)) {
        printf("Nao havera segundo turno");
    } else if (dilma  > (novoTotal / 2)) {
        printf("Nao havera segundo turno");
    } else if (ciro > (novoTotal /2)) {
        printf("Nao havera segundo turno");
    } else {
        printf("Havera segundo turno.");
    }



}