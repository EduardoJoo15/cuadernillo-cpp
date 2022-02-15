#include<iostream>

using namespace std;

int main(){
	
	unsigned int i,j;
	
	for(i=1;i<=10;++i){//el ciclo se itera 10 veces
		
		if(i==5){//si i es igual a 5 entonces...
			break;//sale del ciclo
		}
		
		cout<<"\n \t"<<i<<endl;
	}
	cout<<"\n Salio del ciclo \n"<<endl;
	
	
	for(j=1;j<=10;++j){//el ciclo se itera 10 veces
		
		if(j==5)// si j es igual a 5 entonces...
		continue;//ignora la siguiente instruccion y continua con el ciclo
		
		cout<<"\n \t"<<j<<endl;
	}
	
	cout<<"\n El ciclo se salto el numero 5"<<endl;
	
	
	
	
	
	return 0;
}
