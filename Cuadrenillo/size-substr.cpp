 #include<iostream>
 #include<string>
 
 using namespace std;
 
 int main(){
 	
 	string nombre;//se crea la variable
 	
 	cout<<"Escriba un nombre de usuario: "<<endl;
 	getline(cin,nombre);//se obtiene el nombre ingresado sin importar los espacios 
 	
 	if(nombre.size() <= 10){//si el tamaño de de la cadena de texto es menor o igual a 10 ..
 		cout<<nombre<<"Ingresado correctamente";
 	}
	else{// si el tamaño del texto es mayor entonces..
 		nombre = nombre.substr(0,10);//al nombre se le substrae desde el caracter 0 al 10,/se obtienen 10 caracteres
 		cerr<<"El nombre es muy grande, se cambio por: "<<nombre;//mensaje de error.
 	}
 	
 	return 0;
 }
