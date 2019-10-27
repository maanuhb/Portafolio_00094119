#include<iostream>
#include<windows.h>//Esta libreria solo sirve en devc++
using namespace std;

int op=0; 

struct TNumeros{
	int numeros;
};
typedef struct  TNumeros Num;

struct TNodo{
  Num dato;
  struct TNodo *sig;
};
typedef struct TNodo nodo;
nodo *pInicio,*Aux;

Num SolicitarNum(){
 	Num p;
 	  cout<<"Ingrese un numero: "; cin>>p.numeros;
	return p;
}

void InsertarInicio(Num lista){
	 nodo *nuevo=new nodo;
	 nuevo->dato= lista;
	 nuevo->sig=pInicio;
	 
	 pInicio=nuevo;
	 
}
void InsertarFinal(Num lista){
	 nodo *nuevo=new nodo;
	 nuevo->dato=lista;
	 nuevo->sig=NULL;
	 
	 if(pInicio==NULL)
	   pInicio=nuevo;
	 else {
	 	nodo *p=pInicio;
	 	nodo *q=NULL;
	 	while(p!=NULL){
	 		q=p;
	 		p=p->sig;
		 }
		 q->sig=nuevo;
	 }   
}
void AgregarNum(){
	Num p=SolicitarNum();
	bool continuar=true;
	do{
		int op=0;
		cout<<"\n1.Insertar al inicio\n2.Insertar al final\n"; cin>>op;
		switch(op){
			case 1: InsertarInicio(p); continuar=false;
			break;
			case 2: InsertarFinal(p); continuar=false;
			break;
			default: cout<<"Opcion erronea\n";
			break;	
		}
	}while(continuar);
}

void mostrarNum(Num lista){
    cout<<"["<<lista.numeros<<"]"<<endl;
}

void mostrarLista(){
	if(pInicio==NULL)
	  cout<<"Tu lista esta en espera...\n";
	
	if(op!=2){
	nodo *s = pInicio;
    while (s != NULL) {
        mostrarNum(s->dato);
        s = s->sig;
    }
   }else{
   	nodo *s = Aux;
    while (s != NULL) {
      mostrarNum(s->dato);
      s = s->sig;
    }
    op=0;

   }
    system("pause");
    system("cls");   
}
void EliminarNum(){
	    int unNum = 0;
    cout << "Numero que desea eliminar: ";
    cin >> unNum;

nodo *borrar = pInicio, *anterior = NULL;    
    while(borrar != NULL && (borrar->dato).numeros != unNum){
        anterior = borrar;
        borrar = borrar->sig;
    }
    if(borrar == NULL){
        cout << "Numero que desea eliminar NO existe" << endl;
        system("pause");
        return;
    }
    if(anterior == NULL)
        pInicio = pInicio->sig;
    else
        anterior->sig = borrar->sig;
    delete(borrar);
    cout << "¡Numero borrado sastifactoriamente!" << endl;
    system("pause");
}

Num Metiendo(int n){
	Num p;
 	p.numeros=n;
	return p;
}

void InsertarInver(Num lista){
	 nodo *nuevo=new nodo;
	 nuevo->dato= lista;
	 nuevo->sig=Aux;	 
	 Aux=nuevo;  
}

void Cambiando(int sacado){
    Num p=Metiendo(sacado);
	InsertarInver(p);
}

void Invertir(){
    nodo *s=pInicio;
	int numero=0;
	while(s!=NULL){
	 numero=s->dato.numeros;
	 Cambiando(numero);
	 s=s->sig;
    } 
	op=2; 
    mostrarLista(); 
}

int main(){
	pInicio=NULL;
	bool continuar=true;
	int op=0,sacado;
	do{
		system("cls"); 
		cout<<"Menu:\n Indica lo que deseas hacer\n1.Agregar un nuevo elemento\n2.Eliminar un elemento\n3.Mostrar la lista \n4.Invertir la lista\n5.Salir\n"; cin>>op;
		cout<<endl;
		switch(op){
          case 1: AgregarNum();
		  break;
		  case 2: EliminarNum();
		  break;
		  case 3: mostrarLista();
		  break;
		  case 4: Aux=NULL; 
		          Invertir();
		  break;
		  case 5: continuar=false;
		  break;
		  default: cout<<"Opcion erronea!\n";
		           system("pause"); 
		  break;			
		}
	}while(continuar);
	
  return 0;	
}
