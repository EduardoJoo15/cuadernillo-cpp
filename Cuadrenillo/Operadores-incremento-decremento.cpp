#include<iostream>

using namespace std;

int main(){
	
	int x = 1, y = 1, z = 3;
	
	cout<<x<<" Imprime 1"<<endl;
	cout<<x++<<" Imprime 1 y luego postincrementa"<<endl;//usa el valor de la variable y luego incrementa a 1
	cout<<x<<" Imprime 2"<<endl;
	
	cout<<endl;
	
	cout<<y<<" Imprime 1"<<endl;
	cout<<++y<<" preincrementa 1 y luego imprime 2"<<endl;//incrementa a 1 y luego usa el valor de la variable
	cout<<y<<" Imprime 2";
	
	
	z = z + 1;
	
	z += 1;
	
	++z;
	
	z++;
		
	return 0;
}
