#ifndef clases_h
#define clases_h

#include <iostream>
using namespace std;

class Imagen
{
private:
    void random();
    string resp;
    int Cx;
    int Cy;

public:
    string nombreCeleb;
    void Reglas;
    int oportunidades;

    Imagen();
    juego (string nombreCeleb, int oportunidades);

};

class Jugador
{
private:
    int id;

public:
    string nombre;
    int getId;
    int puntuacion;

    void mostrar();
    Jugador* getUsuario(int id);
    void mostrarUsuarios() ;
    Jugador();
    Jugador(string nombre);
    Jugador(string nombre, int puntuacion);
};

class Celebridad()
{

};

#endif