#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

int x, y;

int main()
{
    RenderWindow window(VideoMode(700, 700), "Ohaio onichan!");
    window.setFramerateLimit(60);
    Texture CelebrityTexture;

    if(!CelebrityTexture.loadFromFile(imagenesNivel1[imagenlol]))
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
        window.draw(imagenesNivel1[imagenlol]->getSprite());
        window.display();
    }

    return 0;
}



