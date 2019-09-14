#include <iostream>

using namespace std;

int main() {
    float x, acumu=0;
    float div;
    float n[10];
    for (int i=0;i<10;i++){
        cout<<"Introduzca los numeros enteros: "<<endl;
        cin>>n[i];
        acumu=acumu+n[i];
    }
        div=acumu/10;
    cout<<"el promedio es:"<<div<<endl;        
    return 0;
}
