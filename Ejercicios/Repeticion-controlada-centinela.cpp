#include<iostream>
#include<string>
#include<iomanip>//libreria para poder ejecutar el manipulador de flujo parametrizado, setprecision

//Para poder sacar un promedio de calificaciones de numero decimal, con valores enteros, se modifica temporalmente el valor
//total, con el operador static_cast<tipo de dato>(variable a cambiar temporalmente); al dividirlo con un numero entero
//el compilador cambia igual al mismo tiempo el otro valor a decimal, promoviendo
//setprecision(2) indica el numero de digitos a tomar luego del punto decimal, con precision alta
//el manipulador de flujo parametrizado fixed, indica que debe imprimir el numero sin notacion cientifica

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
		
		void promedioClase(){
			int total = 0;
			unsigned int contadorCalif = 0;

			int calificacion = 0;
			cout<<"Escriba la calificaion o -1 para salir: "<<endl;
			cin>>calificacion;
			
			while(calificacion != -1){
				total = total + calificacion;
				contadorCalif++;
				
				cout<<"Escriba la calificaion o -1 para salir: "<<endl;
				cin>>calificacion;
			}
			
			if(contadorCalif != 0){
				double promedio = static_cast<double>(total) / contadorCalif;//total se convierte temporalmente en double
				cout<<"El total de las "<<contadorCalif<<" calificaciones es de: "<<total<<endl;
				cout<<setprecision(1)<<fixed;//manipula el flujo del resultado, con precision de 1 decimal, 
				//fixed obliga a imprimir el numero sin notacion cientifica, y si el numero es 8.00, lo redondea a 8
				cout<<"El promedio de la clase es de: "<<promedio<<endl;
			}
			else{
				cerr<<"No se escribieron calificaciones"<<endl;
			}
			
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
	
	miClase.promedioClase();
	
	return 0;
}
