#include<iostream>


using namespace std;

int main(){
	
	int x, y;
	
	cout<<"Ingrese dos numeros: "<<endl;
	cin>>x>>y;
	
	if(x>y) cout<<"el primer numero es mayor que el segundo"<<endl; //verifica si la instruccion es true
	
	if(x<y){
		cout<<"el segundo numero es mayor que el primero"<<endl;
	}
	
	if(x>=1 && y>=1)
		cout<<"los numeros ingresados son positivos"<<endl;
	else
		cout<<"los numeros ingresados son negativos"<<endl;
		
		
	cout<<(x==y ? "los numeros son iguales" : "los numeros son diferentes")<<endl;
	
	x % y == 0 ? cout<<"los numeros son divisibles" : cout<<"los numeros no son divisibles";	
	
	
	return 0;
}
