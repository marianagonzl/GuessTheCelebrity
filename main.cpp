#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;



int main()
{
    RenderWindow window(VideoMode(800, 400), "Ohaio onichan!");
    window.setFramerateLimit(60);
    Texture TaylorTexture;

    if(!TaylorTexture.loadFromFile("assets/yoshinobg.png"))
    {
        cout << "Error al cargar imagen" << endl;
    }
    TaylorTexture.setRepeated(true);

    Sprite Taylor;
    Taylor.setTexture(TaylorTexture);
    Taylor.setTextureRect(IntRect(0, 0, Cx, cy));
    int opacidad = 0;
    
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear(Color(51,51,51));
        window.draw(Taylor);
        Taylor.setColor(Color(255,255,255));
        window.display();
    }

    return 0;
}



