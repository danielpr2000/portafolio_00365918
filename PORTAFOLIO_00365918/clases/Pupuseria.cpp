#include <iostream>
#include <string>
using namespace std;

struct Tpedido{
    int revueltas;
    int frijolConQueso;
    int queso;
    bool arroz;
};
typedef struct Tpedido pedido;

pedido solicitarPedido(){
    pedido p;
    char opcion;
    bool continuar = true;
    cout << "Revueltas: "; cin >> p.revueltas;
    cout << "Frijol con queso : "; cin >> p.frijolConQueso;
    cout << "Queso: "; cin >> p.queso;
    cout << "Arroz?(y/n) "; cin >> opcion;
    do{
        switch(opcion){
           case 'y': p.arroz = true; continuar = false; break;
           case 'n': p.arroz = false; continuar = false; break;
           default: cout << "Opcion invalida\n";
        }
    }while(continuar);
    return p;
}

void mostrarPedido(pedido p){
    cout << "Revueltas: " << p.revueltas << endl;
    cout << "Frijol con queso :" << p.frijolConQueso << endl;
    cout << "Queso: " << p.queso << endl;
    switch(p.arroz){
        case true: cout << "Arroz" << endl; break;
        case false: cout << "Maiz" << endl; break;
    }
    cout << endl;
}

struct TNodo{
    pedido dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(pedido p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;

    pInicio = nuevo;
}

void insertarFinal(pedido p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
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

void agregarPedido(){
    pedido p = solicitarPedido();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);
                continuar = false;
            break;
            case 2: insertarFinal(p);
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
        mostrarPedido(s->dato);
        s = s->sig;
    }
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Pedido\n\t2) Ver pedidos"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarPedido();
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

    return 0;
}
