#include<iostream>
#include<string>

using namespace std;

class Curso{
	
	public:
		void establecerCurso(string nombre){//funcion que obtiene el nombre y se lo establece a la variable creada en la clse
			nombreCurso = nombre;//variable de la clase que se le asigna el valor ingresado
		}
		
		string obtenerCurso()const{//funcion que retorna el valor de la variable anterior
			return nombreCurso;
		}
		
		void imprimirCurso()const{//funcion que imprime la funcion que retorna el valor de la variable
			cout<<"Bienvenido al curso de: "<<obtenerCurso()<<endl;
		}
		
	private: 
	string nombreCurso;//variable privada de la clase
	
};

int main(){
	string nombre;//se crea la variable que almacenara el nombre del curso introducido
	
	Curso miCurso;//se crea el objeto de la clase Curso
	
	cout<<"Ingrese el nombre del curso"<<endl;
	getline(cin,nombre);//se obtiene el nombre el curso sin importar los espacios 
	
	miCurso.establecerCurso(nombre);//se llama a la funcion y se ingresa como parametro la variable nombre
	miCurso.imprimirCurso();//se llama a la funcion void que imprimira el nombre
	
	return 0;
}
