#include <iostream>


using namespace std;
struct nodo{
  float elemento;
  struct nodo *siguiente;
};
typedef struct nodo *Pila;

void inialize(Pila *s){
   *s=NULL;
}
bool empty(Pila *s){
  return *s==NULL;
}
void push(Pila *s, float num){
    struct nodo *unNodo;
    unNodo = (struct nodo *)malloc(sizeof(struct nodo));
    unNodo->elemento = num;
    unNodo->siguiente = *s;
    
    *s = unNodo;
}

void Agregar(Pila *s){
    float n;
    char op;
    do{
       cout<<"Introduce un elemento a tu pila: ";cin>>n;    
       push(s,n);
       cout<<"Desearia agregar algun otro elemento?(s/n)\n"; cin>>op;
    }while(op!='n');
    
}

float top(Pila *s){
    if(!empty(s)){
        float tope = (*s)->elemento;
        return tope;
    }
    else{
        cout << "Esta pila esta vacia\n" << endl;
        return -1;
    }
}

float pop(Pila *s){
    if(!empty(s)){
        struct nodo *unNodo = *s;
        float num = (*s)->elemento;
        *s = (*s)->siguiente;
        delete(unNodo);
        return num;
    }
    else{
        cout << "Tu pila esta vacia\n";
        return -1;
    }
}

int Fondo(Pila *s){
	int fondo=0;
  while(!empty(s)){
  	   fondo=pop(s);
  	   //cout<<"\nSi entra\n";
  }	
  return fondo;
}


int main(){
  Pila unaPila;
  inialize(&unaPila);

  Agregar(&unaPila);
 
/*
if(empty(&unaPila))
   cout<<"\nAqui no esta vacia";
*/

cout<<"El valor que se encuentra al fondo de esta pila es: "<<Fondo(&unaPila);

/*
if(empty(&unaPila))
   cout<<"\nAqui ya esta vacia";
*/

 return 0;
}
