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

<<<<<<< HEAD
=======
    // Se valida que el ancho sea multiplo de 8
>>>>>>> db88b9b8d2022a6ec1db696b3e018cce8633a9cb
    if(ancho % 8 != 0)
    {
        cout << "El ancho debe ser multiplo de 8" << endl;
        return 0;
    }

<<<<<<< HEAD
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
=======
    // Se crea el tablero usando memoria dinamica
    int* tablero = crearTablero(alto);

    // Se imprime el tablero en consola
    imprimirTablero(tablero, ancho, alto);

    // Se libera la memoria
    delete[] tablero;

    return 0;

>>>>>>> db88b9b8d2022a6ec1db696b3e018cce8633a9cb
}
