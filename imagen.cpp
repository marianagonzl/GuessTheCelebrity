#include "clases.h"

void Reglas()
{
    cout << "Introduce un numero para realizar una de las siguientes acciones: " << endl;
    cout << "1. Agrandar la imagen" << endl;
    cout << "2. Recibir pista" << endl;
    cout << "0. salir" << endl;
}

void random()
{
    // mostrar una parte random de la imagen
    int Cx = rand() % 1000;
    int Cy = rand() % 1000;

}

void juego(string nombreCeleb, int oportunidades)
{
    while(oportunidades<=5)
{
    int resp;
    cout << "Escribe el nombre de la celebridad" << endl;
    cout << "Recuerda escribir el nombre sin espacios y en minusculas" << endl;
    cin >> resp;
    if(resp=!nombreDeCeleb)
    {
        cout << "Incorrecto tilin" << endl;
        cout << "- 10 pts" << endl;
        puntuacion =- 10;
        oportunidades --;
        cout << "Tienes " << oportunidades <<  " oportunidades " << endl;  
    }
    else
    {
        cout << "Le atinaste kawaii" << endl;
        cout << "+ 20 pts" << endl;
        puntuacion =- 10;
        cout << "Tu puntuacion es de: " << puntuacion << endl;
    }
    if(oportunidades<5)
    {
        cout << "Perdiste looser" << endl;
    }
}

Imagen::Imagen()
{
    
}
}
