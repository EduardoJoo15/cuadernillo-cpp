#include<iostream>
#include<string>

//Las funciones void que no retorna no necesitan ser imprimmidas con cout
//Pero las funciones string, int necesitan ser impresas porque retornan un valor no impreso

using namespace std;

void Saludar(){//Funcion que no retorna nada
	cout<<"Hola a todos"<<endl;
}

string Nombre(string nombre){//Funcion recibe y retorna variables de tipo string
	return nombre;//retorna el nombre que se le agrege 
}

int Suma(int num1, int num2){//Funcion que recibe y retorna variables enteras
	return num1 + num2;//retorna la suma de los dos numero 
}

int main(){
	
	Saludar();//se llama a la funcion void que imprime hola
	
	cout<<Nombre("Eduardo")<<endl;//Se imprime la funcion nombre que retorna Eduardo
	
	cout<<Suma(1,2)<<endl;//Se imprime la funcion que retorna la suma de 1 y 2
	
	return 0;
}
