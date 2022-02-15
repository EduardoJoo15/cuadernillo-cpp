#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int total = 0, x = 2, y;
	
	
	total = pow(x,2);//Potencia, primer parametro es el numero, segundo la potencia que se le agregara
	
	cout<<total<<endl;
	
	cout<<"Escriba un numero"<<endl;
	cin>>x;
	
	cout<<"Escriba la potencia que se le agregara"<<endl;
	cin>>y;
	
	total = pow(x,y);
	
	cout<<"El resultado es: "<<total<<endl;
	
	
	
	return 0;
}
