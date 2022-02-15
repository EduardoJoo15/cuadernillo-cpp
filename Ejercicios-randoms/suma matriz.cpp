#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int matriz1[100][100], fila1, columna1;
	int matriz2[100][100], fila2, columna2;
	int matrizsuma[100][100], fila3, columna3;
	
	cout<<"Ingrese el numero de filas de la primera matriz: ";
	cin>>fila1;
	cout<<"Ingrese el numero de columnas de la primera matriz: ";
	cin>>columna1;
	
	for(int i=0;i<fila1;i++){
		for(int j=0;j<columna1;j++){
			cout<<"\nIngresa los numeros de las filas y columnas: ["<<i<<"] ["<<j<<"]: ";
			cin>>matriz1[i][j];
		}
	};
	
	cout<<"\nMatriz numero 1: \n";
	for(int i=0;i<fila1;i++){
		for(int j=0;j<columna1;j++){
			cout<<matriz1[i][j];
		}
		cout<<"\n";
	};
	
	//Matriz 2
	cout<<"\nIngresa el numero de filas de la matriz numero 2: ";
	cin>>fila2;
	cout<<"Ingresa el numero de columnas de la matriz numero 2: ";
	cin>>columna2;
	
	for(int i=0;i<fila2;i++){
		for(int j=0;j<columna2;j++){
			cout<<"\nIngresa los numeros de las filas y columnas: ["<<i<<"] ["<<j<<"]: ";
			cin>>matriz2[i][j];
		}
	};
	
	cout<<"\nMatriz numero 2: \n";
	for(int i=0;i<fila2;i++){
		for(int j=0;j<columna2;j++){
			cout<<matriz2[i][j];
		}
		cout<<"\n";
	};
	
	cout<<"\nLa suma de las 2 matrices es: \n";
	

	
	system("pause");
	return 0;
}
