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
    /// Rango de 194 a 450
    x = rand() % 190 + 200;
    y = rand() % 190 + 250;

    cout << "Primera coordenada: (" << x << ", " << y << ")" << endl;
    cout << "Segunda coordenada: (" << x + 100 << ", " << y << ")" << endl;
    cout << "Tercera coordenada: (" << x << ", " << y - 100 << ")" << endl;
    cout << "Cuarta coordenada: (" << x + 100 << ", " << y - 100 << ")" << endl;

    return 0;
}

void juego(string nombreCeleb, int oportunidades)
{
    for(int i=0; i<5; i++)
    {
        if(i=0)
        {
    CelebrityTexture.loadFromFile("imagenes/TaylorSwift.jpg");
    Sprite Taylor;
    Taylor.setTexture(TaylorTexture);
    Taylor.setTextureRect(IntRect(0,0,x,y))
        }

 if(i=1)
        {
    CelebrityTexture.loadFromFile("imagenes/TaylorSwift.jpg")
        }




        while (oportunidades <= 5)
    {
        int resp;
        cout << "Escribe el nombre de la celebridad" << endl;
        cout << "Recuerda escribir el nombre sin espacios y en minusculas" << endl;
        cin >> resp;
        if (resp = !nombreDeCeleb)
        {
            cout << "Incorrecto tilin" << endl;
            cout << "- 10 pts" << endl;
            puntuacion = -10;
            oportunidades--;
            cout << "Tienes " << oportunidades << " oportunidades " << endl;
        }
        else
        {
            cout << "Le atinaste kawaii" << endl;
            cout << "+ 20 pts" << endl;
            puntuacion = +20;
            cout << "Tu puntuacion es de: " << puntuacion << endl;
        }
        if (oportunidades < 5)
        {
            cout << "Perdiste looser" << endl;
        }
    }
    }
    

    Imagen::Imagen()
    {
    }
}
