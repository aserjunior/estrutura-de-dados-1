#include <stdio.h>
#include "lista.h"

int main(){
    Lista L = inclue(1, inclue(2, inclue(1, inclue(4, inclue(1, NULL)))));
    ocorrencias(4,L);

    Lista J = inclue(3, inclue(2, inclue(1,NULL)));
    ultima(J);
    
    Lista K = inclue(7, inclue(9, inclue(2, NULL)));
    exibe_inv(K);
}