#include <iostream>
using namespace std;

struct Tpila{

    float elements[100];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = -1;
}

bool empty(Pila *s){
    return s->top < 0;
}

void push(Pila *s, float e){
    if(s->top < 99){
        (s->top)++;
        s->elements[s->top] = e;
    }
}

float pop(Pila *s){
	float e=0;
    if(s->top >= 0){
        e = s->elements[s->top];
        (s->top)--;
        return e;
    }
    return e;
}
 /*float Ultimo(Pila *s){
 	float esto=0;
 	    while(!empty(s))
		esto=pop(s);
		return esto; 	
 }*/
 float Ultimo2(Pila s){
 	float esto=0;
 	    while(!empty(&s)){
		esto=pop(&s);
		}
		
	return esto; 	
 }
 
int main (){
	
	Pila unaPila;
	    initialize(&unaPila);
	    
	        push(&unaPila, 8);
    		push(&unaPila, 3.4);
    		push(&unaPila, 7.8);
    		
    		if(empty(&unaPila)){
    		cout<<"Esta vacia"<<endl;
			}
    		else{
			cout<<"El ultimo es: "<<Ultimo2(unaPila)<<endl;
			}
			
			if(!empty(&unaPila))
				cout<<"La pila no esta vacia"<<endl;
			else 
			cout<<"La pila esta vacia";	
    		
	return 0;
}
