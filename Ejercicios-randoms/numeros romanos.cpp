#include<iostream>
using namespace std;

int main(){
	
	int numero, unidades, decenas, centenas, millar;
	
	cout<<"\nCONVERTIDOR DE NUMEROS A NUMEROS ROMANOS"<<endl;
	
	cout<<"\nEscriba el numero que quiere convertir:"<<endl;
	cin>>numero;
	
	unidades = numero%10; numero = numero / 10;
	decenas = numero%10; numero = numero / 10;
	centenas = numero%10; numero = numero / 10;
	millar = numero%10; numero = numero / 10;
	
	switch(millar){
		case 1: cout<<"M"<<endl; break;
		case 2: cout<<"MM"<<endl; break;
		case 3: cout<<"MMM"<<endl; break;
	}
	
	switch(centenas){
		case 1: cout<<"C"<<endl; break;
		case 2: cout<<"CC"<<endl; break;
		case 3: cout<<"CCC"<<endl; break;
		case 4: cout<<"CD"<<endl; break;
		case 5: cout<<"D"<<endl; break;
		case 6: cout<<"DC"<<endl; break;
		case 7: cout<<"DCC"<<endl; break;
		case 8: cout<<"DCCC"<<endl; break;
		case 9: cout<<"CM"<<endl; break;
	}
	switch(decenas){
		case 1: cout<<"X"<<endl; break;
		case 2: cout<<"XX"<<endl; break;
		case 3: cout<<"XXX"<<endl; break;
		case 4: cout<<"XL"<<endl; break;
		case 5: cout<<"L"<<endl; break;
		case 6: cout<<"LX"<<endl; break;
		case 7: cout<<"LXX"<<endl; break;
		case 8: cout<<"LXXX"<<endl; break;
		case 9: cout<<"XC"<<endl; break;
	}
	switch(unidades){
		case 1: cout<<"I"<<endl; break;
		case 2: cout<<"II"<<endl; break;
		case 3: cout<<"III"<<endl; break;
		case 4: cout<<"IV"<<endl; break;
		case 5: cout<<"V"<<endl; break;
		case 6: cout<<"VI"<<endl; break;
		case 7: cout<<"VII"<<endl; break;
		case 8: cout<<"VIII"<<endl; break;
		case 9: cout<<"IX"<<endl; break;
	}
	
	return 0;
}
