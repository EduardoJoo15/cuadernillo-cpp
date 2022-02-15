#include<iostream>

using namespace std;

int main(){
	
	unsigned int aprobados = 0;
	unsigned int reprobados = 0;
	unsigned int contador = 1;
	
	while(contador <= 10){
		int resultado = 0;
		cout<<"Ingrese 1.Aprobado o 2.reprobado: "<<endl;
		cin>>resultado;
		
		if(resultado == 1){
			aprobados++;
		}
		else{
			reprobados++;
		}
		
		contador++;
		
	}
	
	cout<<"Total de aprobados: "<<aprobados<<endl;
	cout<<"Total de reprobados: "<<reprobados<<endl;
	
	if(aprobados>7){
		cout<<"El bono se a acreditado";
	}else{
		cout<<"El bono se a rechazado";
	}
	
	return 0; 
}
