#include <iostream>
using namespace std;

int frente = 0, n = 0;
int cola[10];

//int ubic(){
//    return (frente+n)%10;
//}

void datos(){
    int num = 0, cont = 0;
    for(int i = 0; i < 10; i++){
        num = cola[i];

        if(num != -115)
            cont++;
    }
    n = cont;
}

void push(int x){
    int ubicacion = frente;
    cola[ubicacion] = x;
    frente = (frente + 1)%10;
    datos();
    cout << "\n";
}

bool vacio(){
    int num = 0, cont = 0;
    for(int i = 0; i < 10; i++){
        num = cola[i];
        if(num != -115)
            cont++;
    }
    if(cont == 0)
        return true;
    else
        return false;
}

int pop(){
    if(vacio())
        return -115;
    else{
    int aux = cola[frente];
    cola[frente - 1] = -115;
    datos();
    cout << "\n";
    return aux;
    }
}

void ver(){
    for(int i = 0; i < 10; i++){
        cout << cola[i] << " ";
    }
    cout << "\n\n";
}

int main(){
    cout << "La cola circular contiene 10 casillas\n\n";

    for(int i = 0; i < 10; i++){
        cola[i] = -115; //Numero arbitraio para denotar una casilla vacia
    }

    bool continuar = true;
    do{
        int opc = 0;
        int y = 0;
        cout << "Que desea hacer?\n";
        cout << "\t1.Push\n\t2.Pop\n\t3.Empty?\n\t4.Front\n\t5.Ver cola\n\t6.Salir\n";
        cin >> opc;

        switch(opc){
            case 1: cout << "Introduzca el numero que desea agregar a la cola: ";
                    cin >> y;
                    push(y);
                    break;
            case 2: if(pop() == -115)
                        cout << "UNDERFLOW\n\n";
                        break;
            case 3: if(vacio())
                        cout << "La cola esta vacia\n\n";
                    else
                        cout << "La cola NO esta vacia\n\n";
                    break;
            case 4: if(frente == 0)
                        cout << "El frente es " << frente << " que contiene el numero " << cola[frente] << "\n" << endl;
                    else
                        cout << "El frente es " << frente-1 << " que contiene el numero " << cola[frente-1] << "\n" << endl; break;
            case 5: ver(); break;
            case 6: continuar = false; break;
            default : cout << "Opcion invalida\n\n"; break;
        }

    }while(continuar);

    return 0;
}
