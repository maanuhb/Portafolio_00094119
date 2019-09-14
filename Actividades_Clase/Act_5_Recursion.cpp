//Evarist Alexander Ardón Arévalo 00361518
//Manuel de Jesús Hernández Benítez 00094119


#include <iostream>
using namespace std;

int mult(int a, int b){
	if(b==1){
		cout << "b=" << b << " caso base" << endl;
		return 1;
	}else{
		return a + a*(b-1);
	}
	
	
}int main(){
	
	int a=0;
	int b=0;
	
	cout << "Ingrese el valor de a: "<< endl;
	cin >> a;
	
	cout << "Ingrese el valor de b: "<< endl;
	cin >> b;
	
		int r = mult(a,b);
		cout << "Resultado de la multiplicion de "<< a << " por " << b << " es: " << r << endl;


return 0;
}
