#include<iostream>
using namespace std;

int main(){
	
	int saldo_inicial = 3400, opc;
	float agregar,saldo, retiro;
	
	
	cout<<"\t BIENVENIDOS A SU BANCO"<<endl;
	
	cout<<"\n1. Ingresar dinero a la cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Ver saldo"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"\nOPCION: "<<endl;
	cin>>opc;
	
	switch(opc){
		case 1: cout<<"Cuanto dinero desea ingresar: "<<endl; cin>>agregar;
		        saldo = saldo_inicial + agregar;
		        cout<<"Se agrego exitosamente. Ahora tiene: "<<saldo<<endl;
		        break;
		        
		case 2: cout<<"Cuanto dinero desea retirar: "<<endl; cin>>retiro;
		        if(retiro>saldo_inicial){
		        	cout<<"La cantidad que desea retirar es mayor a su saldo"<<endl;
		        }
		        else{
		        	saldo = saldo_inicial - retiro;
		        	cout<<"Se retiro exitosamente, ahora tiene: "<<saldo<<endl;
		        }
		        break;
		        
		case 3: cout<<"Su saldo es de: "<<saldo_inicial<<endl; break;
			
		case 4: break;
	}
	
	
	
	return 0;
}
