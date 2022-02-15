#include<iostream>

using namespace std;

int main(){
	
	for(unsigned int x = 1; x<=10; ++x)//nombre de la variable control, condicion del ciclo, incremento/decremento
	cout<<x<<endl;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Ciclo en decadencia --"<<endl;
	for(int i=100; i>=1; --i)
	cout<<i<<endl;
	
	cout<<"Ciclo en Aumento de 2 en 2"<<endl;
	for(int j=2; j<=20; j+= 2)
	cout<<j<<endl;
	
	
	
	unsigned int total = 0;
	for(int k=2; k<=20; k+=2)
	total += k;  //por cada iteracion de le suma a total el valor de k
	
	cout<<"La suma es: "<<total<<endl;
	
	
	return 0;
}
