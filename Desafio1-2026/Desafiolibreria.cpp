
#include <iostream>
#include "Desafiolibreria.h"


using namespace std;

// Funcion que crea el tablero con memoria dinamica
int* crearTablero(int alto)
{
    // Se reserva memoria para el tablero
    // Cada posicion del arreglo representa una fila
    int* tablero = new int[alto];

    // Se recorren todas las filas
    for(int i = 0; i < alto; i++)
    {
        // Se inicializa cada fila en 0
        tablero[i] = 0;
    }

    // Se devuelve el puntero al tablero
    return tablero;

}

//  imprime el tablero
void imprimirTablero(int* tablero, int ancho, int alto)
{
    // Recorre cada fila del tablero
    for(int i = 0; i < alto; i++)
    {
        // Recorre cada columna de la fila
        for(int j = ancho - 1; j >= 0; j--)
        {
            // Se revisa si el bit j esta encendido
            // Ejemplo: si j = 3 -> 00001000
            if(tablero[i] & (1 << j))
            {
                // Si el bit esta encendido
                cout << "#";
            }
            else
            {
                // Si el bit esta apagado
                cout << ".";
            }
        }

        // Salto de linea para imprimir la siguiente fila
        cout << endl;
    }

}
