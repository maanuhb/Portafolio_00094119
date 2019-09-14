#include <iostream>
using namespace std;

int contar_enteros(int n, int c){
  if(n < 9){
    return 1;
  }
  else if(n > 9){
    c= n%10;
    return 1 + contar_enteros(n/10, c);
  }
}

int main(){
  int n;
    cout<<"Ingrese su numero entero:"<< endl;
    cin>> n;

  int c=0;
 contar_enteros(n, c);

    cout<<"EL numero de digitos es:"<< contar_enteros(n, c)<< endl;
return 0;
}


