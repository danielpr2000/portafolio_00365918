#include <iostream>
using namespace std;

int arreglo[8] = {1, 3, 4, 5, 17, 18, 31, 33};

int buscar(int x, int bajo, int tope){
    if(bajo > tope)
        return -1;

    int mid = (bajo + tope) / 2;

    if(x == arreglo[mid])
        return mid;
    else if (x > arreglo[mid])
        return buscar(x, mid + 1, tope);
    else
        return buscar(x, bajo, mid - 1);
}

int main(){
    int n = 0;
    int low = 0;
    int top = 7;

    cout << "Ingrese un numero: ";
    cin >> n;

    int i = buscar(n, low, top);

    if(i == -1)
        cout << "El numero no existe en el arreglo :(" << endl;
    else
        cout << "El numero esta en la posicion "<< i << endl;

    return 0;
}
