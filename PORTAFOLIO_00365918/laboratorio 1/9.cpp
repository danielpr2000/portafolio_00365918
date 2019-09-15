#include<iostream>
using namespace std;

char recursion(int a[99]){
	
	 la=sizeof(a);
    lb=sizeof(int);
    f=la/lb;
	
	int ls=0
	int li=f
   	int dato;
   	int mitad;
   	bool se;
 		
	mitad=(li+ls)/2;
   		
   		if (a[mitad]==dato){
   			
   			se= true;
   			
   			break;
   		}
   		else if(numeros[mitad]>dato){
   			
   			ls=mitad
   			mitad=(li+ls)/2
   			}
   			
  		else if(numeros[mitad]<dato){
   			
   			li=mitad
   			mitad=(li+ls)/2
  
   	}
    
}    
    

int main(){
   
    int a[]={1,3,4,5,17,18,31,33};
    
   
    
	
    
    
    return 0;
}
