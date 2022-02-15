#include<iostream>

using namespace std;

//-----------------------BUCLE-WHILE------------------------

int main(){
	
	int x=0;//se inicializa la variable x
	
	cout<<"inicio del bucle"<<endl;
	
	while(x<=20){//bucle, mientras x swa menor o igual a 20 entoces...
	
		cout<<x<<endl;//imprime el valor de x;
		
		x++;//sumale a x 1;
	}
	
	//fin del bucle 
	cout<<"fin del blucle";
	
	cout<<endl;
	cout<<endl;
	
	//tambien se puede ahorrar lineas declarandolo asi..
	
	int y = 0;
	while(++y <= 10)//se incrementa la variable al mismo tiempo que se verifica
	cout<<y<<endl;
	
	
	return 0;
}
