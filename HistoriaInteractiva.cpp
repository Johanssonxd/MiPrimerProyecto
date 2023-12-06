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

    switch(opcion){

        case 1:
        cout<<"\n Te encuentras en tu casa, aburrido sin nada que hacer, decides jugar videojuegos para despejarte pues la universidad es algo agobiante para ti, enciedes tu consola y despues de un rato empiezas a ver distorcionada la imagen de la tv.\n";
        cout<<"¿Que quieres hacer?\n";
        cout<<"1.- Golpear la television\n";
        cout<<"2.- Revisar la corriente de luz\n";
        cout<<"3.- Dejar de jugar, ya tuviste suficiente\n";
        cout<<" Opcion: ";
		cin>>decision;
	
		case 2: 
		cout<<"\nTe encuentras en tu casa, aburrido sin nada que hacer, decides jugar videojuegos para despejarte pues la universidad es algo agobiante para ti, enciedes tu consola y despues de un rato empiezas a ver distorcionada la imagen de la tv.\n";
        cout<<"¿Que quieres hacer?\n";
        cout<<"1.- Golpear la television\n";
        cout<<"2.- Revisar la corriente de luz\n";
        cout<<"3.- Dejar de jugar, ya tuviste suficiente\n";
        cout<<"Opcion: ";
		cin>>decision;
		
		case 3:
		cout<<"\n Te encuentras en tu casa, aburrido sin nada que hacer, decides jugar videojuegos para despejarte pues la universidad es algo agobiante para ti, enciedes tu consola y despues de un rato empiezas a ver distorcionada la imagen de la tv.\n";
        cout<<"¿Que quieres hacer?\n";
        cout<<"1.- Golpear la television\n";
        cout<<"2.- Revisar la corriente de luz\n";
        cout<<"3.- Dejar de jugar, ya tuviste suficiente\n";
        cout<<"Opcion: ";
		cin>>decision;
		
		
		case 4: cout<<"\nBuen dia "<<nombre<<" :)"; break;
		
		default: cout<<"\n¿Me quiere sabotear?"; break;

    }
	
    	return 0;
}