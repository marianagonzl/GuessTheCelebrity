#ifndef clases_h
#define clases_h

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace std;
using namespace sf;

class Imagen
{
public:
    void random();
    int x;
    int y;
    Texture textura;
    Sprite sprite;


    string nombreCeleb;
    string resp;
    string url;
    string Reglas;
    int oportunidades;

    Imagen();
    Imagen(string nombreDeCeleb, string resp, int x, int y);
    Imagen(string nombreDeCeleb, string url);
    Imagen(string nombreDeCeleb, string url, Sprite spri);
    void juego (string nombreCeleb, int oportunidades);
    void drawTo(RenderWindow &window);

};

class Jugador
{
public:
    string nombre;
    int puntuacion = 50;

    void mostrar();
    Jugador();
    Jugador(string nombre, int puntuacion);
};

class Celebridad
{
    public:
    string nivel1[5] = {"TaylorSwift","KanyeWest","SelenaGomez","AdamSandler","OliviaRodrigo"};
    string nivel2[5] = {"EmmaWatson","LeonardoDicaprio","Rihanna","TomHiddleston","HenryCavill"};
    string nivel2[5] = {"CillianMurphy","BellaHadid","WalkerScobell","SebastianStan","MerylStreep"};

};

void Reglas();
void random();
void juego(string nombreCeleb, int oportunidades, RenderWindow &window);
#endif