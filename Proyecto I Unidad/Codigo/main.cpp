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

    cout<<"**************\n";
    cout<<"MENU DE JUEGOS\n";
    cout<<"**************\n";
    cout<<" 1- StarShip\n";
    cout<<" 2- Snake\n";
    cout<<"Ingrese una opcion del menu para seleccionar un juego\n";
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