#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int numeros[] = {1,2,3,4,5};
	int *dir_numeros;
	
	dir_numeros = numeros;
	
	for(int i=0;i<5;i++){
		cout<<"Posicion De Memoria "<<numeros [i]<< " Es: "<<dir_numeros++<<endl;
	}
	
	getch;
	return 0;
}