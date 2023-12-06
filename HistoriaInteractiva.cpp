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

        if (decision == 1){
            cout<<"\nGolpeas tan duro que empieza a ocurrir una descarga eléctrica y te desmayas\n";
            cout<<"Despiertas y encuentras en un lugar misterioso con criaturas extrañas. Tu salud es de "<<vida<<" puntos.\n";
            cout<<"¿Qué quieres hacer?\n";
            cout<<"1.- Explorar el entorno\n";
            cout<<"2.- Intentar comunicarte con las criaturas\n";
            cout<<"3.- Buscar una salida\n Opción: ";
            cin>>decision;

			if (decision == 1){
                cout<<"\nAl explorar, te encuentras con una criatura amigable que te ofrece ayuda.\n";
                cout<<"¿Aceptas su ayuda?\n";
                cout<<"1.- Sí\n";
                cout<<"2.- No\n";
                cout<<"3.- La intentas atacar\n";
                cout<<" Opción: ";
                cin>>decision;

                if (decision == 1){
                    cout<<"\nLa criatura te guía a través de un portal que te lleva de vuelta a tu mundo, pero exiten algunos obstaculos en el camino.\n";
                    vida -= 92;
                    cout<<"Al final llegas a tu mundo de nuevo y antes de regresar te restan " <<vida<< " puntos de vida.\n";
                    cout<<"FIN\n";
                    cout<<"!Gracias por jugar¡";
                
                } 
                else if (decision == 2){
                    cout<<"\nDecides no aceptar la ayuda y continúas explorando por tu cuenta.\n";
                    cout<<"Cuando estas a punto de irte la criatura te menciona que si no aceptas su ayuda moriras en un mundo tan violento como ese.\n";
                    cout<<"Al final por el miedo aceptas su ayuda.\n";
                    cout<<"\nLa criatura esta dispuesta a ayudarte a volver a tu mundo, pero primero tienes que hacerle un par de favores.\n";
                    cout<<"¿Que deseas hacer?\n";
                    cout<<"1.- Ayudarle (No tienes de otra, ¿o si?).\n";
                    cout<<"2.- Negarte eh ir por tu cuenta.\n";
                    cout<<"3.- Negociar para que te ayude sin necesidad de hacer los favores.\n";
                    cout<<" Opcion: ";
                    cin>>decision;

                    if(decision == 1){
                        cout<<"\nAceptas con la condicion de que te ayude a salir.\nEl trabajo consiste en conseguir dos objetos de poder desconocido los cuales valen mucho en ese mundo.\n";
                        cout<<"En el camino encuentran a enemigos, pero la criatura te enseña a lidiar con ellos.\n";
                        vida -= 50;
                        cout<<"Al final encuentran un artefacto de los dos que buscaban y quedas con "<<vida<<" puntos de salud\n";
                        cout<<"La criatura decide ayudarte a salir, pues no encontraron el segundo artefacto.\n";
                        cout<<"De camino al portal para salir empiezas a escuchar una voz en tu cabeza que te dice que aun no es momento de salir de ese mundo.\n";
                        cout<<"¿Que haces?\n";
                        cout<<"1.- Avisarle a la criatura\n";
                        cout<<"2.- No decir nada\n";
                        cout<<"3.- Ir hacia donde te indica la voz sin decir nada\n";
                        cout<<" Opcion: ";
                        cin>>decision;

                        if(decision == 1){
                            cout<<"\nLa criatura se extraña de que pase eso pues como eres de otro mundo no debería de suceder eso. A continuación explíca que esas voces solo las escuchan los jefes que dirigen hacía la paz el mundo en el que te encuentras\n";
                            cout<<"La criatura te dice que si es verdad lo que dices tu puedes ser una pieza importante para que el mundo de la criatura encuentre la verdadera paz. La criatura te pregunta si quieres averiguar más sobre eso.\n";
                            cout<<"¿Que respondes?\n";
                            cout<<"1.- Decides quedarte para averiguar mas.\n";
                            cout<<"2.- Pones alguna excusa para safarte.\n";
                            cout<<"3.- Respondes que es mejor ayudar desde el exterior (jugando).\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            switch(decision){
                                case 1: 
                                cout<<"\n¡Muy bien, te emociona la aventura y quieres explorar más de ese mundo!. Estas decidido a continuar la aventura.\n";
                                cout<<"Para continuar la aventura tendrá que aprobar esta demo.\n";
                                cout<<"Continuará...\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 2: 
                                cout<<"\nLa criatura se da cuenta de que eres un cobarde y mejor te deja ir a tu mundo.\n";
                                cout<<"Regresas a tu mundo tranquilo. Pero después de un tiempo te arrepientes de tu decision.\n";
                                cout<<"FIN\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 3:
                                cout<<"\nLa criatura te entiende y regresas a tu mundo\n";
                                cout<<"Pero estas decidido a ayudarlos jugando como siempre lo has hecho, pero con la diferencia de que ahora tienen la capacidad de comunicarse.\n";
                                cout<<"Continuará...";
                                cout<<"¡Gracias por jugar la demo!. Para continuar con la historia debe aprobar esta misma";

                                default: cout<<"Tenías que arrinarlo :P";

                            }

                        }
                        else if(decision == 2){
                            cout<<"\nIgnoras a la voz. Te despides de la criatura y sus compañeros y sales del mundo.\n";
                            cout<<"Quedas intrigado por la voz que escuchaste en el juego y enciendes el videojuego de nuevo, pero no responde.\n";
                            cout<<"FIN\n";
                            cout<<"¡Gracias por jugar!";

                        }
                        else if(decision == 3){
                            cout<<"\nTe alejas demasiado de la criatura la cual era la que te ayudaba a eliminar a los enemigos y terminas encontrandote con un enemigo poderoso.\n";
                            cout<<"¿Que quieres hacer?\n";
                            cout<<"1.- Atacar con lo que has aprendido de la criatura.\n";
                            cout<<"2.- Huir.\n";
                            cout<<"3.- Gritar para pedir ayuda.\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            switch(decision){

                                case 1:
                                cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                                vida -=50;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 2:
                                cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                                vida -=20;
                                cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                                cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                                cout<<"Lamentas su perdida y la voz te propone acabar con la maldad de ese mundo.\n";
                                cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                                cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 3: 
                                cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                                vida -=50;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";

                                default: cout<<"Elije una opcion correcta";

                            }
                        }
                        else{
                            cout<<"\nCreo que tienes que leer mejor :P";

                        }

                    }
                    else if(decision == 2){
                        cout<<"\nEliges ir por tu cuenta y te alejas demasiado de la criatura y terminas encontrandote con un enemigo poderoso.\n";
                        cout<<"¿Que quieres hacer?\n";
                        cout<<"1.- Atacar.\n";
                        cout<<"2.- Huir.\n";
                        cout<<"3.- Gritar para pedir ayuda.\n";
                        cout<<" Opcion: ";
                        cin>>decision;

                        switch(decision){

                            case 1:
                            cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                            vida -=100;
                            cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                            cout<<"Fin del juego.\n";
                            cout<<"¡Gracias por jugar!";
                            break;

                            case 2:
                            cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                            vida -=20;
                            cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                            cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                            cout<<"Lamentas su perdida y una voz te propone acabar con la maldad de ese mundo.\n";
                            cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                            cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                            cout<<"¡Gracias por jugar!";
                            break;

                            case 3: 
                            cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                            vida -=100;
                            cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                            cout<<"Fin del juego.\n";
                            cout<<"¡Gracias por jugar!";

                            default: cout<<"\nElije una opcion correcta";

                        }
                    }
                    else if(decision == 3){
                        cout<<"\nNo consigues nada negociando y te somete pues no tienesopcion.\nEl trabajo consiste en conseguir dos objetos de poder desconocido los cuales valen mucho en ese mundo.\n";
                        cout<<"En el camino encuentran a enemigos, pero la criatura te enseña a lidiar con ellos.\n";
                        vida -= 50;
                        cout<<"Al final encuentran un artefacto de los dos que buscaban y quedas con "<<vida<<" puntos de salud\n";
                        cout<<"La criatura decide ayudarte a salir, pues no encontraron el segundo artefacto.\n";
                        cout<<"De camino al portal para salir empiezas a escuchar una voz en tu cabeza que te dice que aun no es momento de salir de ese mundo.\n";
                        cout<<"¿Que haces?\n";
                        cout<<"1.- Avisarle a la criatura\n";
                        cout<<"2.- No decir nada\n";
                        cout<<"3.- Ir hacia donde te indica la voz sin decir nada\n";
                        cout<<" Opcion: ";
                        cin>>decision;

                        if(decision == 1){
                            cout<<"\nLa criatura se extraña de que pase eso pues como eres de otro mundo no debería de suceder eso. A continuación explíca que esas voces solo las escuchan los jefes que dirigen hacía la paz el mundo en el que te encuentras\n";
                            cout<<"La criatura te dice que si es verdad lo que dices tu puedes ser una pieza importante para que el mundo de la criatura encuentre la verdadera paz. La criatura te pregunta si quieres averiguar más sobre eso.\n";
                            cout<<"¿Que respondes?\n";
                            cout<<"1.- Decides quedarte para averiguar mas.\n";
                            cout<<"2.- Pones alguna excusa para safarte.\n";
                            cout<<"3.- Respondes que es mejor ayudar desde el exterior (jugando).\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            switch(decision){
                                case 1: 
                                cout<<"\n¡Muy bien, te emociona la aventura y quieres explorar más de ese mundo!. Estas decidido a continuar la aventura.\n";
                                cout<<"Para continuar la aventura tendrá que aprobar esta demo.\n";
                                cout<<"Continuará...\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 2: 
                                cout<<"\nLa criatura se da cuenta de que eres un cobarde y mejor te deja ir a tu mundo.\n";
                                cout<<"Regresas a tu mundo tranquilo. Pero después de un tiempo te arrepientes de tu decision.\n";
                                cout<<"FIN\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 3:
                                cout<<"\nLa criatura te entiende y regresas a tu mundo\n";
                                cout<<"Pero estas decidido a ayudarlos jugando como siempre lo has hecho, pero con la diferencia de que ahora tienen la capacidad de comunicarse.\n";
                                cout<<"Continuará...";
                                cout<<"¡Gracias por jugar la demo!. Para continuar con la historia debe aprobar esta misma";

                                default: cout<<"Tenías que arrinarlo :P";

                            }

                        }
                        else if(decision == 2){
                            cout<<"\nIgnoras a la voz. Te despides de la criatura y sus compañeros y sales del mundo.\n";
                            cout<<"Quedas intrigado por la voz que escuchaste en el juego y enciendes el videojuego de nuevo, pero no responde.\n";
                            cout<<"FIN\n";
                            cout<<"¡Gracias por jugar!";

                        }
                        else if(decision == 3){
                            cout<<"\nTe alejas demasiado de la criatura la cual era la que te ayudaba a eliminar a los enemigos y terminas encontrandote con un enemigo poderoso.\n";
                            cout<<"¿Que quieres hacer?\n";
                            cout<<"1.- Atacar con lo que has aprendido de la criatura.\n";
                            cout<<"2.- Huir.\n";
                            cout<<"3.- Gritar para pedir ayuda.\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            switch(decision){

                                case 1:
                                cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                                vida -=50;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 2:
                                cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                                vida -=20;
                                cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                                cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                                cout<<"Lamentas su perdida y la voz te propone acabar con la maldad de ese mundo.\n";
                                cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                                cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 3: 
                                cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                                vida -=50;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";

                                default: cout<<"\nElije una opcion correcta";

                            }
                        }
                        else{
                            cout<<"\nCreo que tienes que leer mejor :P";

                        }

                    }
                    else{
                        cout<<"\nElija una opción correcta por favor.";

                    }

                } 
                else if (decision == 3){
                    cout<<"\nLa criatura te somete y te perdona la vida, pues eres un novato que no sabe lo que hace.\n";
                    cout<<"¿Que haces?\n";
                    cout<<"1.- Te enfadas y lo vuelves a atacar\n";
                    cout<<"2.- Te relajas e intentas reconciliarte\n";
                    cout<<"3.- Sales huyendo\n";
                    cout<<" Opcion: ";
                    cin>>decision;
                    
                    if(decision == 1){
                        cout<<"\nMueres por tu inexperiencia en combate\n";
                        vida -= 100;
                        cout<<"Tu vida baja a " <<vida<< " puntos.\n"; 
                        cout<<"Fin del juego\n";
                        cout<<"¡Gracias por jugar!";

                    }
                    else if(decision == 2){
                        cout<<"\nLa criatura esta dispuesta a ayudarte a volver a tu mundo, pero primero tienes que hacerle un par de favores por el inconveniente provocado.\n";
                        cout<<"¿Que deseas hacer?\n";
                        cout<<"1.- Ayudarle (No tienes de otra, ¿o si?).\n";
                        cout<<"2.- Negarte eh ir por tu cuenta.\n";
                        cout<<"3.- Negociar para que te ayude sin necesidad de hacer los favores.\n";
                        cout<<" Opcion: ";
                        cin>>decision;

                        if(decision == 1){
                            cout<<"\nAceptas con la condicion de que te ayude a salir.\nEl trabajo consiste en conseguir dos objetos de poder desconocido los cuales valen mucho en ese mundo.\n";
                            cout<<"En el camino encuentran a enemigos, pero la criatura te enseña a lidiar con ellos.\n";
                            vida -= 50;
                            cout<<"Al final encuentran un artefacto de los dos que buscaban y quedas con "<<vida<<" puntos de salud\n";
                            cout<<"La criatura decide ayudarte a salir, pues no encontraron el segundo artefacto.\n";
                            cout<<"De camino al portal para salir empiezas a escuchar una voz en tu cabeza que te dice que aun no es momento de salir de ese mundo.\n";
                            cout<<"¿Que haces?\n";
                            cout<<"1.- Avisarle a la criatura\n";
                            cout<<"2.- No decir nada\n";
                            cout<<"3.- Ir hacia donde te indica la voz sin decir nada\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            if(decision == 1){
                                cout<<"\nLa criatura se extraña de que pase eso pues como eres de otro mundo no debería de suceder eso. A continuación explíca que esas voces solo las escuchan los jefes que dirigen hacía la paz el mundo en el que te encuentras\n";
                                cout<<"La criatura te dice que si es verdad lo que dices tu puedes ser una pieza importante para que el mundo de la criatura encuentre la verdadera paz. La criatura te pregunta si quieres averiguar más sobre eso.\n";
                                cout<<"¿Que respondes?\n";
                                cout<<"1.- Decides quedarte para averiguar mas.\n";
                                cout<<"2.- Pones alguna excusa para safarte.\n";
                                cout<<"3.- Respondes que es mejor ayudar desde el exterior (jugando).\n";
                                cout<<" Opcion: ";
                                cin>>decision;

                                switch(decision){
                                    case 1: 
                                    cout<<"\n¡Muy bien, te emociona la aventura y quieres explorar más de ese mundo!. Estas decidido a continuar la aventura.\n";
                                    cout<<"Para continuar la aventura tendrá que aprobar esta demo.\n";
                                    cout<<"Continuará...\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 2: 
                                    cout<<"\nLa criatura se da cuenta de que eres un cobarde y mejor te deja ir a tu mundo.\n";
                                    cout<<"Regresas a tu mundo tranquilo. Pero después de un tiempo te arrepientes de tu decision.\n";
                                    cout<<"FIN\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 3:
                                    cout<<"\nLa criatura te entiende y regresas a tu mundo\n";
                                    cout<<"Pero estas decidido a ayudarlos jugando como siempre lo has hecho, pero con la diferencia de que ahora tienen la capacidad de comunicarse.\n";
                                    cout<<"Continuará...";
                                    cout<<"¡Gracias por jugar la demo!. Para continuar con la historia debe aprobar esta misma";

                                    default: cout<<"Tenías que arrinarlo :P";

                                }

                            }
                            else if(decision == 2){
                                cout<<"\nIgnoras a la voz. Te despides de la criatura y sus compañeros y sales del mundo.\n";
                                cout<<"Quedas intrigado por la voz que escuchaste en el juego y enciendes el videojuego de nuevo, pero no responde.\n";
                                cout<<"FIN\n";
                                cout<<"¡Gracias por jugar!";

                            }
                            else if(decision == 3){
                                cout<<"\nTe alejas demasiado de la criatura la cual era la que te ayudaba a eliminar a los enemigos y terminas encontrandote con un enemigo poderoso.\n";
                                cout<<"¿Que quieres hacer?\n";
                                cout<<"1.- Atacar con lo que has aprendido de la criatura.\n";
                                cout<<"2.- Huir.\n";
                                cout<<"3.- Gritar para pedir ayuda.\n";
                                cout<<" Opcion: ";
                                cin>>decision;

                                switch(decision){

                                    case 1:
                                    cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                                    vida -=50;
                                    cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                    cout<<"Fin del juego.\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 2:
                                    cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                                    vida -=20;
                                    cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                                    cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                                    cout<<"Lamentas su perdida y la voz te propone acabar con la maldad de ese mundo.\n";
                                    cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                                    cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 3: 
                                    cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                                    vida -=50;
                                    cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                    cout<<"Fin del juego.\n";
                                    cout<<"¡Gracias por jugar!";

                                    default: cout<<"\nElije una opcion correcta";

                                }
                            }
                            else{
                                cout<<"\nCreo que tienes que leer mejor :P";

                            }

                        }
                        else if(decision == 2){
                            cout<<"\nEliges ir por tu cuenta y te alejas demasiado de la criatura y terminas encontrandote con un enemigo poderoso.\n";
                            cout<<"¿Que quieres hacer?\n";
                            cout<<"1.- Atacar.\n";
                            cout<<"2.- Huir.\n";
                            cout<<"3.- Gritar para pedir ayuda.\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            switch(decision){

                                case 1:
                                cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                                vida -=100;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 2:
                                cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                                vida -=20;
                                cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                                cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                                cout<<"Lamentas su perdida y una voz te propone acabar con la maldad de ese mundo.\n";
                                cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                                cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 3: 
                                cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                                vida -=100;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";

                                default: cout<<"Elije una opcion correcta";

                            }
                        }
                        else if(decision == 3){
                            cout<<"\nNo consigues nada negociando y te somete pues no tienesopcion.\nEl trabajo consiste en conseguir dos objetos de poder desconocido los cuales valen mucho en ese mundo.\n";
                            cout<<"En el camino encuentran a enemigos, pero la criatura te enseña a lidiar con ellos.\n";
                            vida -= 50;
                            cout<<"Al final encuentran un artefacto de los dos que buscaban y quedas con "<<vida<<" puntos de salud\n";
                            cout<<"La criatura decide ayudarte a salir, pues no encontraron el segundo artefacto.\n";
                            cout<<"De camino al portal para salir empiezas a escuchar una voz en tu cabeza que te dice que aun no es momento de salir de ese mundo.\n";
                            cout<<"¿Que haces?\n";
                            cout<<"1.- Avisarle a la criatura\n";
                            cout<<"2.- No decir nada\n";
                            cout<<"3.- Ir hacia donde te indica la voz sin decir nada\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            if(decision == 1){
                                cout<<"\nLa criatura se extraña de que pase eso pues como eres de otro mundo no debería de suceder eso. A continuación explíca que esas voces solo las escuchan los jefes que dirigen hacía la paz el mundo en el que te encuentras\n";
                                cout<<"La criatura te dice que si es verdad lo que dices tu puedes ser una pieza importante para que el mundo de la criatura encuentre la verdadera paz. La criatura te pregunta si quieres averiguar más sobre eso.\n";
                                cout<<"¿Que respondes?\n";
                                cout<<"1.- Decides quedarte para averiguar mas.\n";
                                cout<<"2.- Pones alguna excusa para safarte.\n";
                                cout<<"3.- Respondes que es mejor ayudar desde el exterior (jugando).\n";
                                cout<<" Opcion: ";
                                cin>>decision;

                                switch(decision){
                                    case 1: 
                                    cout<<"\n¡Muy bien, te emociona la aventura y quieres explorar más de ese mundo!. Estas decidido a continuar la aventura.\n";
                                    cout<<"Para continuar la aventura tendrá que aprobar esta demo.\n";
                                    cout<<"Continuará...\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 2: 
                                    cout<<"\nLa criatura se da cuenta de que eres un cobarde y mejor te deja ir a tu mundo.\n";
                                    cout<<"Regresas a tu mundo tranquilo. Pero después de un tiempo te arrepientes de tu decision.\n";
                                    cout<<"FIN\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 3:
                                    cout<<"\nLa criatura te entiende y regresas a tu mundo\n";
                                    cout<<"Pero estas decidido a ayudarlos jugando como siempre lo has hecho, pero con la diferencia de que ahora tienen la capacidad de comunicarse.\n";
                                    cout<<"Continuará...";
                                    cout<<"¡Gracias por jugar la demo!. Para continuar con la historia debe aprobar esta misma";

                                    default: cout<<"\nTenías que arrinarlo :P";

                                }

                            }
                            else if(decision == 2){
                                cout<<"\nIgnoras a la voz. Te despides de la criatura y sus compañeros y sales del mundo.\n";
                                cout<<"Quedas intrigado por la voz que escuchaste en el juego y enciendes el videojuego de nuevo, pero no responde.\n";
                                cout<<"FIN\n";
                                cout<<"¡Gracias por jugar!";

                            }
                            else if(decision == 3){
                                cout<<"\nTe alejas demasiado de la criatura la cual era la que te ayudaba a eliminar a los enemigos y terminas encontrandote con un enemigo poderoso.\n";
                                cout<<"¿Que quieres hacer?\n";
                                cout<<"1.- Atacar con lo que has aprendido de la criatura.\n";
                                cout<<"2.- Huir.\n";
                                cout<<"3.- Gritar para pedir ayuda.\n";
                                cout<<" Opcion: ";
                                cin>>decision;

                                switch(decision){

                                    case 1:
                                    cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                                    vida -=50;
                                    cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                    cout<<"Fin del juego.\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 2:
                                    cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                                    vida -=20;
                                    cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                                    cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                                    cout<<"Lamentas su perdida y la voz te propone acabar con la maldad de ese mundo.\n";
                                    cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                                    cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 3: 
                                    cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                                    vida -=50;
                                    cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                    cout<<"Fin del juego.\n";
                                    cout<<"¡Gracias por jugar!";

                                    default: cout<<"\nElije una opcion correcta";

                                }
                            }
                            else{
                                cout<<"\nCreo que tienes que leer mejor :P";

                            }

                        }
                        else{
                            cout<<"\nElija una opción correcta por favor.";

                        }

                    }
                    else if(decision == 3){
                        cout<<"\nAl salir corriendo te alejas demasiado de la criatura y terminas encontrandote con un enemigo poderoso.\n";
                        cout<<"¿Que quieres hacer?\n";
                        cout<<"1.- Atacar.\n";
                        cout<<"2.- Huir.\n";
                        cout<<"3.- Gritar para pedir ayuda.\n";
                        cout<<" Opcion: ";
                        cin>>decision;

                        switch(decision){

                            case 1:
                            cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                            vida -=100;
                            cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                            cout<<"Fin del juego.\n";
                            cout<<"¡Gracias por jugar!";
                            break;

                            case 2:
                            cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                            vida -=20;
                            cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                            cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                            cout<<"Lamentas su perdida y una voz te propone acabar con la maldad de ese mundo.\n";
                            cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                            cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                            cout<<"¡Gracias por jugar!";
                            break;

                            case 3: 
                            cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                            vida -=100;
                            cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                            cout<<"Fin del juego.\n";
                            cout<<"¡Gracias por jugar!";

                            default: cout<<"\nElije una opcion correcta";

                        }

                    }
                    else{
                        cout<<"\nNecesitas conpresión lectora :P";

                    }
                    
                } 
                else{
                    cout<<"\nCreo que no sabes seguir instrucciones. :/";
                    
                } 
            }
            else if (decision == 2){
                cout<<"\nAl comunicarte te percatas que puedes hablar el mismo idioma que ellas.\n";
                cout<<"Afortunadamente no te atacan e intentas pedirles ayuda, pero ninguna te hace caso, pues eres extraño para ellas.\n";
                cout<<"Decides caminar hastas encontrar a alguien que sepa como puedes volver.\n";
                cout<<"Inesperadamentee encuentras con una criatura amigable que te ofrece ayuda.\n";
                cout<<"¿Aceptas su ayuda?\n";
                cout<<"1.- Sí\n";
                cout<<"2.- No\n";
                cout<<"3.- La intentas atacar\n";
                cout<<" Opción: ";
                cin>>decision;

                if (decision == 1){
                    cout<<"\nLa criatura te guía a través de un portal que te lleva de vuelta a tu mundo, pero exiten algunos obstaculos en el camino.\n";
                    vida -= 92;
                    cout<<"Al final llegas a tu mundo de nuevo y antes de regresar te restan " <<vida<< " puntos de vida.\n";
                    cout<<"FIN\n";
                    cout<<"!Gracias por jugar¡";
                
                } 
                else if (decision == 2){
                    cout<<"\nDecides no aceptar la ayuda y continúas explorando por tu cuenta.\n";
                    cout<<"Cuando estas a punto de irte la criatura te menciona que si no aceptas su ayuda moriras en un mundo tan violento como ese.\n";
                    cout<<"Al final por el miedo aceptas su ayuda.\n";
                    cout<<"\nLa criatura esta dispuesta a ayudarte a volver a tu mundo, pero primero tienes que hacerle un par de favores.\n";
                    cout<<"¿Que deseas hacer?\n";
                    cout<<"1.- Ayudarle (No tienes de otra, ¿o si?).\n";
                    cout<<"2.- Negarte eh ir por tu cuenta.\n";
                    cout<<"3.- Negociar para que te ayude sin necesidad de hacer los favores.\n";
                    cout<<" Opcion: ";
                    cin>>decision;

                    if(decision == 1){
                        cout<<"\nAceptas con la condicion de que te ayude a salir.\nEl trabajo consiste en conseguir dos objetos de poder desconocido los cuales valen mucho en ese mundo.\n";
                        cout<<"En el camino encuentran a enemigos, pero la criatura te enseña a lidiar con ellos.\n";
                        vida -= 50;
                        cout<<"Al final encuentran un artefacto de los dos que buscaban y quedas con "<<vida<<" puntos de salud\n";
                        cout<<"La criatura decide ayudarte a salir, pues no encontraron el segundo artefacto.\n";
                        cout<<"De camino al portal para salir empiezas a escuchar una voz en tu cabeza que te dice que aun no es momento de salir de ese mundo.\n";
                        cout<<"¿Que haces?\n";
                        cout<<"1.- Avisarle a la criatura\n";
                        cout<<"2.- No decir nada\n";
                        cout<<"3.- Ir hacia donde te indica la voz sin decir nada\n";
                        cout<<" Opcion: ";
                        cin>>decision;

                        if(decision == 1){
                            cout<<"\nLa criatura se extraña de que pase eso pues como eres de otro mundo no debería de suceder eso. A continuación explíca que esas voces solo las escuchan los jefes que dirigen hacía la paz el mundo en el que te encuentras\n";
                            cout<<"La criatura te dice que si es verdad lo que dices tu puedes ser una pieza importante para que el mundo de la criatura encuentre la verdadera paz. La criatura te pregunta si quieres averiguar más sobre eso.\n";
                            cout<<"¿Que respondes?\n";
                            cout<<"1.- Decides quedarte para averiguar mas.\n";
                            cout<<"2.- Pones alguna excusa para safarte.\n";
                            cout<<"3.- Respondes que es mejor ayudar desde el exterior (jugando).\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            switch(decision){
                                case 1: 
                                cout<<"\n¡Muy bien, te emociona la aventura y quieres explorar más de ese mundo!. Estas decidido a continuar la aventura.\n";
                                cout<<"Para continuar la aventura tendrá que aprobar esta demo.\n";
                                cout<<"Continuará...\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 2: 
                                cout<<"\nLa criatura se da cuenta de que eres un cobarde y mejor te deja ir a tu mundo.\n";
                                cout<<"Regresas a tu mundo tranquilo. Pero después de un tiempo te arrepientes de tu decision.\n";
                                cout<<"FIN\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 3:
                                cout<<"\nLa criatura te entiende y regresas a tu mundo\n";
                                cout<<"Pero estas decidido a ayudarlos jugando como siempre lo has hecho, pero con la diferencia de que ahora tienen la capacidad de comunicarse.\n";
                                cout<<"Continuará...";
                                cout<<"¡Gracias por jugar la demo!. Para continuar con la historia debe aprobar esta misma";

                                default: cout<<"\nTenías que arrinarlo :P";

                            }

                        }
                        else if(decision == 2){
                            cout<<"\nIgnoras a la voz. Te despides de la criatura y sus compañeros y sales del mundo.\n";
                            cout<<"Quedas intrigado por la voz que escuchaste en el juego y enciendes el videojuego de nuevo, pero no responde.\n";
                            cout<<"FIN\n";
                            cout<<"¡Gracias por jugar!";

                        }
                        else if(decision == 3){
                            cout<<"\nTe alejas demasiado de la criatura la cual era la que te ayudaba a eliminar a los enemigos y terminas encontrandote con un enemigo poderoso.\n";
                            cout<<"¿Que quieres hacer?\n";
                            cout<<"1.- Atacar con lo que has aprendido de la criatura.\n";
                            cout<<"2.- Huir.\n";
                            cout<<"3.- Gritar para pedir ayuda.\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            switch(decision){

                                case 1:
                                cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                                vida -=50;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 2:
                                cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                                vida -=20;
                                cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                                cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                                cout<<"Lamentas su perdida y la voz te propone acabar con la maldad de ese mundo.\n";
                                cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                                cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 3: 
                                cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                                vida -=50;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";

                                default: cout<<"Elije una opcion correcta";

                            }
                        }
                        else{
                            cout<<"\nCreo que tienes que leer mejor :P";

                        }

                    }
                    else if(decision == 2){
                        cout<<"\nEliges ir por tu cuenta y te alejas demasiado de la criatura y terminas encontrandote con un enemigo poderoso.\n";
                        cout<<"¿Que quieres hacer?\n";
                        cout<<"1.- Atacar.\n";
                        cout<<"2.- Huir.\n";
                        cout<<"3.- Gritar para pedir ayuda.\n";
                        cout<<" Opcion: ";
                        cin>>decision;

                        switch(decision){

                            case 1:
                            cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                            vida -=100;
                            cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                            cout<<"Fin del juego.\n";
                            cout<<"¡Gracias por jugar!";
                            break;

                            case 2:
                            cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                            vida -=20;
                            cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                            cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                            cout<<"Lamentas su perdida y una voz te propone acabar con la maldad de ese mundo.\n";
                            cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                            cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                            cout<<"¡Gracias por jugar!";
                            break;

                            case 3: 
                            cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                            vida -=100;
                            cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                            cout<<"Fin del juego.\n";
                            cout<<"¡Gracias por jugar!";

                            default: cout<<"\nElije una opcion correcta";

                        }
                    }
                    else if(decision == 3){
                        cout<<"\nNo consigues nada negociando y te somete pues no tienesopcion.\nEl trabajo consiste en conseguir dos objetos de poder desconocido los cuales valen mucho en ese mundo.\n";
                        cout<<"En el camino encuentran a enemigos, pero la criatura te enseña a lidiar con ellos.\n";
                        vida -= 50;
                        cout<<"Al final encuentran un artefacto de los dos que buscaban y quedas con "<<vida<<" puntos de salud\n";
                        cout<<"La criatura decide ayudarte a salir, pues no encontraron el segundo artefacto.\n";
                        cout<<"De camino al portal para salir empiezas a escuchar una voz en tu cabeza que te dice que aun no es momento de salir de ese mundo.\n";
                        cout<<"¿Que haces?\n";
                        cout<<"1.- Avisarle a la criatura\n";
                        cout<<"2.- No decir nada\n";
                        cout<<"3.- Ir hacia donde te indica la voz sin decir nada\n";
                        cout<<" Opcion: ";
                        cin>>decision;

                        if(decision == 1){
                            cout<<"\nLa criatura se extraña de que pase eso pues como eres de otro mundo no debería de suceder eso. A continuación explíca que esas voces solo las escuchan los jefes que dirigen hacía la paz el mundo en el que te encuentras\n";
                            cout<<"La criatura te dice que si es verdad lo que dices tu puedes ser una pieza importante para que el mundo de la criatura encuentre la verdadera paz. La criatura te pregunta si quieres averiguar más sobre eso.\n";
                            cout<<"¿Que respondes?\n";
                            cout<<"1.- Decides quedarte para averiguar mas.\n";
                            cout<<"2.- Pones alguna excusa para safarte.\n";
                            cout<<"3.- Respondes que es mejor ayudar desde el exterior (jugando).\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            switch(decision){
                                case 1: 
                                cout<<"\n¡Muy bien, te emociona la aventura y quieres explorar más de ese mundo!. Estas decidido a continuar la aventura.\n";
                                cout<<"Para continuar la aventura tendrá que aprobar esta demo.\n";
                                cout<<"Continuará...\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 2: 
                                cout<<"\nLa criatura se da cuenta de que eres un cobarde y mejor te deja ir a tu mundo.\n";
                                cout<<"Regresas a tu mundo tranquilo. Pero después de un tiempo te arrepientes de tu decision.\n";
                                cout<<"FIN\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 3:
                                cout<<"\nLa criatura te entiende y regresas a tu mundo\n";
                                cout<<"Pero estas decidido a ayudarlos jugando como siempre lo has hecho, pero con la diferencia de que ahora tienen la capacidad de comunicarse.\n";
                                cout<<"Continuará...";
                                cout<<"¡Gracias por jugar la demo!. Para continuar con la historia debe aprobar esta misma";

                                default: cout<<"\nTenías que arrinarlo :P";

                            }

                        }
                        else if(decision == 2){
                            cout<<"\nIgnoras a la voz. Te despides de la criatura y sus compañeros y sales del mundo.\n";
                            cout<<"Quedas intrigado por la voz que escuchaste en el juego y enciendes el videojuego de nuevo, pero no responde.\n";
                            cout<<"FIN\n";
                            cout<<"¡Gracias por jugar!";

                        }
                        else if(decision == 3){
                            cout<<"\nTe alejas demasiado de la criatura la cual era la que te ayudaba a eliminar a los enemigos y terminas encontrandote con un enemigo poderoso.\n";
                            cout<<"¿Que quieres hacer?\n";
                            cout<<"1.- Atacar con lo que has aprendido de la criatura.\n";
                            cout<<"2.- Huir.\n";
                            cout<<"3.- Gritar para pedir ayuda.\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            switch(decision){

                                case 1:
                                cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                                vida -=50;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 2:
                                cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                                vida -=20;
                                cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                                cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                                cout<<"Lamentas su perdida y la voz te propone acabar con la maldad de ese mundo.\n";
                                cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                                cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 3: 
                                cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                                vida -=50;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";

                                default: cout<<"\nElije una opcion correcta";

                            }
                        }
                        else{
                            cout<<"\nCreo que tienes que leer mejor :P";

                        }

                    }
                    else{
                        cout<<"\nElija una opción correcta por favor.";

                    }

                } 
                else if (decision == 3){
                    cout<<"\nLa criatura te somete y te perdona la vida, pues eres un novato que no sabe lo que hace.\n";
                    cout<<"¿Que haces?\n";
                    cout<<"1.- Te enfadas y lo vuelves a atacar\n";
                    cout<<"2.- Te relajas e intentas reconciliarte\n";
                    cout<<"3.- Sales huyendo\n";
                    cout<<" Opcion: ";
                    cin>>decision;
                    
                    if(decision == 1){
                        cout<<"\nMueres por tu inexperiencia en combate\n";
                        vida -= 100;
                        cout<<"Tu vida baja a " <<vida<< " puntos.\n"; 
                        cout<<"Fin del juego\n";
                        cout<<"¡Gracias por jugar!";

                    }
                    else if(decision == 2){
                        cout<<"\nLa criatura esta dispuesta a ayudarte a volver a tu mundo, pero primero tienes que hacerle un par de favores por el inconveniente provocado.\n";
                        cout<<"¿Que deseas hacer?\n";
                        cout<<"1.- Ayudarle (No tienes de otra, ¿o si?).\n";
                        cout<<"2.- Negarte eh ir por tu cuenta.\n";
                        cout<<"3.- Negociar para que te ayude sin necesidad de hacer los favores.\n";
                        cout<<" Opcion: ";
                        cin>>decision;

                        if(decision == 1){
                            cout<<"\nAceptas con la condicion de que te ayude a salir.\nEl trabajo consiste en conseguir dos objetos de poder desconocido los cuales valen mucho en ese mundo.\n";
                            cout<<"En el camino encuentran a enemigos, pero la criatura te enseña a lidiar con ellos.\n";
                            vida -= 50;
                            cout<<"Al final encuentran un artefacto de los dos que buscaban y quedas con "<<vida<<" puntos de salud\n";
                            cout<<"La criatura decide ayudarte a salir, pues no encontraron el segundo artefacto.\n";
                            cout<<"De camino al portal para salir empiezas a escuchar una voz en tu cabeza que te dice que aun no es momento de salir de ese mundo.\n";
                            cout<<"¿Que haces?\n";
                            cout<<"1.- Avisarle a la criatura\n";
                            cout<<"2.- No decir nada\n";
                            cout<<"3.- Ir hacia donde te indica la voz sin decir nada\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            if(decision == 1){
                                cout<<"\nLa criatura se extraña de que pase eso pues como eres de otro mundo no debería de suceder eso. A continuación explíca que esas voces solo las escuchan los jefes que dirigen hacía la paz el mundo en el que te encuentras\n";
                                cout<<"La criatura te dice que si es verdad lo que dices tu puedes ser una pieza importante para que el mundo de la criatura encuentre la verdadera paz. La criatura te pregunta si quieres averiguar más sobre eso.\n";
                                cout<<"¿Que respondes?\n";
                                cout<<"1.- Decides quedarte para averiguar mas.\n";
                                cout<<"2.- Pones alguna excusa para safarte.\n";
                                cout<<"3.- Respondes que es mejor ayudar desde el exterior (jugando).\n";
                                cout<<" Opcion: ";
                                cin>>decision;

                                switch(decision){
                                    case 1: 
                                    cout<<"\n¡Muy bien, te emociona la aventura y quieres explorar más de ese mundo!. Estas decidido a continuar la aventura.\n";
                                    cout<<"Para continuar la aventura tendrá que aprobar esta demo.\n";
                                    cout<<"Continuará...\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 2: 
                                    cout<<"\nLa criatura se da cuenta de que eres un cobarde y mejor te deja ir a tu mundo.\n";
                                    cout<<"Regresas a tu mundo tranquilo. Pero después de un tiempo te arrepientes de tu decision.\n";
                                    cout<<"FIN\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 3:
                                    cout<<"\nLa criatura te entiende y regresas a tu mundo\n";
                                    cout<<"Pero estas decidido a ayudarlos jugando como siempre lo has hecho, pero con la diferencia de que ahora tienen la capacidad de comunicarse.\n";
                                    cout<<"Continuará...";
                                    cout<<"¡Gracias por jugar la demo!. Para continuar con la historia debe aprobar esta misma";

                                    default: cout<<"\nTenías que arrinarlo :P";

                                }

                            }
                            else if(decision == 2){
                                cout<<"\nIgnoras a la voz. Te despides de la criatura y sus compañeros y sales del mundo.\n";
                                cout<<"Quedas intrigado por la voz que escuchaste en el juego y enciendes el videojuego de nuevo, pero no responde.\n";
                                cout<<"FIN\n";
                                cout<<"¡Gracias por jugar!";

                            }
                            else if(decision == 3){
                                cout<<"\nTe alejas demasiado de la criatura la cual era la que te ayudaba a eliminar a los enemigos y terminas encontrandote con un enemigo poderoso.\n";
                                cout<<"¿Que quieres hacer?\n";
                                cout<<"1.- Atacar con lo que has aprendido de la criatura.\n";
                                cout<<"2.- Huir.\n";
                                cout<<"3.- Gritar para pedir ayuda.\n";
                                cout<<" Opcion: ";
                                cin>>decision;

                                switch(decision){

                                    case 1:
                                    cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                                    vida -=50;
                                    cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                    cout<<"Fin del juego.\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 2:
                                    cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                                    vida -=20;
                                    cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                                    cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                                    cout<<"Lamentas su perdida y la voz te propone acabar con la maldad de ese mundo.\n";
                                    cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                                    cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 3: 
                                    cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                                    vida -=50;
                                    cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                    cout<<"Fin del juego.\n";
                                    cout<<"¡Gracias por jugar!";

                                    default: cout<<"\nElije una opcion correcta";

                                }
                            }
                            else{
                                cout<<"\nCreo que tienes que leer mejor :P";

                            }

                        }
                        else if(decision == 2){
                            cout<<"\nEliges ir por tu cuenta y te alejas demasiado de la criatura y terminas encontrandote con un enemigo poderoso.\n";
                            cout<<"¿Que quieres hacer?\n";
                            cout<<"1.- Atacar.\n";
                            cout<<"2.- Huir.\n";
                            cout<<"3.- Gritar para pedir ayuda.\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            switch(decision){

                                case 1:
                                cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                                vida -=100;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 2:
                                cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                                vida -=20;
                                cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                                cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                                cout<<"Lamentas su perdida y una voz te propone acabar con la maldad de ese mundo.\n";
                                cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                                cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                                cout<<"¡Gracias por jugar!";
                                break;

                                case 3: 
                                cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                                vida -=100;
                                cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                cout<<"Fin del juego.\n";
                                cout<<"¡Gracias por jugar!";

                                default: cout<<"\nElije una opcion correcta";

                            }
                        }
                        else if(decision == 3){
                            cout<<"\nNo consigues nada negociando y te somete pues no tienesopcion.\nEl trabajo consiste en conseguir dos objetos de poder desconocido los cuales valen mucho en ese mundo.\n";
                            cout<<"En el camino encuentran a enemigos, pero la criatura te enseña a lidiar con ellos.\n";
                            vida -= 50;
                            cout<<"Al final encuentran un artefacto de los dos que buscaban y quedas con "<<vida<<" puntos de salud\n";
                            cout<<"La criatura decide ayudarte a salir, pues no encontraron el segundo artefacto.\n";
                            cout<<"De camino al portal para salir empiezas a escuchar una voz en tu cabeza que te dice que aun no es momento de salir de ese mundo.\n";
                            cout<<"¿Que haces?\n";
                            cout<<"1.- Avisarle a la criatura\n";
                            cout<<"2.- No decir nada\n";
                            cout<<"3.- Ir hacia donde te indica la voz sin decir nada\n";
                            cout<<" Opcion: ";
                            cin>>decision;

                            if(decision == 1){
                                cout<<"\nLa criatura se extraña de que pase eso pues como eres de otro mundo no debería de suceder eso. A continuación explíca que esas voces solo las escuchan los jefes que dirigen hacía la paz el mundo en el que te encuentras\n";
                                cout<<"La criatura te dice que si es verdad lo que dices tu puedes ser una pieza importante para que el mundo de la criatura encuentre la verdadera paz. La criatura te pregunta si quieres averiguar más sobre eso.\n";
                                cout<<"¿Que respondes?\n";
                                cout<<"1.- Decides quedarte para averiguar mas.\n";
                                cout<<"2.- Pones alguna excusa para safarte.\n";
                                cout<<"3.- Respondes que es mejor ayudar desde el exterior (jugando).\n";
                                cout<<" Opcion: ";
                                cin>>decision;

                                switch(decision){
                                    case 1: 
                                    cout<<"\n¡Muy bien, te emociona la aventura y quieres explorar más de ese mundo!. Estas decidido a continuar la aventura.\n";
                                    cout<<"Para continuar la aventura tendrá que aprobar esta demo.\n";
                                    cout<<"Continuará...\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 2: 
                                    cout<<"\nLa criatura se da cuenta de que eres un cobarde y mejor te deja ir a tu mundo.\n";
                                    cout<<"Regresas a tu mundo tranquilo. Pero después de un tiempo te arrepientes de tu decision.\n";
                                    cout<<"FIN\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 3:
                                    cout<<"\nLa criatura te entiende y regresas a tu mundo\n";
                                    cout<<"Pero estas decidido a ayudarlos jugando como siempre lo has hecho, pero con la diferencia de que ahora tienen la capacidad de comunicarse.\n";
                                    cout<<"Continuará...";
                                    cout<<"¡Gracias por jugar la demo!. Para continuar con la historia debe aprobar esta misma";

                                    default: cout<<"\nTenías que arrinarlo :P";

                                }

                            }
                            else if(decision == 2){
                                cout<<"\nIgnoras a la voz. Te despides de la criatura y sus compañeros y sales del mundo.\n";
                                cout<<"Quedas intrigado por la voz que escuchaste en el juego y enciendes el videojuego de nuevo, pero no responde.\n";
                                cout<<"FIN\n";
                                cout<<"¡Gracias por jugar!";

                            }
                            else if(decision == 3){
                                cout<<"\nTe alejas demasiado de la criatura la cual era la que te ayudaba a eliminar a los enemigos y terminas encontrandote con un enemigo poderoso.\n";
                                cout<<"¿Que quieres hacer?\n";
                                cout<<"1.- Atacar con lo que has aprendido de la criatura.\n";
                                cout<<"2.- Huir.\n";
                                cout<<"3.- Gritar para pedir ayuda.\n";
                                cout<<" Opcion: ";
                                cin>>decision;

                                switch(decision){

                                    case 1:
                                    cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                                    vida -=50;
                                    cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                    cout<<"Fin del juego.\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 2:
                                    cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                                    vida -=20;
                                    cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                                    cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                                    cout<<"Lamentas su perdida y la voz te propone acabar con la maldad de ese mundo.\n";
                                    cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                                    cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                                    cout<<"¡Gracias por jugar!";
                                    break;

                                    case 3: 
                                    cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                                    vida -=50;
                                    cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                                    cout<<"Fin del juego.\n";
                                    cout<<"¡Gracias por jugar!";

                                    default: cout<<"\nElije una opcion correcta";

                                }
                            }
                            else{
                                cout<<"\nCreo que tienes que leer mejor :P";

                            }

                        }
                        else{
                            cout<<"\nElija una opción correcta por favor.";

                        }

                    }
                    else if(decision == 3){
                        cout<<"\nAl salir corriendo te alejas demasiado de la criatura y terminas encontrandote con un enemigo poderoso.\n";
                        cout<<"¿Que quieres hacer?\n";
                        cout<<"1.- Atacar.\n";
                        cout<<"2.- Huir.\n";
                        cout<<"3.- Gritar para pedir ayuda.\n";
                        cout<<" Opcion: ";
                        cin>>decision;

                        switch(decision){

                            case 1:
                            cout<<"\nNo eres lo suficientemente hábil y terminas perdiendo.\n";
                            vida -=100;
                            cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                            cout<<"Fin del juego.\n";
                            cout<<"¡Gracias por jugar!";
                            break;

                            case 2:
                            cout<<"\nLogras encontrar a la criatura y te ayuda a enfrentar al enemigo.\n";
                            vida -=20;
                            cout<<"Al final derrotan al enemigo y te restan "<<vida<<" puntos de salud.\n";
                            cout<<"La criatura termina mal herida y con su último esfuerzo te dice en donde puedes encontrar la salida. Al final la criatura muere...\n";
                            cout<<"Lamentas su perdida y una voz te propone acabar con la maldad de ese mundo.\n";
                            cout<<"Aceptas y te adentras en la aventura.\n Continuará...\n";
                            cout<<"Para continuar la aventura tiene que aprobar esta demo.\n";
                            cout<<"¡Gracias por jugar!";
                            break;

                            case 3: 
                            cout<<"\nNadie te escucha y el enemigo termina contigo\n";
                            vida -=100;
                            cout<<"Tu vida se reduce a "<<vida<<" puntos de salud.\n";
                            cout<<"Fin del juego.\n";
                            cout<<"¡Gracias por jugar!";

                            default: cout<<"\nElije una opcion correcta";

                        }

                    }
                    else{
                        cout<<"\nNecesitas compresión lectora :P";

                    }
                    
                } 
                else{
                    cout<<"\nCreo que no sabes seguir instrucciones. :/";
                    
                }

            } 
            else if (decision == 3){
                cout<<"\nIntentas explorar por tu cuenta pero como no tienes experiencia y nivel mueres.\n";
                vida -=100;
                cout<<"Tu salud se reduce a "<<vida<<" puntos de salud.\n";
                cout<<"Fin del juego.";

            }
            else{
                cout <<"\nOpción no válida. Fin del juego.";
            }
		}
        else if (decision == 2){
            cout<<"\nCae un rayo y ocurre algo fantástico que te transporta a otro mundo.\n";
            cout<<"Te encuentras en un lugar misterioso con criaturas extrañas. Tu salud es de "<<vida<<" puntos.\n";
            cout<<"¿Qué quieres hacer?\n";
            cout<<"1.- Explorar el entorno\n";
            cout<<"2.- Intentar comunicarte con las criaturas\n";
            cout<<"3.- Buscar una salida\n Opción: ";
            cin>>decision;

			

		}
        else if (decision == 3){
            cout<<"\nDejas de jugar y duermes placidamente.\n";
            cout<<"FIN";
        } 
        else{
            cout<<"\nElige una opción válida por favor.";
            
        }  
        break;
		
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