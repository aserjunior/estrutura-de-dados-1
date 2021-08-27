#include <stdio.h>
#include <iostream>
#include <string.h>


using namespace std;

main() {
    char nome1[20];
    char nome2[20];

    cout<<"digite o 1o valor:";
    cin>>nome1;

    cout<<"digite o 2o valor:";
    cin>>nome2; 

    if (strcmp(nome1,nome2)==0)
        cout<<"elas sao iguais";
    else
        cout<<"elas sao diferentes";




    
    
}

