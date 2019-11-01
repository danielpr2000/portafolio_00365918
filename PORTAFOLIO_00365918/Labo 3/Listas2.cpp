#include <iostream>
#include <stdlib.h>
using namespace std;

struct TNodo{
    int dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(int num) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->sig = pInicio;

    pInicio = nuevo;
}

void insertarFinal(int num) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->sig = NULL;

    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void agregarNumero(){
    int num = 0;
    cout << "Numero: ";
    cin >> num;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(num);
                continuar = false;
            break;
            case 2: insertarFinal(num);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        cout << (s->dato) << endl;
        s = s->sig;
    }
}

void eliminar(int num){
    Nodo *p = pInicio;
    Nodo *q = NULL;
    while (p != NULL){
        q = p;
        p = p->sig;
        if(q->dato == num)
            delete(p);
        }


}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;

    bool continuar = true;
    do{
        int opcion = 0;
        int numero = 0;
        cout << "Menu: \n\t1) Agregar Numero\n\t2) Ver numeros"
            << "\n\t3) Salir\n\t4) eliminar\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarNumero();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            case 4: cout << "Eliminando..." << endl;
                cout << "Numero a elegir: "; cin >> numero;
                eliminar(numero);
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
