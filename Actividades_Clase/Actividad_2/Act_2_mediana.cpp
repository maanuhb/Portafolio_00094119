#include <iostream>
using namespace std;
int main (void) {
int tamaño, mitad1,modulo, mitad2;
float resp, num1, num2;

cout<<"Ingrese la cantidad de digitos:"<<endl;
cin>>tamaño;

int mediana[tamaño];

for(int i=0; i<tamaño; i++){
cout<<"ingrese un digito"<<endl;
cin>>mediana[i];
}

modulo= tamaño%2;

if(modulo==0){
	mitad1=tamaño/2;
	mitad2=mitad1-1;
	num1=mediana[mitad1];
	num2=mediana[mitad2];
	resp= ((num1+num2)/2);
	cout<<"La mediana es: "<<resp<<endl;
}else{
   mitad1=tamaño/2;
   cout<<"La mediana es: "<<mediana[mitad1]<<endl;	
}
return 0;
}
