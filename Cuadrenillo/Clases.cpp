#include<iostream>
#include<string>//biblioteca string que permite usar string/cadena de caracteres

using namespace std;

class Persona{//nombre y creacion de la clase, primer letra mayuscula
	public://toda funcion y variable dentro de public podra ser utilizada por los objetos de la clase Persona
	
		void hablar()const{//funcion constante que no cambiara, he imprime texto, publica
			cout<<"Hola a todos"<<variablePrivada<<endl;	
		}
		
		string imprimeNombre(string nombre){//funcion que recibe un string y lo retorna, publica 
			return nombre;	
		}
		
		int imprimeEdad(int edad){//funcion que recibe un entero y lo retorna, publica 
			return edad;
		}
		
		int  edad = 15;//variable entera, publica
		string variablePublica = " variable publica";
		
//----------------------------------private-----------------------------------------
		
	private://toda funcion o variable dentro de private no podra ser utilizada por los objetos de la clase Persona
		
		void funcionPrivada(){//funcion que imprime; privada
			cout<<"Soy una funcion privada";
		}
		
		string variablePrivada = " variable privada";//variable string privada 
	
};

//Funcion main
int main(){
	string nombre;//se inicializa la variable para luego ser utilizada 
	
	Persona Eduardo;//Se crea el objeto Eduardo de la Clase Persona
	
	Eduardo.hablar();//se llama a la funcion de la Clase Persona
	cout<<"Escribe tu nombre"<<endl;
	getline(cin,nombre);//obtiene cadenas de caracteres sin inportar los espacios 
	cout<<"Hola "<<Eduardo.imprimeNombre(nombre)<<endl;//se llama a la funcion y como parametro la variable obtenida
	
	cout<<Eduardo.imprimeEdad(Eduardo.edad);//se llama a una funcion y como parametro la variable de la clase
	
	return 0;
} 
 
