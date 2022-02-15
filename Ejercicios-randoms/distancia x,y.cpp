#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){
	
	int x1=0, y1=0, x2=0, y2=0;
	double resultado=0; 
	
	cout<<"\t\t\tDistancia entre de dos puntos\n";
	
	cout<<"\nIngresa los valores de A y B";
	
	cout<<"\nValor A(x1,y1)";
	cout<<"\nX1= ";
	cin>>x1;
	cout<<"\nY1= ";
	cin>>y1;
	cout<<"\nValor B(x2,y2)";
	cout<<"\nX2= ";
	cin>>x2;
	cout<<"\nY2= ";
	cin>>y2;
	
	cout<<"A("<<x1<<","<<y1<<")";
	cout<<" ";
	cout<<"B("<<x2<<","<<y2<<")";
	
	cout<<"\n";
	
	cout<<"\nResultado:\n";
	
	resultado = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	
	cout<<"\n"<<resultado<<endl;
	
	getch();
	return 0;
}
