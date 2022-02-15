#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int numeros[100][100], filas, columnas;
	
	cout<<"Ingresa el numero de filas de la matriz: ";
	cin>>filas;
	cout<<"Ingresa el numero de columnas de la matriz: ";
	cin>>columnas;
	
	//Almacenando los datos de la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Ingresa el numero de: ["<<i<<"] ["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	//Imprimiendo la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	};

	
	system("pause");
	return 0;
}
