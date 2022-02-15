#include <iostream>
#include "clase.h"

using namespace std;
	
	Clase::Clase(string nombre){
		
		establecerNombreClase(nombre);
	}
	
	void Clase::establecerNombreClase(string nombre){
		if(nombre.size() <= 25){
			nombreCurso = nombre;
		}
		
		if(nombre.size() > 25 ){
			nombreCurso = nombre.substr(0,25);
			
			cerr<<"El nombre "<<nombre<<" Excede la longitud maxima se minimizo"<<endl;
		}
	}
	
	string Clase::obtenerNombreClase()const{
		return nombreCurso;
	}
	
	void Clase::mostrarMensaje()const{
		cout<<"Bienvenido "<<obtenerNombreClase()<<" A tu clase de matematicas"<<endl;
	}
	

