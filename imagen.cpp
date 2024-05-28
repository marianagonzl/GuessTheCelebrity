#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
#include "clases.hpp"
#include "imagen.hpp"

vector<Imagen *> imagenesNivel1;
// string img;

void Reglas()
{
    cout << "Introduce un numero para realizar una de las siguientes acciones: " << endl;
    cout << "1. Agrandar la imagen" << endl;
    cout << "2. Recibir pista" << endl;
    cout << "0. salir" << endl;
}

/*void random()
{
    // mostrar una parte random de la imagen
    /// Rango de 194 a 450

    cout << "Primera coordenada: (" << x << ", " << y << ")" << endl;
    cout << "Segunda coordenada: (" << x + 100 << ", " << y << ")" << endl;
    cout << "Tercera coordenada: (" << x << ", " << y - 100 << ")" << endl;
    cout << "Cuarta coordenada: (" << x + 100 << ", " << y - 100 << ")" << endl;

    return;
}*/

void juego(string nombreCeleb, int oportunidades, RenderWindow &window)
{

    for (int i = 0; i < imagenesNivel1.size(); i++)
    {
        imagenesNivel1[i]->drawTo(window);
    }

    // Imagen *imgSeleccionada = img;

    if (oportunidades <= 5)
    {
        string resp;
        int puntuacion = 50;

        cout << "Escribe el nombre de la celebridad" << endl;
        cout << "Recuerda escribir el nombre sin espacios y en minusculas" << endl;
        cin >> resp;

        while (window.isOpen())
        {
            Event event;
            while (window.pollEvent(event))
            {
                if (event.type == Event::Closed)
                    window.close();

                if (event.type == sf::Event::MouseButtonPressed)
                {
                    // Check if left mouse button is pressed
                    if (event.mouseButton.button == sf::Mouse::Left)
                    {
                        (Mouse::getPosition(window).x, Mouse::getPosition(window).y);
                    }
                }
            }
        }

        /*  if (resp != imagenesNivel1->nombreCeleb)
          {
              cout << "Incorrecto tilin" << endl;
              cout << "- 10 pts" << endl;
              puntuacion = -10;
              oportunidades++;
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
      */
    }
}