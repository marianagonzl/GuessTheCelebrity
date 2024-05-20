#include <SFML/Graphics.hpp>
#include <bits/stdc++.h>
using namespace sf;
using namespace std;

int main()
{
    RenderWindow window(VideoMode(400, 400), "Ohaio onichan!");
    Texture yoshiTexture;
    if(!yoshiTexture.loadFromFile("assets/Yoshi.png"))
    {
        cout << "Error kawaii onichan" << endl;
        system("pause");
    }

    Sprite yoshi;
    yoshi.setTexture(yoshiTexture);
    yoshi.setTextureRect(IntRect(0,0,800,180));
    yoshi.setColor(Color(255,255,255));

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(yoshi);
        window.display();
    }

    return 0;
}