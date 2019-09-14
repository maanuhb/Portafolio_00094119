#include <iostream>
using namespace std;

int mcd(int a, int b ){

if(a<b){
  return mcd(b,a );
}
else if(b==0){
	return a;}
	else 
	return mcd( b, (a%b));
 
}

int main(){

    int a;
    cout << "Ingrese un numero entero: " << endl;
    cin >> a;


    int b;
    cout << "Ingrese un numero entero menor al anterior: " << endl;
    cin >> b;




    int mcd(b%a);

    cout<<"MCD: "<< mcd << endl;

return 0;
  }
