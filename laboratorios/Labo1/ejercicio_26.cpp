#include <iostream>
using namespace std; 
struct numeros{
    int r, i;
};
int main(void) {
    numeros cifra;
    int conjugado=0;
    cout<<"Introduzca la parte real del complejo: "<<endl;
    cin>> cifra.r;
    cout<<"Introduzca la parte imaginaria del complejo: "<<endl;
    cin>>cifra.i;
    if(cifra.i > 0){
        conjugado= cifra.i*(-1);
    cout<<"El complejo en su forma original es: "<<cifra.r<<"+"<<cifra.i<<"j"<<endl;
    cout<<"El complejo en su forma conjugada es: "<<cifra.r<<conjugado<<"j"<<endl;
    }
    else{
        conjugado= cifra.i*(-1);
        cout<<"El complejo en su forma original es: "<<cifra.r<<cifra.i<<"j"<<endl;
    cout<<"El complejo en su forma conjugada es: "<<cifra.r<<"+"<<conjugado<<"j"<<endl;
    }
        return 0;
 
} 
