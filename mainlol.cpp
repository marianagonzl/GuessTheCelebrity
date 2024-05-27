// #include <bits/stdc++.h>
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
#include "presentacion.hpp"


void menuPrincipal()
{
    int num;

    cout << "Bienvenide a Guess the Celebrity" << endl;
    string nombJugador;
    cout << "Escribe tu nombre: " << endl;
    cin >> nombJugador;
inicio:
    cout << "Introduce un numero para realizar una de las siguientes acciones: " << endl;
    cout << "1. Jugar" << endl;
    cout << "0. Salir" << endl;
    cin >> num;
    system("cls");
    switch (num)
    {
    case 1:
        void juego();
        break;

    case 0:
        goto inicio;
        break;

    default:
        cout << "Ingresa una de las opciones validas" << endl;
        goto inicio;
    }
}

int main()
{
    menuPrincipal();
    return 0;
}