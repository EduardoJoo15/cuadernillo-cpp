#include<iostream>

using namespace std;

int main(){
	
	cout<<boolalpha<<"----AND Logico (&&)----\n" //boolalpha es un manipulador de flujo, para que el valor de cada bool muestre 
	<<"\nfalse && false = "<<(false&&false)      // las palabras true o false.
	<<"\nfalse && true = "<<(false&&true)
	<<"\ntrue && false = "<<(true&&false)
	<<"\ntrue && true = "<<(true&&true)<<"\n\n";
	
	cout<<"----OR Logico (||)----\n"
	<<"\nfalse || false = "<<(false||false)
	<<"\nfalse || true = "<<(false||true)
	<<"\ntrue || false = "<<(true||false)
	<<"\ntrue || true = "<<(true||true)<<"\n\n";
	
	cout<<"----NOT Logico (!)----\n"
	<<"\n!false = "<<(!false)
	<<"\n!true = "<<(!true)<<"\n\n";
	
	return 0;
}
