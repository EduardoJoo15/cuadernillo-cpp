#include<iostream>
#include<string>

using namespace std;


class Curso{
	public: 
		explicit Curso(string nombre){
			obtenerNombre(nombre);
		}
		
		void obtenerNombre(string nombre){
			if(nombre.size() <=20){
				nombreCurso = nombre;
				cout<<"Nombre introducido correctamente"<<endl<<endl;
			}
			else{
				nombreCurso = nombre.substr(0,20);
				cerr<<"Error el nombre se redujo a: "<<nombreCurso<<endl<<endl;
			}
		}
		
		string establecerNombre()const{
			return nombreCurso;
		}
		
		void mostrarMensaje(){
			cout<<"Bienvenido a la clase de: "<<nombreCurso<<endl<<endl;
		}
		
		void promedioClase(int numAlumnos){//funcion que recibe el numero de alumnos
			int total = 0;//el total de calificaciones se inicializa en 0
			unsigned int contadorCalif = 1;//usigned se refiere a que la variable almacena numeros positivos
			
			while(contadorCalif <= numAlumnos){//mientras contador sea menor al numero de alumnos..
				int calificacion = 0;//se crea la variable calificacion 
				cout<<"Escriba la calificaion: "<<endl;
				cin>>calificacion;//se almacena la calificacion
				
				total = total + calificacion;//el total se le suma las calificacion
				contadorCalif++;//al contador se le aumenta/suma 1
			}
			
			int promedio = total/numAlumnos;//promedio es igual al total entre el numero de alumnos
			cout<<"El promedio de calificaciones es de:"<<promedio<<endl;
		}
		
	private: 
		string nombreCurso;
};


int main(){
	int numAlumnos = 0;
	string nombre;
	
	cout<<"Introduce el nombre de la clase: "<<endl<<endl;
	getline(cin,nombre);
	
	Curso miClase(nombre);
	
	miClase.mostrarMensaje();
	
	cout<<"Ingrese el numero de alumnos: "<<endl;
	cin>>numAlumnos;
	
	miClase.promedioClase(numAlumnos);
	
	return 0;
}
