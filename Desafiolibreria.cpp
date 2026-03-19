
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

// Funcion para inicializar las 7 piezas de Tetris
/*
void inicializarPiezas(Pieza piezas[7])
{
    // PIEZA I
    piezas[0].tam = 4;
    piezas[0].forma[0][0] = 0b1111;
    piezas[0].forma[0][1] = 0b0000;
    piezas[0].forma[0][2] = 0b0000;
    piezas[0].forma[0][3] = 0b0000;

    piezas[0].forma[1][0] = 0b0001;
    piezas[0].forma[1][1] = 0b0001;
    piezas[0].forma[1][2] = 0b0001;
    piezas[0].forma[1][3] = 0b0001;

    piezas[0].forma[2][0] = 0b1111;
    piezas[0].forma[2][1] = 0b0000;
    piezas[0].forma[2][2] = 0b0000;
    piezas[0].forma[2][3] = 0b0000;

    piezas[0].forma[3][0] = 0b0001;
    piezas[0].forma[3][1] = 0b0001;
    piezas[0].forma[3][2] = 0b0001;
    piezas[0].forma[3][3] = 0b0001;

    // PIEZA O
    piezas[1].tam = 2;
    piezas[1].forma[0][0] = 0b0011;
    piezas[1].forma[0][1] = 0b0011;
    piezas[1].forma[0][2] = 0b0000;
    piezas[1].forma[0][3] = 0b0000;

    for(int r = 1; r < 4; r++)
    {
        for(int i = 0; i < 4; i++)
        {
            piezas[1].forma[r][i] = piezas[1].forma[0][i];
        }
    }

    // PIEZA T
    piezas[2].tam = 3;
    piezas[2].forma[0][0] = 0b0111;
    piezas[2].forma[0][1] = 0b0010;
    piezas[2].forma[0][2] = 0b0000;
    piezas[2].forma[0][3] = 0b0000;

    piezas[2].forma[1][0] = 0b0010;
    piezas[2].forma[1][1] = 0b0011;
    piezas[2].forma[1][2] = 0b0010;
    piezas[2].forma[1][3] = 0b0000;

    piezas[2].forma[2][0] = 0b0010;
    piezas[2].forma[2][1] = 0b0111;
    piezas[2].forma[2][2] = 0b0000;
    piezas[2].forma[2][3] = 0b0000;

    piezas[2].forma[3][0] = 0b0001;
    piezas[2].forma[3][1] = 0b0011;
    piezas[2].forma[3][2] = 0b0001;
    piezas[2].forma[3][3] = 0b0000;

    // (Puedes seguir agregando L, J, S, Z igual que ya lo tenías)
}
*/

void mostrarMenu()
{
    cout << "\nAccion: [A]Izq [D]Der [S]Bajar [W]Rotar [Q]Salir: ";
}

void moverIzquierda(){}
void moverDerecha(){}
void bajarPieza(){}
void rotarPieza(){}


