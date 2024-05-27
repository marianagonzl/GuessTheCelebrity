#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

#include "clases.hpp"
#include "imagen.hpp"

int main()
{
    RenderWindow window(VideoMode(700, 700), "Ohaio onichan!");
    window.setFramerateLimit(60);
    Texture CelebrityTexture;

    if(!CelebrityTexture.loadFromFile(Imagen *img[imagenlol]))
    {
        cout << "Error al cargar imagen" << endl;
    }
    CelebrityTexture.setRepeated(true);

    Sprite Celebrity;
    Celebrity.setTexture(CelebrityTexture);
    Celebrity.setTextureRect(IntRect(0, 0, x, y));
    
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        void juego();

        window.clear(Color(51,51,51));
        window.draw(Imagen *img[imagenlol]->getSprite());
        window.display();
    }

    return 0;
}



