#include <iostream>

using namespace std;

void TorrHanoi(int discos,int Origen,int Auxiliar, int Destino){
    if(discos==1)
      cout<<"Sujeta el disco de la torre "<<Origen<<" y colocalo en la torre "<<Destino<<endl;
    else{
      TorrHanoi(discos-1,Origen,Destino,Auxiliar);
      cout<<"Sujeta el disco de la torre "<<Origen<<" y colocalo en la torre "<<Destino<<endl;
      TorrHanoi(discos-1,Auxiliar,Origen,Destino);
    }
    
}

int main()
{
  int discos=0,Origen=1,Auxiliar=2,Destino=3;
  cout<<"Ingrese el numero de discos: ";cin>>discos;
  cout<<"Para resolver la torre con "<<discos<<" realizar los siguientes pasos\n";
  TorrHanoi(discos,Origen,Auxiliar,Destino);
 
    return 0;
}
