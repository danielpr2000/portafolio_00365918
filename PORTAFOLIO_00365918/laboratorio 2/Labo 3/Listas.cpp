#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    struct Nodo *sig;
};
//typedef struct TNodo Nodo;
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

int sumapar(){
    int cont = 0;
    Nodo *p = pInicio;
    while (p != NULL) {
            if(p->dato%2 == 0)
                cont += p->dato;
            p = p->sig;
        }
    return cont;
}

int sumaimpar(){
    int cont = 0;
    Nodo *p = pInicio;
    while (p != NULL) {
            if(p->dato%2 != 0)
                cont += p->dato;
            p = p->sig;
        }
    return cont;
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Numero\n\t2) Ver numeros"
            << "\n\t3) Salir\n\tOpcion elegida: ";
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
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    cout << "Suma de los numeros pares: " << sumapar() << endl;
    cout << "Suma de los numeros impares: " << sumaimpar() << endl;

    return 0;
}
