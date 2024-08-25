#include <iostream>
#include "Lista/Lista.h"
using namespace std;

bool esVocal(char letra){
    tolower(letra);
    return letra == 'a'||letra=='e'||letra=='i'|letra=='o'||letra=='u';
}

int contarVocales(Lista<char>lista, char vocal){
    int n=0;

    for(int i=0;i<lista.getTamanio();i++){
        if(tolower(vocal)==tolower(lista.getDato(i))){
            ++n;
        }
    }
    return n;
}

int main(){
    Lista <char> lista;
    string frase;
    char vocal;

    cout<<"Escriba su frase o palabra: ";
    getline(cin,frase);

    for(int i=0;i<frase.length();i++){
        lista.insertarUltimo(frase[i]);
    }
    
    if (lista.esVacia()){
        cout<<"La frase es vacia";
        return 1;
    }
    
    do {
        cout<<"Ingrese la vocal a contar: ";
        cin>>vocal;
    } while(!esVocal(vocal));

    cout << "La vocal '" << vocal << "' aparece "<< contarVocales(lista,vocal) << " veces.";

    for (int i = 0; i < lista.getTamanio(); i++) {
        cout << lista.getDato(i);
    }
    
}