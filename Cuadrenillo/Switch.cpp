#include<iostream>

using namespace std;

int main(){
	
	char letra;
	
	cout<<"Ingresa cualquier letra"<<endl;
	cin>>letra;
	
	switch(letra){//se ingresa como parametro la variable que se comparara
		case 'a'://si letra es igual al caracter 'a' entonces.."
		case 'A': cout<<"Letra a,.."<<endl;//imprime algo
		break;//detiene el flujo del switch y sale
		
		case 'b':
		case 'B': cout<<"Letra b,.."<<endl;
		break;
		
		case 'c':
		case 'C': cout<<"Letra c,.."<<endl;
		break;
		
		case 'd':
		case 'D': cout<<"Letra d,.."<<endl;
		break;
		
		default: cout<<"No se que es :(";//Accion por default por si no coincide ningun case

	}
	
	
	return 0;
}
