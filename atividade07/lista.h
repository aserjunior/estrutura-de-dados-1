#include <stdio.h>
#include <iostream>
#define fmt "%d"
using namespace std;
typedef int Item;   
typedef struct no {
    Item item;
    struct no *prox;
} *Lista;



Lista inclue(Item x, Lista p) {
    Lista n = (Lista)malloc(sizeof(Lista));
    n->item = x;
    n->prox = p;
    return n;
}

void exibe(Lista L){
    while (L!=NULL){
        cout<<L->item<<endl;
        L=L->prox;
    }
}

void anexa(Lista *A, Lista B) {
    if (B==NULL) return;
    while (*A!=NULL)
        A = &(*A)->prox;
    *A=B;
}

void destroi(Lista *L){
    while (*L !=NULL){
        Lista n = *L;
        *L = n->prox;
        free(n);
        exibe(*L);
    }
}

int ocorrencias(Item x,Lista L){
    if (L==NULL)
        return 0;
    if (x == L->item)
        cout<<1<<endl;
    return ocorrencias(x, L->prox);

}

void exibe_inv(Lista L){
    if(L == NULL) return;
    exibe_inv(L->prox);
    printf(fmt,L->item);
}

void ultima(Lista L){
    if (L!=NULL)
        cout<<L->item<<endl;
}
