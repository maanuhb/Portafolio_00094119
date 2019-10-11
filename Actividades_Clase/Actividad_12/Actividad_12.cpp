#include <iostream>
#include <string>

using namespace std;

struct TOrden{
    int Rev;
    int FconQ;
    int Q;
    bool arroz=false;
};

typedef struct TOrden Orden;

Orden solicitarOrden(){
    Orden p;
    int masa;
    
    cout << "Revuelta: "; cin >> p.Rev;
    cout << "Frijol con queso: ";   cin >> p.FconQ;
    cout << "Queso: "; cin >> p.Q;
    cout << "Masa: \n\t 1)Arroz \n\t 2)Maiz \n La Opción es: "; cin >> masa;
    
    if(masa==1){
        p.arroz=true;
    }
    
    
    return p;
}

void mostrarOrden(Orden p){
    if(p.arroz==true){
    cout << "Revuelta: " << p.Rev << endl;
    cout << "Frijol con queso: " << p.FconQ << endl;
    cout << "Queso: " << p.Q << endl;
    cout<<"Pupusas de Arroz"<<endl;
    }else{
        cout << "Revuelta: " << p.Rev << endl;
    cout << "Frijol con queso: " << p.FconQ << endl;
    cout << "Queso: " << p.Q << endl;
    cout<<"Pupusas de Maiz"<<endl;
    }
}

struct TNodo{
    Orden dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Orden p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(Orden p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void agregarOrden(){
    Orden p = solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);
                continuar = false;
            break;
            case 2: insertarFinal(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarOrden(s->dato);
        s = s->sig;
    }
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Orden\n\t2) Ver Orden"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarOrden();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
