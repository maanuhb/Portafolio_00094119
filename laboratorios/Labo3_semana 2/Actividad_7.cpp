#include<iostream>
#include<windows.h>//Esta libreria solo sirve en devc++
using namespace std;

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

Num SoliNum(){
 	Num p;
 	  cout<<"Ingrese un numero: "; cin>>p.numeros;
	return p;
}

void InsertarIni(Num lista){
	 nodo *nuevo=new nodo;
	 nuevo->dato= lista;
	 nuevo->sig=pInicio;
	 
	 pInicio=nuevo;
	 
}
void InsertarFin(Num lista){
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
	Num p=SoliNum();
	bool continuar=true;
	do{
		int op=0;
		cout<<"\n1.Insertar al inicio\n2.Insertar al final\n"; cin>>op;
		switch(op){
			case 1: InsertarIni(p); continuar=false;
			break;
			case 2: InsertarFin(p); continuar=false;
			break;
			default: cout<<"Opcion equivocada\n";
			break;	
		}
	}while(continuar);
}

void mostrarNum(Num lista){
    cout<<"["<<lista.numeros<<"]"<<endl;
}

void mostrarLista(){
	if(pInicio==NULL){
	  cout<<"Tu lista esta en espera...\n";
	  return;
    }
	nodo *s = pInicio;
    while (s != NULL) {
        mostrarNum(s->dato);
        s = s->sig;
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
        cout << "Numero que deseaba borrar NO existe" << endl;
        system("pause");
        return;
    }
    if(anterior == NULL)
        pInicio = pInicio->sig;
    else
        anterior->sig = borrar->sig;
    delete(borrar);
    cout << "Numero borrado sastifactoriamente!" << endl;
    system("pause");
}

int Contador(int num){
	nodo *s;
	int cont=0;
	 for(s=pInicio;s!=NULL;s=s->sig){
	   if((s->dato).numeros==num)
	     cont++;
     }
	return cont;   
}

void Remover(int num, int cantidad){
 int n=0;
 while(n!=cantidad){
	nodo *borrar = pInicio, *anterior = NULL;    
    while(borrar != NULL && (borrar->dato).numeros != num){
        anterior = borrar;
        borrar = borrar->sig;
    }
    if(borrar == NULL){
        cout << "Numero no exite\n" << endl;
        system("pause");
        return;
    }
    if(anterior == NULL)
        pInicio = pInicio->sig;
    else
        anterior->sig = borrar->sig;
    delete(borrar);
    n++;
 }
 cout<<"Ocurrencias de: "<<num<<" fueron eliminadas con exito\n";
 system("pause");
}

void EliminarRecur(){
	float recur=0;
	int contador=0;
	cout<<"Que numero deseas eliminar de tu lista\n";
	cin>>recur;
	contador=Contador(recur);
	cout<<" "<<recur<<" "<<contador;
	system("pause");
	Remover(recur,contador);
}

int main(){
	pInicio=NULL;
	bool continuar=true;
	int op=0,sacado;
	do{
		system("cls"); 
		cout<<"Menu:\n Indica lo que deseas hacer\n1.Agregar un nuevo elemento\n2.Eliminar un elemento\n3.Mostrar la lista \n4.Eliminar ocurrencias\n5.Salir\n"; cin>>op;
		cout<<endl;
		switch(op){
          case 1: AgregarNum();
		  break;
		  case 2: EliminarNum();
		  break;
		  case 3: mostrarLista();
		  break;
		  case 4: EliminarRecur();
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
