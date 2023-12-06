#include <iostream>

using namespace std;

int main()
{
    char nombre[10];
	int opcion, decision, vida = 100;
 
	cout<<"\t\t Bienvenido a tu historia\n ¿Como puedo llamarte?\n "; cin>>nombre;
	
	cout<<"\t\t Un gusto jefe "<<nombre<<endl;	
	cout<<"Elige una opcion para la dificultad del juego: "<<endl;

	cout<<"1.- Fácil (No te gusta complicarte, ¿eh?)"<<endl;
	cout<<"2.- Medio (Eres alguien normal queriendo jugar por diversion)"<<endl;
	cout<<"3.- Difícil (Si eres sensible mejor intentalo en medio)"<<endl;
	cout<<"4.- Salir" <<endl;
	cout<<" Opcion: "; cin>>opcion;
	
    	return 0;
}
