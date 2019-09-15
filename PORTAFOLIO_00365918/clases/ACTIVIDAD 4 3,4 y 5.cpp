#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>

using namespace std;

float aux = 0, cap[4], CapM=0;
int conti, pobla;

struct America{
char nombre [100];
char capital[100];
float habitantes;
}pais1[2];

struct Europa{
char nombre [100];
char capital[100];
float habitantes;
}pais2[2];

struct Africa{
char nombre [100];
char capital[100];
float habitantes;
}pais3[2];

struct Asia{
char nombre [100];
char capital[100];
float habitantes;
}pais4[2];

struct Oceania{
char nombre [100];
char capital[100];
float habitantes;
}pais5[2];	

void menu();
void poblacion();
void capi();

int main(){
    
 
 
menu();
menu();
menu();
menu();
menu();
poblacion();    
capi();    

    getch();
    return 0;
}

void menu(){
 cout<<"1.America"<<endl;
 cout<<"2.Europa"<<endl;
 cout<<"3.Africa"<<endl;
 cout<<"4.Asia"<<endl;
 cout<<"5.Oceania"<<endl;
 cout<<"Digite el numero de un continente: \n (sin repetir uno anterior en el caso de que lo haya) "<<endl;
 cin>>conti;
 switch(conti){case 1: cout<<"continente: America "<<endl;
 fflush(stdin);
 for(int i = 0; i < 5; i++){
     cout<<"Digite el nombre del pais Nº"<<i+1<<endl;
     cin>>pais1[i].nombre;
     cout<<"Digite el nombre de la capital del pais Nº"<<i+1<<endl;
     cin>>pais1[i].capital;
     cout<<"Digite el numero de habitantes del pais Nº"<<i+1<<endl;
     cin>>pais1[i].habitantes;
 };break;
 
 case 2:  cout<<"continente: Europa "<<endl;
 fflush(stdin);
 for(int i = 0; i < 5; i++){
     cout<<"Digite el nombre del pais Nº"<<i+1<<endl;
     cin>>pais2[i].nombre;
     cout<<"Digite el nombre de la capital del pais Nº"<<i+1<<endl;
     cin>>pais2[i].capital;
     cout<<"Digite el numero de habitantes del pais Nº"<<i+1<<endl;
     cin>>pais2[i].habitantes;
 };break;

     case 3:  cout<<"continente: Asia "<<endl;
 fflush(stdin);
 for(int i = 0; i < 5; i++){
     cout<<"Digite el nombre del pais Nº"<<i+1<<endl;
     cin>>pais3[i].nombre;
     cout<<"Digite el nombre de la capital del pais Nº"<<i+1<<endl;
     cin>>pais3[i].capital;
     cout<<"Digite el numero de habitantes del pais Nº"<<i+1<<endl;
     cin>>pais3[i].habitantes;
 };break;
 
 case 4:  cout<<"continente: Africa "<<endl;
 fflush(stdin);
 for(int i = 0; i < 5; i++){
     cout<<"Digite el nombre del pais Nº"<<i+1<<endl;
     cin>>pais4[i].nombre;
     cout<<"Digite el nombre de la capital del pais Nº"<<i+1<<endl;
     cin>>pais4[i].capital;
     cout<<"Digite el numero de habitantes del pais Nº"<<i+1<<endl;
     cin>>pais4[i].habitantes;
 };break;
 
 case 5: cout<<"continente: Oceania "<<endl;
 fflush(stdin);
 for(int i = 0; i < 5; i++){
     cout<<"Digite el nombre del pais Nº"<<i+1<<endl;
     cin>>pais5[i].nombre;
     cout<<"Digite el nombre de la capital del pais Nº"<<i+1<<endl;
     cin>>pais5[i].capital;
     cout<<"Digite el numero de habitantes del pais Nº"<<i+1<<endl;
     cin>>pais5[i].habitantes;
 };break;
 }
    
    
}


void poblacion(){
    
 cout<<"1.America"<<endl;
 cout<<"2.Europa"<<endl;
 cout<<"3.Africa"<<endl;
 cout<<"4.Asia"<<endl;
 cout<<"5.Oceania"<<endl;
    cout<<"Elija un continente para saber su oblacion total: "<<endl;
    cin>>pobla;
    switch(pobla){
        case 1:for(int k=0;k<4;k++){aux=pais1[k].habitantes+aux;}cout<<"la poblacion Total de este continente es: "<<aux;break; 
        case 2:for(int k=0;k<4;k++){aux=pais2[k].habitantes+aux;}cout<<"la poblacion Total de este continente es: "<<aux;break;  
        case 3:for(int k=0;k<4;k++){aux=pais3[k].habitantes+aux;}cout<<"la poblacion Total de este continente es: "<<aux;break;  
        case 4:for(int k=0;k<4;k++){aux=pais4[k].habitantes+aux;}cout<<"la poblacion Total de este continente es: "<<aux;break;  
        case 5:for(int k=0;k<4;k++){aux=pais5[k].habitantes+aux;}cout<<"la poblacion Total de este continente es: "<<aux;break;  
    }

}

void capi(){for(int i= 0; i<4; i++){
    if(pais1[i].habitantes > cap[i]){cap[i]=pais1[i].habitantes;}
    if(pais2[i].habitantes > cap[i]){cap[i]=pais2[i].habitantes;}
    if(pais3[i].habitantes > cap[i]){cap[i]=pais3[i].habitantes;}
    if(pais4[i].habitantes > cap[i]){cap[i]=pais4[i].habitantes;}
    if(pais5[i].habitantes > cap[i]){cap[i]=pais5[i].habitantes;}
    }
    
    for(int k = 0; k<4; k++){
        if(cap[k]>CapM){CapM=cap[k];} 
        
    };
    
    cout<<"La capital con mas poblacion posee "<<CapM<<" Habitantes."<<endl;
    
    
    
    
}


