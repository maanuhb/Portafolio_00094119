// EVARIST ALEXANDER ARDON AREVALO 00361518
//MANUEL DE JESUS HERNANDEZ BENITEZ 00094119

#include <iostream>
using namespace std;

struct Epila{
	float elemen[3];
	int top;
};
typedef struct Epila pila;

void initialize(pila *s){
	s->top=-1;
}

bool empty(pila *s){
	return -1;
}
void push(pila *s, float e){
    if(s->top <2){
        (s->top)++;
        s->elemen[s->top] = e;
    }
}
void pop(pila *s, float *e){
	if(s->top>=0){
		*e=s->elemen[s->top];
		(s->top) -- ;
	}
}

int main()
{
	pila unaPila;
	initialize(&unaPila);
	
	float x1, x2, x3; 
		x1=5.3;
		x2=2.7;
		x3=7.2;
		
		push(&unaPila, x1);
		push(&unaPila, x2);
		push(&unaPila, x3);
	
		float y1=0;
		float y2=0;
		float y3=0;
			
		pop(&unaPila, &y1);
		pop(&unaPila, &y2);
		pop(&unaPila, &y3);
		
	//	cout << "y: " << y1 << endl;
	//	cout << "y: " << y2 << endl;
		cout << "y: " << y3<< endl;
		
		if(empty(&unaPila))
		cout << "Esta vacia" << endl;

}
