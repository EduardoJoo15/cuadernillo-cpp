#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	int n, x=0, y=1, z=1;
	
	cout<<"Ingrese el numero de veces de la serie: "<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<z<<" ";
		
		z = x + y;
		x = y;
		y = z;
	}
	
	system("pause");
	return 0;
}
