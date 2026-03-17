#include <iostream>
#include "Desafiolibreria.h"

using namespace std;

int main()
{
    int ancho;
    int alto;

    cout << "Ingrese el ancho del tablero: ";
    cin >> ancho;

    cout << "Ingrese el alto del tablero: ";
    cin >> alto;

    if(ancho < 8 || alto < 8)
    {
        cout << "El tamaño minimo es 8x8" << endl;
        return 0;
    }

    // Se valida que el ancho sea multiplo de 8
    if(ancho % 8 != 0)
    {
        cout << "El ancho debe ser multiplo de 8" << endl;
        return 0;
    }

    // Se crea el tablero
    int* tablero = crearTablero(alto);

    char opcion = ' ';

    //ciclo
    while(opcion != 'Q' && opcion != 'q')
    {

        imprimirTablero(tablero, ancho, alto);

        mostrarMenu();

        cin >> opcion;

        if(opcion == 'A' || opcion == 'a')
        {
            moverIzquierda();
        }
        else if(opcion == 'D' || opcion == 'd')
        {
            moverDerecha();
        }
        else if(opcion == 'S' || opcion == 's')
        {
            bajarPieza();
        }
        else if(opcion == 'W' || opcion == 'w')
        {
            rotarPieza();
        }
    }

    // liberar memoria
    delete[] tablero;

    return 0;
}
