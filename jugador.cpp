#include "clases.hpp"

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
