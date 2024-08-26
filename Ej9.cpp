#include <iostream>
#include "Lista/ListaDoble.h"
#include <string>
using namespace std;

void menu(){
    cout<<"1. Agregar URL"<<endl;
    cout<<"2. Mostrar historico"<<endl;
    cout<<"3. Retroceder"<<endl;
    cout<<"4. Avanzar"<<endl;
    cout<<"5. Salir"<<endl;
}

void mostrarPaginaActual (ListaDoble<string> url, int indice){
    cout<<url.getDato(indice);
}

void agregarUrl(ListaDoble<string> &url){
    string urlNueva;
    cout<<"Ingrese la URL: ";
    cin>>urlNueva;
    url.insertarUltimo(urlNueva);
}

void mostrarHistorico(ListaDoble<string> url){
    url.imprimir();
}

void retroceder(ListaDoble<string> url, int &indice){
    indice--;
    cout<<url.getDato(indice);
}

void avanzar(ListaDoble<string> url, int &indice){
    indice++;
    cout<<url.getDato(indice);
}


int main(){
    ListaDoble<string> url;
    int opcion;
    int indice = url.getTamanio();

    do {
        menu();
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1:
                agregarUrl(url);
                indice=url.getTamanio();
                break;
            case 2:
                mostrarHistorico(url);
                break;
            case 3:
                retroceder(url, indice);
                break;
            case 4:
                avanzar(url, indice);
                break;
            case 5:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout<<"Opcion no valida"<<endl;
        }

    } while (opcion!=5);


}