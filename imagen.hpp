#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
#include "clases.hpp"

int imagenlol;
vector<Imagen *> imagenesNivel1;
string img;

int x = rand() % 190 + 200;
int y = rand() % 190 + 250;

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

    cout << "Primera coordenada: (" << x << ", " << y << ")" << endl;
    cout << "Segunda coordenada: (" << x + 100 << ", " << y << ")" << endl;
    cout << "Tercera coordenada: (" << x << ", " << y - 100 << ")" << endl;
    cout << "Cuarta coordenada: (" << x + 100 << ", " << y - 100 << ")" << endl;

    return;
}

void juego(string nombreCeleb, int oportunidades)
{
    Imagen *img = new Imagen("TaylorSwift", "imagenes/TaylorSwift.jpg");
    Imagen *img = new Imagen("KanyeWest", "imagenes/Kanye.jpg");
    Imagen *img = new Imagen("SelenaGomez", "imagenes/Selena.jpg");
    Imagen *img = new Imagen("AdamSandler", "imagenes/Adam.jpg");
    Imagen *img = new Imagen("OliviaRodrigo", "imagenes/Olivia.jpg");

    while (oportunidades <= 5)
    {
        int resp;
        int puntuacion = 50;
        cout << "Escribe el nombre de la celebridad" << endl;
        cout << "Recuerda escribir el nombre sin espacios y en minusculas" << endl;
        cin >> resp;
        if (resp != nombreDeCeleb)
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

Imagen::Imagen(string nombreDeCeleb, string resp, int x, int y)
{
    this->nombreCeleb = "Desconocido";
    this->resp = "Incorrecto";
    this->x = 0;
    this->y = 0;
}
