#include <iostream>
#include "Lista/Lista.h"
using namespace std;

void swapListas(Lista <int> &lista1, Lista <int> &lista2){
   Lista<int> aux1, aux2;

  
    for (int i = 0; i < lista1.getTamanio(); i++) {
        aux1.insertarUltimo(lista1.getDato(i));
    }

    for (int i = 0; i < lista2.getTamanio(); i++) {
        aux2.insertarUltimo(lista2.getDato(i));
    }

    lista1.vaciar();
    lista2.vaciar();

    for (int i = 0; i < aux2.getTamanio(); i++) {
        lista1.insertarUltimo(aux2.getDato(i));
    }

    for (int i = 0; i < aux1.getTamanio(); i++) {
        lista2.insertarUltimo(aux1.getDato(i));
    }
}

int main() {

    Lista <int> lista1, lista2;
    int n, tam1, tam2, d;

    cout<<"Ingrese el tamanio de la lista 1: ";
    cin>>tam1;

    for (int i=0;i<tam1;i++){
        cout<<"Ingrese un numero: ";
        cin>> d;
        lista1.insertarUltimo(d);
    }

    cout<<"Ingrese el tamanio de la lista 2: ";
    cin>>tam2;

    for (int i=0;i<tam2;i++){
        cout<<"Ingrese un numero: ";
        cin>> d;
        lista2.insertarUltimo(d);
    }

    lista1.print();
    lista2.print();

    swapListas(lista1,lista2);

    lista1.print();
    lista2.print();
    return 0;
}
