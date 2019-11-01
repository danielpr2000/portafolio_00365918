#include <iostream>
#include <cmath>
using namespace std;


int factorial(int z){
    if(z == 1)
        return z;
    else{
        z = z * factorial(z - 1);
        return z;
    }
}

float sumatoria(int a ,int b){
    float r = 0;
    if(b == 0)
        return 1;
    else{
        r = pow(a, b)/factorial(b) + sumatoria(a ,b - 1);
        return r;
    }
}

int main(){
    int x = 0, k = 0;

    cout << "Introduzca la variable independiente: ";
    cin >> x;

    cout << "Introduzca el numero de aproximaciones: ";
    cin >> k;
    cout << "\n";

    float resultado = sumatoria(x, k);
    cout << "Resultado: " << resultado << endl;


    return 0;
}
