#include<iostream>
#include<iomanip>//para el manipulador de flujo setw()mueve 15 espacios
#include<cstdlib>//para funcion rand()

using namespace std;

int main(){
	
	for(int contador = 1; contador<=20;++contador){
		cout<<setw(15)<<rand()%6+1;// numero aleatorio entre 0 y 6, | 5+1=6
		
		if(contador % 5 == 0){// cuando el contador llegue a un numero divisible de 5, crea un espacio
			cout<<endl;
		}
	}
	cout<<"\n\n";
	//Probabilidad de que muestre tal numero 
	
	int unsigned frec1 = 0;//variable que almacena la frecuencia en la que sale el numero 1
	int unsigned frec2 = 0;
	int unsigned frec3 = 0;
	int unsigned frec4 = 0;
	int unsigned frec5 = 0;
	int unsigned frec6 = 0;
	
	for(int unsigned tiro=1;tiro<=6000000;tiro++){//for se ejecuta 6mill, veces simulando 6m de tiros
		unsigned int cara = (1+rand()%6);//el numero leatorio entre 1 y 6 se almacena en una variable
		
		switch(cara){
			case 1: ++frec1; break;//si cara es igual a 1 entonces se suma +1 a var frecuencia  
			case 2: ++frec2; break;
			case 3: ++frec3; break;
			case 4: ++frec4; break;
			case 5: ++frec5; break;
			case 6: ++frec6; break;	
		}
	}
	
	cout<<"Cara"<<setw(15)<<"Frecuencia"<<endl;
	cout<<"\n 1"<<setw(15)<<frec1
		<<"\n 2"<<setw(15)<<frec2
		<<"\n 3"<<setw(15)<<frec3
		<<"\n 4"<<setw(15)<<frec4
		<<"\n 5"<<setw(15)<<frec5
		<<"\n 6"<<setw(15)<<frec6<<endl;
	
	
	
	return 0;
}
