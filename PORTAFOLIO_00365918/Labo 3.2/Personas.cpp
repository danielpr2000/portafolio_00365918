#include <iostream>
#include <string>
using namespace std;

struct InfoPer{
    int carnet;
    string nombre;
    string apellido;
    int edad;
    string telefono;
    string correo;
};
typedef struct InfoPer Persona;

Persona solicitarInfo(int carnet){
    Persona p;
    if(carnet == 0){
        cout << "Carnet: "; cin >> p.carnet;
    }else{
        p.carnet = carnet;
    }
    cin.ignore();//Limpiando el buffer
    cout << "Nombre: "; getline(cin, p.nombre);
    cout << "Apellido: "; getline(cin, p.apellido);
    cout << "Edad: "; cin >> p.edad;
    cin.ignore();//Limpiando el buffer
    cout << "Telefono: "; getline(cin, p.telefono);
    cout << "Correo: "; getline(cin, p.correo);
    return p;
}

void mostrarInfo(Persona p){
    cout << "Carnet: " << p.carnet << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Apellido: " << p.apellido << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Telefono: " << p.telefono << endl;
    cout << "Correo: " << p.correo << endl;
    cout << endl;
}

struct TNodo{
    Persona dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarFinal(Persona p) {
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

void agregarInfo(){
    Persona p = solicitarInfo(0);
    insertarFinal(p);
}

void mostrarLista() {
    Nodo *s = pInicio;
    while (s != NULL) {
        mostrarInfo(s->dato);
        s = s->sig;
    }
}

void editarInfo(){
    int unCodigo = 0;
    cout << "Codigo de persona a editar: ";
    cin >> unCodigo;

    Nodo *s = pInicio;

    while(s != NULL && (s->dato).carnet != unCodigo)
        s = s->sig;

    (s->dato) = solicitarInfo((s->dato).carnet);
}

void eliminarInfo(){
    int unCodigo = 0;
    cout << "Codigo de persona a eliminar: ";
    cin >> unCodigo;

    Nodo *p = pInicio, *q = NULL;

    while(p != NULL && (p->dato).carnet != unCodigo){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "Informacion a borrar NO existe" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Informacion borrada!" << endl;
}

bool buscarInfo() {
    int unCodigo = 0;
    cout << "Carnet a buscar: ";
    cin >> unCodigo;

    Nodo *s = pInicio;

    while(s != NULL && (s->dato).carnet != unCodigo)
        s = s->sig;
    return (s != NULL);
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu:"
            << "\n\t 1) Agregar Persona"
            << "\n\t 2) Ver Personas"
            << "\n\t 3) Eliminar Persona"
            << "\n\t 4) Buscar Persona"
            << "\n\t 5) Actualizar Persona"
            << "\n\t 6) Salir"
            << "\n\t Opcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarInfo();
            break;

            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;

            case 3: cout << "Eliminando..." << endl;
                eliminarInfo();
            break;

            case 4: cout << "Buscando..." << endl;
                if(buscarInfo())
                    cout << "La persona SI se encuentra" << endl;
                else
                    cout << "La persona NO se encuentra" << endl;
            break;

            case 5: cout << "Editando..." << endl;
                editarInfo();
            break;

            case 6:
                continuar = false;
            break;

            default:
                cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
