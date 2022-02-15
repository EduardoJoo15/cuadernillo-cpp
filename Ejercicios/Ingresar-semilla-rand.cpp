#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){
	
	int unsigned semilla = 0;//se crea la variable 
	
	cout<<"Ingrese la semilla: "<<endl;//El usuario ingresa cualquier numero para la semilla
	cin>>semilla;
	srand(semilla);//la variable se ingresa en la funcion srand, la semilla enviara a la funcion rand,
	
	for(int contador = 1; contador<=20; contador++){//Ciclo repite 20 veces
		cout<<setw(15)<<(1 + rand() % 6);//se crea el numero sudoaleatorio del 1 al 5+1=6; el numero se repetira cuando se cmpile nuevamente 
		
		if(contador % 5 == 0){//si el numero de contador es divisible con 5, residuo de 0..
			cout<<endl;//se imprime un espacio
		}
	} 
	
	return 0;
}

