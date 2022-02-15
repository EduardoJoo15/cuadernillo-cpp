#include<iostream>
#include<string>

using namespace std;

class Curso{
	public: 
		explicit Curso(string nombre)//constructor, se agrega explicit porque solo recibe un parametro
			:nombreCurso(nombre)//inicializador de datos, miembro
		{
			
		}
		
		/*void establecerNombreCurso(string nombre){
			nombreCurso = nombre;
		}*/
		
		string obtenerNombreCurso()const{
			return nombreCurso;
		}
		
		void mostrarMensaje(){
			cout<<"Bienvenidos al curso: "<<obtenerNombreCurso()<<endl;
		}
		
	private:
		string nombreCurso;
};

int main(){
	
	Curso miCurso1("Calculo Integral");//se crea el objeto y a su vez se introuce el parametro al constructor
	Curso miCurso2("Bases de datos");
	
	cout<<"miCurso1--";
	miCurso1.mostrarMensaje();
	cout<<endl;
	
	cout<<"miCurso2--";
	miCurso2.mostrarMensaje();
	
	return 0;
}
