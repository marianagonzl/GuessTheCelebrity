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

    if(!CelebrityTexture.loadFromFile("imagenes/TaylorSwift.jpg"))
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

        window.clear(Color(51,51,51));
        window.draw(Celebrity);
        Celebrity.setColor(Color(255,255,255));
        window.display();
    }

    return 0;
}



