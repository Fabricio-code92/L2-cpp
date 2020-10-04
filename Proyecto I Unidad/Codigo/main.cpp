#include <iostream>
#include "startShip.h"
#include "snake.h"

void Menu();

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");

    Menu();

    //clearstarShip();
    //snake();

    return 0;
}

void Menu()
{
    int op;

    cout<<"**************";
    cout<<"MENU DE JUEGOS";
    cout<<"**************";
    cout<<" 1- StarShip";
    cout<<" 2- Snake";
    cout<<"Ingrese una opcion del menu para seleccionar un juego";
    cin>>op;
   

    switch (op)
    {
    case 1:
        starShip();
        break;
    
    case 2:
        snake();
        break;
    }

}