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

        if (decision == 1){
	        cout<<"¡Muy bien, funciona!. Sigues jugando sin ningun problema.\nFIN.";

		}
		else if(decision == 2){
	        cout<<"Cae un rayo y mueres por una descarga eléctrica.\nFIN.\nHAHAHA\n¿Enserio elegiste fácil?, prueba otra dificultad";

		}
        else if(decision == 3){
	        cout<<"Vuelves a la cama y duermes placidamente.\nFIN.";

		}
        else{
            cout<<"Elija una opcion correcta por favor";

        } break;
	
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
		
        if (decision == 1){
	    	cout<<"\nTropiezas en el camino hacia el televisor, te golpeas la cabeza y mueres.\nSe nota la dificultad, ¿no?\nIntentalo de nuevo";

		}
		else if(decision == 2){
	    	cout<<"\n¡Cae un rayo y ocurre algo fantastico que hace que te adentres tu videojuego favorito!"<<endl;
			cout<<"Entras y te percatas que tienes "<<vida<<" puntos de salud" <<endl;
			cout<<"¿Que quieres hacer?\n1.- Adentrarte y explorar\n2.- Tirarte a llorar\n3.- Miras a lo lejos algo brillante y te acercas.\n Opcion: ";
            cin>>decision;

            if(decision == 1){
                cout<<"\nAl avazar encuentras a unos exploradores que te ven de manera extraña, te preguntan:\n'¿A que campamento pertences?'...\nComo no sabes que responder uno de ellos te declara enemigo y te mata.\nFIN";
            
            }
            else if(decision == 2){
                cout<<"\nComo eres demasiado vago y no sabes que hacer mueres de hambre\nFIN\n¿Enserio?, ¿ponerte a llorar?";
            
            }
            else if(decision == 3){
                cout<<"\n!Al acercarte ves que es un objeto antiguo¡, tal vez un amuleto, no sabes que es pero se ve que guarda un poder.\n¿Que quieres hacer?\n1.- Ponertelo como adorno\n2.- Dejarlo en donde estaba\n3.- Lanzarlo a un río que estaba a un lado\n Opcion: ";
                cin>>decision;

                if(decision == 1){
                    cout<<"\n!El amuleto tiene dentro una conciencia poderosa y te ayudará en la aventura¡\nSolo tiene una condición, tienes que dejar que viva en tu cuerpo para siempre, pues es una entidad que no se puede materializar.\n¿Que harás?\n1.- !Claro, no puede ser tan malo¡\n2.- Creo que mejor me quedo como estoy\n3.- Supongo que esta bien\n Opcion: ";
                    cin>>decision;

                    if(decision == 1){
                        cout<<"\nContinuas explorando y encuentras a enemigos en el camino, pero la entidad te ayuda a derrotarlos.\nAl llegar a un pueblo, notas como la entidad empieza comportarse de forma extraña.\nTe sientes mareado y no tienes un aspecto muy bueno. ";
                        cout<<"\nNotas que tu vida empieza a bajar.\nSalud: 80...\nSalud: 60...\nSalud: 40...\n¿Que quieres hacer?"<<endl;
                        cout<<"1.- Vas rápidamente al pueblo a buscar ayuda.\n2.- Recuerdas que en el juego puedes regenerar salud con hierbas y buscas algunas cuantas para comer.\n3.- No haces nada.\n Opcion: ";
                        cin>>decision;

                        if(decision == 1){
                            cout<<"\nEncuentras a un mago que quiere ayudar y consigues sobrevivir. ";
                            cout<<"El mago que te atiende te analiza con magia y te menciona que estas poseído por un espirítu maligno. ";
                            cout<<"\n¿Cuál es tu reacción?\n1.- Le haces frente a la entidad.\n2.- Haces como que no tienes problema\n3.- Intentas destruir el amuleto\n Opcion: ";
                            cin>>decision;

                            switch(decision){

                                case 1: cout<<"\nLa entidad explica que hiciste un pacto con ella y no tendrás salida de ese mundo hasta que cumplas todo lo que te pide para vengarse de el mundo que lo rechazo y convirtió en lo que es ahora.\n Te niegas a hacer lo que dice.\nA la entidad le da igual, pues ha estado robando las almas de los enemigos derrotados y tiene suficiente poder para hacer que mueras y poseerte completamente.\nTus esfuerzos son en vano y mueres.\nFIN\n No debiste tomar este camino.";
                                break;
                                
                                case 2: cout<<"\nSabes como reaccionar en esta situación, pues reconoces de que entidad se trata gracias a tus horas invertidas en el juego.\nRapidamente le gritas al mago que lance un echizo bendito a tu cuerpo, eso hará que la entidad muera.\nEl mago menciona que eso también provocará tu muerte.\n¿Cuál es tu respuesta?\n1.- Lo sabes, pero es la mejor forma\n2.- Te arrepientes de tu decision\n3.- Decides buscar otra opcion\n Opcion: ";
                                cin>>decision;

                                switch(decision){
                                    case 1: cout<<"\nEl mago decide hacerte caso, pues la entidad maligna o más conocida como 'The Presence' es peligrosa y si logra completar todo su poder seria un verdadero problema para el mundo.\nMueres.\nPero despiertas de tu cama, todo era un sueño...\nFIN\n¡Gracias por jugar!"; break;
                                    case 2: cout<<"\nComo decidiste retractarte la entidad actua rapidamente.\nEsta asesina al mago y empieza a doblegarte para poseerte completamente\nTu salud empieza a bajar de nuevo y pierdes poco a poco la conciencia hasta convertirte en 'The Presence'\nFIN\n¡Gracias por jugar!"; break;
                                    case 3: cout<<"\nComo tardaste mucho en pensar en otra opcion la entidad actua rapidamente.\nEsta asesina al mago y empieza a doblegarte para poseerte completamente\nTu salud empieza a bajar de nuevo y pierdes poco a poco la conciencia hasta convertirte en 'The Presence'\nFIN\n¡Gracias por jugar!"; break;
                                    default: cout<<"\nLo arruinaste :P"; break;
                                    
                                }
                                break;
                                
                                case 3: cout<<"\nLa entidad posee tu cuerpo, pero pones resistencia...\nLa entidad hace que pierdas la conciencia poco a poco...\nEl mago intenta ayudar pero es atacado por la entidad...\nQuedas inciente poco a poco..., \nTu conciencia muere...\nYa no eres "<<nombre<<" ahora eres 'The presence'\nFIN\n!Gracias por jugar¡";
                                break;
                                
                                default: cout<<"\nLo arruinaste :P"; break;

                            }
                        }
                        else if(decision == 2){
                            cout<<"\nMueres\nNo elegiste las plantas correctas y te envenenas.\nFIN";

                        }
                        else if(decision == 3){
                            cout<<"\nMueres\n ¿Era muy difícil hacer algo?\n FIN";

                        }
                        else{
                            cout<<"\nPiensalo de nuevo papito";
                        }
                    }
                    else if(decision == 2){
                    cout<<"\nA la entidad no le importa y resulta ser maligna, te posee para hacerte daño.\nTu salud empieza bajar:\n 80\n 50\n 20\n 0...\nMoriste, no había otra opcion\n FIN";

                    }
                    else if(decision == 3){
                        cout<<"\nContinuas explorando y encuentras a enemigos en el camino, pero la entidad te ayuda a derrotarlos.\nAl llegar a un pueblo, notas como la entidad empieza comportarse de forma extraña.\nTe sientes mareado y no tienes un aspecto muy bueno. ";
                        cout<<"\nNotas que tu vida empieza a bajar.\nSalud: 80...\nSalud: 60...\nSalud: 40...\n¿Que quieres hacer?"<<endl;
                        cout<<"1.- Vas rápidamente al pueblo a buscar ayuda.\n2.- Recuerdas que en el juego puedes regenerar salud con hierbas y buscas algunas cuantas para comer.\n3.- No haces nada.\n Opcion: ";
                        cin>>decision;

                        if(decision == 1){
                            cout<<"\nEncuentras a un mago que quiere ayudar y consigues sobrevivir. ";
                            cout<<"El mago que te atiende te analiza con magia y te menciona que estas poseído por un espirítu maligno. ";
                            cout<<"\n¿Cuál es tu reacción?\n1.- Le haces frente a la entidad.\n2.- Haces como que no tienes problema\n3.- Intentas destruir el amuleto\n Opcion: ";
                            cin>>decision;

                            switch(decision){

                                case 1: cout<<"\nLa entidad explica que hiciste un pacto con ella y no tendrás salida de ese mundo hasta que cumplas todo lo que te pide para vengarse de el mundo que lo rechazo y convirtió en lo que es ahora.\n Te niegas a hacer lo que dice.\nA la entidad le da igual, pues ha estado robando las almas de los enemigos derrotados y tiene suficiente poder para hacer que mueras y poseerte completamente.\nTus esfuerzos son en vano y mueres.\nFIN\nNo debiste tomar este camino.";
                                break;
                                
                                case 2: cout<<"\nSabes como reaccionar en esta situación, pues reconoces de que entidad se trata gracias a tus horas invertidas en el juego.\nRapidamente le gritas al mago que lance un echizo bendito a tu cuerpo, eso hará que la entidad muera.\nEl mago menciona que eso también provocará tu muerte.\n¿Cuál es tu respuesta?\n1.- Lo sabes, pero es la mejor forma\n2.- Te arrepientes de tu decision\n3.- Decides buscar otra opcion\n Opcion: ";
                                cin>>decision;
                                switch(decision){
                                    case 1: cout<<"\nEl mago decide hacerte caso, pues la entidad maligna o más conocida como 'The Presence' es peligrosa y si logra completar todo su poder seria un verdadero problema para ese mundo.\nMueres.\nPero despiertas de tu cama, todo era un sueño...\nFIN\n¡Gracias por jugar!"; break;
                                    case 2: cout<<"\nComo decidiste retractarte la entidad actua rapidamente.\nEsta asesina al mago y empieza a doblegarte para poseerte completamente\nTu salud empieza a bajar de nuevo y pierdes poco a poco la conciencia hasta convertirte en 'The Presence'\nFIN\n¡Gracias por jugar!"; break;
                                    case 3: cout<<"\nComo tardaste mucho en pensar en otra opcion la entidad actua rapidamente.\nEsta asesina al mago y empieza a doblegarte para poseerte completamente\nTu salud empieza a bajar de nuevo y pierdes poco a poco la conciencia hasta convertirte en 'The Presence'\nFIN\n¡Gracias por jugar!"; break;
                                    default: cout<<"Lo arruinaste :P"; break;
                                    
                                }
                                break;
                                
                                case 3: cout<<"\nLa entidad posee tu cuerpo, pero pones resistencia...\nLa entidad hace que pierdas la conciencia poco a poco...\nEl mago intenta ayudar pero es atacado por la entidad...\nQuedas inciente poco a poco..., \nTu conciencia muere...\nYa no eres "<<nombre<<" ahora eres 'The presence'\nFIN\n!Gracias por jugar¡";
                                break;
                                
                                default: cout<<"\nLo arruinaste :P"; break;

                            }
                        }
                        else if(decision == 2){
                            cout<<"\nMueres\nNo elegiste las plantas correctas y te envenenas.\nFIN";

                        }
                        else if(decision == 3){
                            cout<<"\nMueres\n ¿Era muy difícil hacer algo?\n FIN";

                        }
                        else{
                            cout<<"\nPiensalo de nuevo papito";
                        }
                    }   
                    else{
                    cout<<"\nTenías que arruinarlo :P";

                    }
                }
                else if(decision == 2){
                    cout<<"\nTe adrentas en la aventura, pero como eres nivel bajo no sobrevives mucho...\n FIN";
                    
                }
                else if(decision == 3){
                    cout<<"\nUna identidad poderosa sale por lo que has hecho y te ejecuta...\n FIN";
                    
                }
                else{
                    cout<<"\n¿Podrías hacerlo bien?";

                }
            }
            else{
                cout<<"\n¿No seguirás?";

            }

		}
        else if(decision == 3){
	    	cout<<"\nVuelves a la cama, duermes y ya no despiertas :(\nFIN"; break;

		}
        else{
            cout<<"\nPiensalo de nuevo: ";

        } break;
		
		case 4: cout<<"\nBuen dia "<<nombre<<" :)"; break;
		
		default: cout<<"\n¿Me quiere sabotear?"; break;

    }
	
    	return 0;
}