#include<iostream>

using namespace std;

//piramide 1, sin espacios 
void piramideNum1(){
	int col=1;
	
	for(int filas=1; filas<=10;filas++){
		
		for(int i=1; i<=col;i++){
			cout<<"*";
		
		}
		cout<<endl;
		col++;
	}
	cout<<"\n\n";
}

//piramide 2, con espacios
void piramideNum2(){
	
	int col2=1, col3=0, espacio=10;
	
	for(int i=1;i<=10;i++){
		
		for(int j=1;j<=espacio;j++){
			cout<<" ";
		}
		espacio--;
		
		for(int z=1;z<=col3;z++){
			cout<<"*";
		}
		col3++;
		
		for(int k=1;k<=col2;k++){
			cout<<"*";
		}
		
		cout<<endl;
		col2++;
	}
}



int main(){
	
	piramideNum1();
	
	piramideNum2();
	
	return 0;
}
