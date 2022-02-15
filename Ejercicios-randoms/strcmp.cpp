#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char nombre[20];
	char nombre2[] = "eduardo";
	
	cout<<"Escribe tu nombre: ";
	cin.getline(nombre,20);
	
	if(strcmp(nombre,nombre2)==0){
		cout<<"Bienvenido Eduardo";
	}else{
		cout<<"Error";
	};
	
	getch();
	return 0;
}
