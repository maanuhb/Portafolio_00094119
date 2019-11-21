#include <iostream>
#include <vector>

using namespace std;

struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}


void asigIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asigDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a){
    
    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;
    
    Arbol p = a;
    
   
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{//ir a la derecha
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
    
    if(numero < p->info)
        asigIzq(p, numero);
    else
        asigDer(p, numero);
}


void pre_orden(Arbol a){
    if(a != NULL){
        cout << " " << a->info;
        pre_orden(a->izq);
        pre_orden(a->der);
    }
}
void in_orden(Arbol a){
    if(a != NULL){
        in_orden(a->izq);
        cout << " " << a->info;
        in_orden(a->der);
    }
}
void post_orden(Arbol a){
    if(a != NULL){
        post_orden(a->izq);
        post_orden(a->der);
        cout << " " << a->info;
    }
}

void recorrer_Arbol(Arbol a){
    cout << "Recorrido PRE orden:"; pre_orden(a); cout << endl;
    cout << "Recorrido IN orden:"; in_orden(a); cout << endl;
    cout << "Recorrido POST orden:"; post_orden(a); cout << endl;
}



void buscar(Arbol a){
    int num = 0;
    cout << endl << "Buscar el numero: ";
    cin >> num;
    Arbol p = a;
    vector<int> ruta;

  
    while(true){
        if(num == p->info){
          ruta.push_back(p->info);

          cout << endl << "Ruta encontrada: ";
            for (int i = 0; i < ruta.size(); i++) 
                cout << ruta[i] << ", ";
            cout << endl;

            return;
        }else{
            ruta.push_back(p->info);
        }
        
        if(num < p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }

        cout << endl << "Numero no encontrado: ";
        for (int i = 0; i < ruta.size(); i++) 
            cout << ruta[i] << ", ";
        cout << endl;

}

int main(){
    int variable = 0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;
    
    Arbol arbol = crearArbol(variable);
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Almacenar\n\t2) Recorrer las variables\n\t3) Ruta de un numero"
            << "\n\t4) Abandonar\n\tOpcion escogida: ";
        cin >> opcion;
        switch(opcion){
            case 1: agregarNodo(arbol);
            break;
            case 2: recorrer_Arbol(arbol);
            break;
            case 3: buscar(arbol);
            break;
            case 4: continuar = false;
            break;
            default: cout << "TU opcion ha sido invalida!" << endl;
            break;
        }
    }while(continuar);
    
    return 0;
}
