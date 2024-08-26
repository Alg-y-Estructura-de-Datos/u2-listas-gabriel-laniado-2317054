#include <iostream>
#include "Lista/CircList.h"
#include <string>
#include <thread>
#include <chrono>
using namespace std;

int main(){
    CircList<string>lista;
    string frases;
    int n;

    for (int i=0;i<5;i++){
        cout<<"Ingrese una palabra: ";
        getline(cin,frases);
        lista.insertarUltimo(frases);
    }

    cout<<"Ingrese 1 si quiere eliminar una palabra: ";
    cin>>n;

    if (n==1){
        cout<<"Ingrese la palabra a eliminar: ";
        cin>>frases;
        lista.eliminarPorValor(frases);
    }

    bool t = true;
    while (t){
        lista.imprimir();
        this_thread::sleep_for(chrono::seconds(3));
    }
}