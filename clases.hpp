#ifndef clases_h
#define clases_h

#include <iostream>
#include <string>
using namespace std;

class Imagen
{
private:
    void random();
    string resp;
    int x;
    int y;

public:
    string nombreCeleb;
    string Reglas;
    int oportunidades;

    Imagen();
    void juego (string nombreCeleb, int oportunidades);

};

class Jugador
{
private:
    int id;

public:
    string nombre;
    int getId;
    int puntuacion = 50;

    void mostrar();
    Jugador* getUsuario(int id);
    void mostrarUsuarios() ;
    Jugador();
    Jugador(string nombre);
    Jugador(string nombre, int puntuacion);
};

class Celebridad
{
    public:
    string nivel1[5] = {"TaylorSwift","KanyeWest","SelenaGomez","AdamSandler","OliviaRodrigo"};
    string nivel2[5] = {"EmmaWatson","LeonardoDicaprio","Rihanna","TomHiddleston","HenryCavill"};
    string nivel2[5] = {"CillianMurphy","BellaHadid","WalkerScobell","SebastianStan","MerylStreep"};

};

#endif