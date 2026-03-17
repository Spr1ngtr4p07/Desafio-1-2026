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

    int* tablero = crearTablero(alto);

    
    delete[] tablero;

    return 0;
    // Se crea el tablero usando memoria dinamica
    int* tablero = crearTablero(alto);

    // Se imprime el tablero en consola
    imprimirTablero(tablero, ancho, alto);

    // Se libera la memoria
    delete[] tablero;

    return 0;

