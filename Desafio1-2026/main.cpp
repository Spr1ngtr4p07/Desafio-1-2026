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

    int pieza[4];
    piezaT(pieza);   // puedes cambiar por piezaI, piezaO, piezaL, etc.

    int filaPieza = 0;
    int colPieza = 2;


    char opcion = ' ';

    //ciclo
    while(opcion != 'Q' && opcion != 'q')
    {

        imprimirTableroConPieza(tablero, ancho, alto, pieza, filaPieza, colPieza);

        mostrarMenu();
        cin >> opcion;

        if(opcion == 'A' || opcion == 'a')
        {
            moverIzquierda(colPieza);
        }
        else if(opcion == 'D' || opcion == 'd')
        {
            moverDerecha(colPieza, ancho);
        }
        else if(opcion == 'S' || opcion == 's')
        {
            bajarPieza(filaPieza, alto);
        }
        else if(opcion == 'W' || opcion == 'w')
        {
            rotarPieza();
        }

        cout << endl;
    }

    // liberar memoria
    delete[] tablero;

    return 0;
}

