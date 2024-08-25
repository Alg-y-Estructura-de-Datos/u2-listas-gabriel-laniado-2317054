#include <iostream>
#include "Lista/Lista.h"
using namespace std;

/*
Crear un programa que pida al usuario dar elementos a una Lista de números
 enteros. Luego cree una función que reciba una lista int L1 y devuelva
 otra lista int L2 conteniendo los elementos repetidos de L1. Por ejemplo,
 si L1 almacena los valores 5->2->7-> 2->5->5->1, debe construirse una lista L2
 con los valores 5->2. Si en L1 no hay elementos repetidos se debe indicar al
 usuario que no hay elementos repetidos en L1, de lo contrario imprimir ambas listas.
 */
void repetidos(Lista<int> &list, Lista<int> &list1) {
    for (int i = 0; i < list.getTamanio(); i++) {
        bool yaEsta = false;
        for (int k = 0; k < list1.getTamanio(); k++) {
            if (list1.getDato(k) == list.getDato(i)) {
                yaEsta = true;
                break;
            }
        }

        if (!yaEsta) {
            for (int j = i + 1; j < list.getTamanio(); j++) {
                if (list.getDato(i) == list.getDato(j)) {
                    list1.insertarUltimo(list.getDato(i));
                    break;
                }
            }
        }
    }
}

int main() {
    Lista<int> list, list1;
    bool boole = true;
    int num;

    while (boole) {
        cout << "Ingrese el elemento nro " << list.getTamanio() + 1 << endl;
        cin >> num;
        list.insertarUltimo(num);

        cout << "Desea ingresar otro elemento de la lista? Si: ingrese 1 ; No: ingrese 0 \n";
        cin >> boole;
    }

    repetidos(list, list1);

    if (list1.getTamanio() == 0) {
        cout << "No hay elementos repetidos" << endl;
    } else {
        cout << "Lista resultante: ";
        for (int i = 0; i < list1.getTamanio(); i++) {
            cout << list1.getDato(i) << " ";
        }
        cout << endl;

        cout << "Lista original: ";
        for (int j = 0; j < list.getTamanio(); j++) {
            cout << list.getDato(j) << " ";
        }
        cout << endl;
    }

    return 0;
}