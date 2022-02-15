#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int serie[50];
	int n;
	
	cout<<"Introduce cuantos arreglos quieres: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"\nIntroduce los numeros del arreglo: ";
		cin>>serie[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<i<<" --> "<<serie[i]<<endl;
	}
	
	system("pause");
	return 0;
}
