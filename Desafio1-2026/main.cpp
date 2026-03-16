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

    if(ancho % 8 != 0)
    {
        cout << "El ancho debe ser multiplo de 8" << endl;
        return 0;
    }

    int* tablero = crearTablero(alto);

    Pieza piezas[7];
    inicializarPiezas(piezas);

    cout << "\nTablero inicial:\n";
    imprimirTablero(tablero, ancho, alto);

    cout << "\nPiezas inicializadas correctamente." << endl;
    cout << "Tamano de la pieza I: " << piezas[0].tam << endl;
    cout << "Primera fila de la pieza T en rotacion 0: " << piezas[2].forma[0][0] << endl;

    delete[] tablero;

    return 0;
}
