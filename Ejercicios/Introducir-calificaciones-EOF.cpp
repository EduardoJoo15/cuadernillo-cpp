#include<iostream>
#include<string>

using namespace std;

class Alumno{
	public:
	explicit Alumno(string nombre)//se ingresa un parametro string al constructor
	: aCuenta(0),//se inicializan las variables en el constructor en 0, para que no se aumenten solas, y predeterminado sin errores
	  bCuenta(0),//tambien se pueden inicializar afuera, en la creacion de la varibales
      cCuenta(0),
	  dCuenta(0),
	  fCuenta(0)
	{
		establecerNombreClase(nombre);//se llama a la funcion ingresandole la variable nombre del constructor
	}
	
	void establecerNombreClase(string nombre){
		if(nombre.size() <= 25){
			nombreClase = nombre;
		}else{
			nombreClase = nombre.substr(0,25);
		}
	}
	
	string obtenerNombreClase()const{
		return nombreClase;
	}
	
	void mostrarNombreClase()const{
		cout<<"Bienvenido a la clase: "<<obtenerNombreClase()<<endl;
	}
	
	void recibirCalificaciones(){
		int calificacion; //se crea la variable calificaciones para obtener cuantas son a, b, c ,d o f, int porque es igual de grande que un caracter en memoria
		
		cout<<"Escriba las calificaciones por letras o el caracter EOF para salir "<<endl;
		
		while((calificacion = cin.get()) != EOF){//mientras, el caracter que se obtiene,  es diferente que, fin del archivo, combinacion de ctrl + z
			switch(calificacion){//abre el switch ingresandole la variable calificacion 
				case 'a':
				case 'A':
					aCuenta++;
					break;
					
				case 'b'://si el valor de la variable coincide con una b 0 B, ejecuta, bcuenta++, que aumenta en 1 la variable
				case 'B':
					bCuenta++;
					break;
				
				case 'c':
				case 'C':
					cCuenta++;
					break;
					
				case 'd':
				case 'D':
					dCuenta++;
					break;
					
				case 'f':
				case 'F':
					fCuenta++;
					break;
					
				case '\n'://si se ingreso una salto de linea o espacio, solo lo ignora con break, y vuelve al while.
				case '\t':
				case ' ':
					break;		
					
				default: cout<<"No es un caracter valido ingrese otro:  "<<endl; break;	//si se introdujo algo diferente imprime y regresa al while
			}
		}
	}
	
	void mostrarCalificaciones()const{//funcion que imprime el valor de las variables, cuanto aumento cada una 
		cout<<"\n";
		cout<<"A: "<<aCuenta<<endl;
		cout<<"B: "<<bCuenta<<endl;
		cout<<"C: "<<cCuenta<<endl;
		cout<<"D: "<<dCuenta<<endl;
		cout<<"F: "<<fCuenta<<endl;
	}
	
	
	private:
		unsigned int aCuenta; //se crean las variables, solo positivas y la variable string nombre de la clase
		unsigned int bCuenta;
		unsigned int cCuenta;
		unsigned int dCuenta;
		unsigned int fCuenta;
		
		string nombreClase;
};

int main(){
	
	Alumno Eduardo("Redes Neuronales");//se crea el objeto y se ingresa un valor string al constructor
	
	Eduardo.mostrarNombreClase();
	
	Eduardo.recibirCalificaciones();
	
	Eduardo.mostrarCalificaciones();
	
	return 0;
}
