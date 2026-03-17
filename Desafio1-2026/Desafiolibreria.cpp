
#include <iostream>
#include "Desafiolibreria.h"


using namespace std;

// Funcion para crea el tablero
int* crearTablero(int alto)
{
    // Se reserva memoria para el tablero
    int* tablero = new int[alto];

    // Se recorren todas las filas
    for(int i = 0; i < alto; i++)
    {
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
            if(tablero[i] & (1 << j))
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }
}

void mostrarMenu()
{
    cout << "\nAccion: [A]Izq [D]Der [S]Bajar [W]Rotar [Q]Salir: ";
}

void moverIzquierda(){}
void moverDerecha(){}
void bajarPieza(){}
void rotarPieza(){}










