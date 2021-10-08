#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 

Aluno lista[30];
int pos = 0;
lista[0].mat=1;
lista[0].nome="fabio";

void incluirDesordenado(Aluno e){
	lista[pos]=e;
	pos++;
}

//retorna a posicao do elemento procurado
int procura(int mat){
	int i=0;
    bool achou = false;
    while (i<pos){
        if (lista[i].mat==mat){
            achou = true;
            return i;
        }
        i++;
    }
    if (!achou)
        return -1;	
}

//recebe a posicao e imprime o elemento na tela
void mostrar(int pos){
    cout<<lista[pos].mat<<"---"<<lista[pos].nome<<endl;	
}

//mostra TODOS os elementos da lista
void mostra(){
	int atual=0;
    while(atual<pos){
        cout<<lista[atual].mat<<"----"<<lista[atual].nome<<endl;
        atual+=1;
    }
}

}

//estrat�gia 1: colocar o ultimo elemento da lista na posi��o do elemento removido
void remover00(){
	
}

//estrat�gia 2: mover TODOS os elementos que est�o AP�S  o elemento que deve ser removido UMA POSI��O A FRENTE.
void remover01(){
}

main(){
	Aluno primeiro ={1, "fabio"};
	incluirDesordenado(primeiro);
	
    int r = procura(1);

    cout<<"r = "<<r<<endl;
	
	
	mostra();

    mostrar(1);
	
}
	
	
	
