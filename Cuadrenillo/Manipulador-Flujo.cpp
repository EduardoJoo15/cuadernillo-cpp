#include<iostream>
#include<iomanip>
//-----------------------------------------Manipuladores de flujo------------------------------------------------ 
using namespace std;

int main(){
	
	double num1 = 12.123456789;
	double num2 = 13.123456788101112;
	
	cout<<num1<<endl;
	cout<<fixed;//fixed rellenara en ceros cuando setprecison sea mayor al numero 
	cout<<num1<<endl;
	cout<<setprecision(12);//incdica el numero de digitos que imprime despues del punto
	cout<<num1<<endl;
	
	cout<<endl;
	
	cout<<setw(5)<<num1<<setw(20)<<num2<<endl;//setw indica cuantos caracteres de espacio agregara en fila
	
	
	return 0;
}
