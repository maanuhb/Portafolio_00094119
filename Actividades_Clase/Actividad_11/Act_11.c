#include <iostream> 
using namespace std;
int main() {
    int valor=1,elemen=0,ini=0,posicion=0,op=1;
    int coci[5]; 
    while(op!=0){
        switch(op){
            case 1 : 
                cout<<"Ingresa un valor"<<endl;
                cin>>valor;
                posicion=(ini+elemen)%5;
                coci[posicion]=valor;
                cout<<"El valor ingresado fue: "<<coci[posicion]<<" en la posicion #" <<posicion<<endl;
                elemen++; 
                break;
            case 2:
                if(elemen!=0){
                    cout<<"Eliminando ..."<<endl;
                    cout<<"El elemento eliminado fue: "<<coci[ini]<<" de la posicion " <<ini<<endl;
                    coci[ini]=NULL; 
                    ini=(ini+1)%5;
                    elemen--;
                }
                break;
        }
         cout<<"Ingresa el numero 1 para agregar un elemento, 2 para eliminar un elemento o 0 para salir "<<endl;
         cin>>op;
    }
    return 0;
}
