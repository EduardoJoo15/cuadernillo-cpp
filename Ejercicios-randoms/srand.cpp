#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	
	int dato;
	
	srand(time(NULL));
	dato = 1 + rand()%(100);
	
	cout<<dato<<endl; 
	
	system("pause");
	return 0;
}
