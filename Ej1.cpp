#include <iostream>
#include "Lista/Lista.h"
using namespace std;

void printLista (Lista <int> &lista, int pos){
    int tamanio = lista.getTamanio();

    if (pos>= tamanio || pos<0){
        cout << "La posicion "<<pos<<" esta fuera de los limites."<<endl;
        return;
    }

    for (int i=pos;i<tamanio;i++){
        cout<<lista.getDato(i)<<"->";
    }
    cout<<"NULL"<<endl;
}

int main() {

    Lista <int> lista;
    int n,d,pos;
    
    cout<<"Ingrese el tamanio de la lista: ";
    cin>>n;

    for (int i=0;i<n;i++){
        cout<<"Ingrese un numero: ";
        cin>> d;
        lista.insertarUltimo(d);
    }

    cout<<"Ingrese la posicion inicial a imprimir: ";
    cin>>pos;

    printLista(lista,pos);
    return 0;
}
