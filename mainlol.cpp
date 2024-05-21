//#include <bits/stdc++.h>
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
#include "presentacion.hpp"

void menuJugador(Jugador *player);
Jugador *player;
Juego GuessTheCelebrity("GuessTheCelebrity");

int menuprincipal()
{
    Instruc();
    int num;
    inicio:
    cout << "Has jugado antes? " << endl;
    cout << "1. Si" << endl;
    cout << "2. No" << endl;
    cin >> num;
    system("cls");
    switch (num)
    {
    case 1:
        int idusu;
        cout << "Escribe tu id para identificación: " << endl;
        cin >> idusu;

        jugador = GuessTheCelebrity.getUsuario(idusu);
        if (jugador != nullptr)
        {
            menuJugador(jugador);
        }

        goto ;
        break;

        case 2:
        cout << "Agregar un nuevo usuario" << endl;
        GuessTheCelebrity.agregarUsuario();
        goto menuJugador;
        break;

    /*case 1:
        cout << "Listado de todos los usuarios que existen y sus puntajes maximos" << endl;
        GuessTheCelebrity.mostrarUsuarios();
        goto inicio;
        break;*/

    default:
        cout << "Ingresa una de las opciones validas" << endl;
        goto inicio;
    }
fin:
    return 0;
}

void menuJugador(Jugador *player)
{
    int num;

    cout << "Bienvenido a Famous crushes" << endl;
    inicio:
    cout << "Introduce un numero para realizar una de las siguientes acciones: " << endl;
    cout << "1. Jugar" << endl;
    cout << "0. Salir" << endl;
    cin >> num;
    system("cls");
    switch (num)
    {
    case 1:
        usu->mostrarAmigos();
        goto inicio;
        break;

    case 0:
        menuprincipal();
        break;

    default:
        cout << "Ingresa una de las opciones validas" << endl;
        goto inicio;
    }

int main()
{
    menuprincipal();
    return 0;
}