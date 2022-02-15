#include<iostream>

using namespace std;

class Escuela{
	public:
		explicit Escuela(string nombre)
			:califMaxima(0)
		{
			establecerNombre(nombre);
		}
		
		void establecerNombre(string nombre){
			if(nombre.size() <= 25){
				nombreCurso = nombre;
			}else{
				nombreCurso = nombre.substr(0,25);
				cerr<<"\n El nombre es muy grande, se substrajo solo 25 caracteres"<<endl;
			}
		}
		
		string obtenerNombre()const{
			return nombreCurso;
		}
		
		void mostrarNombre()const{
			cout<<"\nBienvenidos a la clase de:"<<obtenerNombre()<<"! \n"<<endl;
		}
		
		void obtenerCalif(){
			int calif1, calif2, calif3;
			
			cout<<"Ingrese 3 calificaciones: "<<endl;
			cin>>calif1>>calif2>>calif3;
			
			califMaxima = maxima(calif1,calif2,calif3);
		}
		
		int maxima(int x, int y, int z){
			int valorMax = x;
			
			if(y > valorMax){
				valorMax = y;
			}
			
			if(z > valorMax){
				valorMax = z;
			}
			
			return valorMax;
		}
		
		void mostrarCalif(){
			cout<<"La calificacion mas alta fue: "<<califMaxima<<endl;
		}
		
	private:
		int califMaxima;
		string nombreCurso;
};


int main(){
	
	Escuela Alumno(" Machine Learning 1");
	
	Alumno.mostrarNombre();
	Alumno.obtenerCalif();
	Alumno.mostrarCalif();
	
	return 0;
}
