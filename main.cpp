#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

#include "clases.hpp"
#include "imagen.hpp"

vector<Imagen *> imagenesNivel1;
int x = rand() % 190 + 200;
int y = rand() % 190 + 250;

int main()
{
    RenderWindow window(VideoMode(700, 700), "Ohaio onichan!");
    window.setFramerateLimit(60);
    Texture CelebrityTexture;
    //1
    if(!CelebrityTexture.loadFromFile("imagenes/TaylorSwift.jpg"))
    {
        cout << "Error al cargar imagen" << endl;
    }
    CelebrityTexture.setRepeated(true);

    Sprite Celebrity;
    Celebrity.setTexture(CelebrityTexture);
    Celebrity.setTextureRect(IntRect(0, 0, x, y));
    
    Imagen *img = new Imagen("TaylorSwift", "imagenes/TaylorSwift.jpg", Celebrity);

    //2
    if(!CelebrityTexture.loadFromFile("imagenes/Kanye.jpg"))
    {
        cout << "Error al cargar imagen" << endl;
    }
    CelebrityTexture.setRepeated(true);

    Sprite Celebrity;
    Celebrity.setTexture(CelebrityTexture);
    Celebrity.setTextureRect(IntRect(0, 0, x, y));
    Imagen *img2 = new Imagen("KanyeWest", "imagenes/Kanye.jpg", Celebrity);

    //3
    if(!CelebrityTexture.loadFromFile("imagenes/Selena.jpg"))
    {
        cout << "Error al cargar imagen" << endl;
    }
    CelebrityTexture.setRepeated(true);

    Sprite Celebrity;
    Celebrity.setTexture(CelebrityTexture);
    Celebrity.setTextureRect(IntRect(0, 0, x, y));
    Imagen *img3 = new Imagen("SelenaGomez", "imagenes/Selena.jpg", Celebrity);

    //4
    if(!CelebrityTexture.loadFromFile("imagenes/Adam.jpg"))
    {
        cout << "Error al cargar imagen" << endl;
    }
    CelebrityTexture.setRepeated(true);

    Sprite Celebrity;
    Celebrity.setTexture(CelebrityTexture);
    Celebrity.setTextureRect(IntRect(0, 0, x, y));
    Imagen *img4 = new Imagen("AdamSandler", "imagenes/Adam.jpg", Celebrity);

    //5
    if(!CelebrityTexture.loadFromFile("imagenes/Olivia.jpg"))
    {
        cout << "Error al cargar imagen" << endl;
    }
    CelebrityTexture.setRepeated(true);

    Sprite Celebrity;
    Celebrity.setTexture(CelebrityTexture);
    Celebrity.setTextureRect(IntRect(0, 0, x, y));
    Imagen *img5 = new Imagen("OliviaRodrigo", "imagenes/Olivia.jpg", Celebrity);
    
    imagenesNivel1.push_back(img);
    imagenesNivel1.push_back(img2);
    imagenesNivel1.push_back(img3);
    imagenesNivel1.push_back(img4);
    imagenesNivel1.push_back(img5);

    
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
        window.display();
    }

    return 0;
}



