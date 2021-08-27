#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

main() {
    
    int i;
    int cont = 0;
    char nome1[20];
    char nome2[20];

    cout<<"Insira o 1o nome:";
    cin>>nome1;

    cout<<"Insira o 2o nome:";
    cin>>nome2;
    if (strlen(nome1) != strlen(nome2)){
        cout<<"sao diferentes";
    } else {
        for (i = 0; i < strlen(nome1); i++) {
            if (nome1[i] != nome2[i]) {
                cout<<"sao diferentes.";
                break;
            } else {
                cont += 1;
            }
        }
        if (cont == i) {
            cout<<"sao iguais.";
        }
    }  
} 


 