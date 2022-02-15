#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int numero, aleatorio, contador = 0;
	
	srand(time(NULL));
	aleatorio = 1 + rand()%(100);
	
	cout<<"\t\tADIVINA EL NUMERO DEL 1 AL 100\n"<<endl;
	
	do{
		cout<<"Ingresa un numero: ";
		cin>>numero;
		
		if(numero>aleatorio){
			cout<<"\nEl numero es mayor al mio, ingresa otro\n";
		}if(numero<aleatorio){
			cout<<"\nEl numero es menor al mio, ingresa otro\n";
		}
		contador++;
	}while(numero != aleatorio);
	
	cout<<"\nADIVINASTE EL NUMERO GRAN TRABAJO\n";
	cout<<"\nNumero de intentos: "<<contador<<endl;
	
	system("pause");
	return 0;
}
