#include<iostream>
#include<stdlib.h>

using namespace std;

int **PMatriz,fil=10,col=20;

int main(){
	int a=0;
	
	PMatriz=new int*[fil];
	
	for(int i=0;i<fil;i++)
	   PMatriz[i]= new int[col];
	
	PMatriz[0][0]=100;
	cout<<"\n Direcciones de memoria \n"<<&PMatriz[0][0]<<"\n"<<&PMatriz[2][1]<<"\n"<<&PMatriz[5][1]<<"\n"<<&PMatriz[1][10]<<"\n"<<&PMatriz[2][10]<<"\n"<<&PMatriz[5][3]<<"\n"<<&PMatriz[9][19];

//1. Si es valida, la desreferencia	
	PMatriz[0][0]=*(*PMatriz);
//Prueba
	cout<<"\n"<<PMatriz[0][0]<<"\n";

//2. Se hara con un for anidado
  /* No es valida la opcion
      for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(*(PMatriz))+(i+ *col +j)=a;
       	 a++;
	   }
	   a=0;
	}
 */  
 //3. Si es valida la opcion y es la mejor 
 /*
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(*(PMatriz+i)+j)=a;
       	 a++;
	   }
	   a=0;
	}
		for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<*(*(PMatriz+i)+j)<<"]";	
		}
		cout<<"\n";	
	}
*/

/*4. Si es valida la opcion
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(PMatriz[i]+j)=a;
       	 a++;
	   }
	   a=0;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<*(PMatriz[i]+j)<<"]";	
		}
		cout<<"\n";	
	}
*/

/*5. Si es valida la opcion
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 (*(PMatriz+i))[j]=a;
       	 a++;
	   }
	   a=0;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<(*(PMatriz+i))[j]<<"]";	
		}
		cout<<"\n";
    }
*/
	
	return 0;
}
