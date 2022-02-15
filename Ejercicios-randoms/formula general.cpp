#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	double resultado = 0, resultado2 = 0, b=0, b2=0, a=0, c=0, a2=0;
	
	cout<<"!Formula general"<<endl;
	
	cout<<"\nEscriba el numero de b: "<<endl;
	cin>>b;
	
	cout<<"Escribe el numero de a: "<<endl;
	cin>>a;
	
	cout<<"Escribe el numero de c: "<<endl;
	cin>>c;
	
	//Formula de x1
	resultado = ((-b)+sqrt(pow(b,2)-4*(a)*(c)))/(2*(a));
	cout<<"El resultado de x1 es: "<<resultado<<endl; 
	
	//Formula de x2
	resultado2 = ((-b)-sqrt(pow(b,2)-4*(a)*(c)))/(2*(a));
	cout<<"El resultado de x2 es: "<<resultado2<<endl;
	return 0;
}
