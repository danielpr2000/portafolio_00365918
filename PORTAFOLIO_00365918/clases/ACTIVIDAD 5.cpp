#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>

int a,b,c;

int mult(int a, int  b){
    if(b==1){
        return a;
        }else{
            return a+mult(a,b-1); 
            }
    }

using namespace std;


int main(){
    
    cout<<"Multiplicacion de numeros naturales "<<endl;
    cout<<"A * B = C"<<endl;
    cout<<"Digite en valor entero para la varable 'A': "<<endl;
    cin>>a;
    cout<<"Digite en valor entero para la varable 'B': "<<endl;
    cin>>b;

    cout<<"El resultado es: "<<mult(a, b);
    
    
    getch();
    return 0;
    }
