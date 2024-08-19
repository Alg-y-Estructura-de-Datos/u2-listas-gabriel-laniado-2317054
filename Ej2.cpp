#include <iostream>
#include "Lista/Lista.h"
using namespace std;

void borrarN(Lista <int> &enteros, int n){
    int tamanio = enteros.getTamanio();

    for (int i=0;i<tamanio;i++){
        if (enteros.getDato(i)==n){
            enteros.remover(i);
            tamanio--;
            i--;
        }

    }
}

int main() {
    Lista <int> enteros;
    int n, tam, d;

    cout<<"Ingrese el tamanio de la lista: ";
    cin>>tam;

    for (int i=0;i<tam;i++){
        cout<<"Ingrese un numero: ";
        cin>> d;
        enteros.insertarUltimo(d);
    }
    enteros.print();

    cout<<"Ingrese el numero a borrar: ";
    cin>>n;
    
    borrarN(enteros,n);
    enteros.print();

    return 0;
}
