// EVARIST ALEXANDER ARDON AREVALO 00361518
//MANUEL DE JESUS HERNANDEZ BENITEZ 00094119

#include <iostream>
#include <stdio.h>

using namespace std;


int buscar(int a[], int low, int high, int n);

int main(){
	int a[8]={1,3,4,5,17,18,31,33};
	
	int low=0;
	int high= 7;
	int n,i;

	cout << "Ingrese un numero a buscar: " << endl;
	cin >> n;
	i=buscar(a,low,high,n);

	
	if(i==-1)
		cout << "No se encontro el numero." << endl;
	
	else 
		cout <<"El numero se encuentra en la posicion: " << i << endl;
	
	return 0;	
}

int buscar(int a[], int low, int high, int n){

	 int mitad;
	 
		if (low > high)
			return (-1);
			
			mitad = (low + high)/2;
		if (n == a[mitad])
			return mitad;
			
		if (n< a[mitad])
			return buscar(a,low,mitad-1,n);
		 else 
			return buscar(a,mitad+1,high,n);
			
	}
	
	
	
	
