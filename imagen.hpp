#include "clases.hpp"

Imagen::Imagen(string nombreDeCeleb, string resp, int x, int y)
{
    this->nombreCeleb = nombreCeleb;
    this->resp = "Incorrecto";
    this->x = 0;
    this->y = 0;
}

Imagen::Imagen(string nombreDeCeleb, string url)
{
    this->nombreCeleb = nombreCeleb;
    this->url = url;
}

Imagen::Imagen(string nombreDeCeleb, string url, Sprite spri)
{
    this->nombreCeleb = nombreCeleb;
    this->url = url;
    this->sprite = spri;
}

void Imagen::drawTo(RenderWindow &window)
{
    window.draw(this->sprite);
}

void Jugador::mostrar()
{
    cout << "Nombre: " << this->nombre << endl;
    cout << "Puntuacion: " << this->puntuacion << endl;
}

Jugador::Jugador(string nombre, int puntuacion)
{
    this->nombre = nombre;
    this->puntuacion = puntuacion;
}