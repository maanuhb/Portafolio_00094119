// EVARIST ALEXANDER ARDON AREVALO 00361518
//MANUEL DE JESUS HERNANDEZ BENITEZ 00094119

#include <iostream>
using namespace std;

struct paisesCont1{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContAsia[5];

struct paisesCont2{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContAme[5];

struct paisesCont3{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContAfr[5];

struct paisesCont4{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContEu[5];

struct paisesCont5{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContOce[5];

int main(){
	
	// Ingresando datos
	
	cout<< "Continente Asiatico" << endl;
	
	for(int i=0; i<5; i++){
		cout << "Ingrese el nombre del pais N-" << i+1 << ":" << endl;
		cin >> ContAsia[i].nombre;
		cout<<"Ingrese el nombre de la capital del pais N-" << i+1 << ":" << endl;
		cin >> ContAsia[i].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << i+1 << ":" << endl;
		cin >> ContAsia[i].habitantes;
	}
	
	cout << "Continente Americano"<< endl;
	
	for(int i=0; i<5; i++){
		cout<< "Ingrese el nombre del pais N-" << i+1 << ":" << endl;
		cin >> ContAme[i].nombre;
		cout<< "Ingrese el nombre de la capital del pais N-" << i+1 << ":" << endl;
		cin >> ContAme[i].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << i+1<< ":" << endl;
		cin >> ContAme[i].habitantes;
	}
	
	system("PAUSE");
	
return 0;
}


