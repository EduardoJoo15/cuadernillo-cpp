#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

unsigned int tirarDados(); //Prototipo de la funcion antes de su desarrollo

int main(){

	enum Estado {GANO,PERDIO,CONTINUAR};

	srand(static_cast<unsigned int>(time(0)));

	unsigned int miPunto = 0;
	Estado estadoJuego = CONTINUAR;
	unsigned int sumaDeDados = tirarDados();

	switch(sumaDeDados){
        case 7:
        case 11:
            estadoJuego = GANO;
        break;

        case 2:
        case 3:
        case 12:
            estadoJuego = PERDIO;
        break;

        default:
            estadoJuego = CONTINUAR;
            miPunto = sumaDeDados;
            cout<<"El punto es: "<<miPunto<<endl;
        break;
	}

	while(estadoJuego == CONTINUAR){
        sumaDeDados = tirarDados();

        if(miPunto == sumaDeDados)
            estadoJuego = GANO;

        else if(miPunto == 7)
            estadoJuego = PERDIO;
	}

	if(estadoJuego == GANO)
        cout<<"Gano el juego :)"<<endl;
    else
        cout<<"Perdio el juego :( "<<endl;

	return 0;
}

unsigned int tirarDados(){
    unsigned int dado1 = 1 + rand() % 6;
    unsigned int dado2 = 1 + rand() % 6;

    unsigned int suma = dado1 + dado2;

    cout<<"El jugador tiro: "<<dado1<<" + "<<dado2<<" = "<<suma<<endl;

    return suma;
}

