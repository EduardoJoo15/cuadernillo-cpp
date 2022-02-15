#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int matriz1[100][100], filas, columna;
	int matriz2[100][100];
	
	cout<<"Ingresa el numero de filas: ";
	cin>>filas;
	cout<<"\nIngresa el numero de columnas: ";
	cin>>columna;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columna;j++){
			cout<<"\nIngresa los numeros de la matriz: ["<<i<<"] ["<<j<<"]: ";
			cin>>matriz1[i][j];
		}
	;}
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columna;j++){
			matriz2[i][j] = matriz1[i][j];
		}
    };
	
	cout<<"\nMatriz 1: \n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columna;j++){
			cout<<matriz1[i][j];
		}
		cout<<"\n";
	};
	
	
	cout<<"Matriz 2: \n"; 
	
		for(int i=0;i<filas;i++){
		for(int j=0;j<columna;j++){
			cout<<matriz2[i][j];
		}
		cout<<"\n";
	};
	
	system("pause");
	return 0;
}
