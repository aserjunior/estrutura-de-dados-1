#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

main() {

    string nome1;
    string nome2;

    cout<<"digite o 1o valor:";
    cin>>nome1;

    cout<<"digite o 2o valor:";
    cin>>nome2;

    if (nome1 == nome2)
        cout<<"elas sao iguais";
    else 
        cout<<"elas sao diferentes";
}