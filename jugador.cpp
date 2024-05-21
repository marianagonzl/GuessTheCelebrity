#include "clases.h"


int Jugador::getId(){
    return this->id;
}

void Jugador::mostrar(){
cout<< "ID: "<<this->id<<endl;
cout<< "Nombre: "<<this->nombre<<endl;
cout<< "Puntuacion: "<<this->puntuacion<<endl;
}


Jugador::Jugador(string nombre){
    this->id = rand() % 1000; 
    this->nombre = nombre;
    this->puntuacion = 50;
}

Jugador::Jugador(string nombre, int puntuacion){
    this->id = rand() % 1000; 
    this->nombre = nombre;
    this->puntuacion = puntuacion;
}


Jugador::Jugador ()
{
this->id = rand() % 1000; 
}

void Redsocial::agregarUsuario()
{
    Jugador *nuevoUs = new Jugador();
    cout << "Vas a crear un nuevo usuario" << endl;
    cout << "Dame tu nombre" << endl;
    cin >> nuevoUs->nombre;
    usuarios.push_back(nuevoUs);
    numeroDeUsuarios++;
    cout<<"Creaste un nuevo usuario amigue UwU"<<endl<<endl;
}

Jugador *player::getUsuario(int id)
{
    for (int i = 0; i < jugadores.size(); ++i)
    {
        if (usuarios[i]->getId() == id)
        {
            return jugadores[i];
        }
    }

    cout << "No existe ningun usuario con este Id" << endl;
    cout<<endl;
    return nullptr;
}