
//FERNANDO ROSA 00022319
#include<iostream>
using namespace std;

float mediana(int a[999],int n){
	
	if((n/2)!=0){
	
		
	
		int posicion=(n+1)/2;
			
			
			float valor=a[posicion];
			cout<<valor;
		
	}
	else{
		
		int posicion1=(n/2);
		int posicion2=posicion1+1;
		
		float valor=(a[posicion1]+a[posicion2])/2;
		
		cout<<valor;
		
	}
	
	
	return 0;
}


int main(){
	
	
	int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	
	int n;
	int largo;
	int tamanotipo;
	
	largo=sizeof(a);
	tamanotipo=sizeof(int);
	
	int tamanodelarreglo=largo/tamanotipo;

	n=tamanodelarreglo;
	

	
	
	mediana(a,n);
	
	
	return 0;
}

