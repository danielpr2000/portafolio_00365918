#include <iostream>
#include <conio.h>
using namespace std;

int elevar(int x,int y){
	
	int r;
	
	if(y==1){
		
		r=x;
		
	}
	else{
	
	r=x*elevar(x,y-1);
	
	
	}
	return r;
}



int main(){
	
	int x,y;
	
	cout<<"digite la base";
	cin>>x;
	cout<<"diguite la potencia";
	cin>>y;
	
	cout<<elevar(x,y);
	
	
	getch();
	return 0;
	
}
