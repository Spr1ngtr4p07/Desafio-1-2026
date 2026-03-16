#include <iostream>
#include "Desafiolibreria.h"

using namespace std;

// Funcion que crea el tablero con memoria dinamica
int* crearTablero(int alto)
{
    int* tablero = new int[alto];

    for(int i = 0; i < alto; i++)
    {
        tablero[i] = 0;
    }

    return tablero;
}

// Funcion que imprime el tablero
void imprimirTablero(int* tablero, int ancho, int alto)
{
    for(int i = 0; i < alto; i++)
    {
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

    // PIEZA L
    piezas[3].tam = 3;
    piezas[3].forma[0][0] = 0b0111;
    piezas[3].forma[0][1] = 0b0001;
    piezas[3].forma[0][2] = 0b0000;
    piezas[3].forma[0][3] = 0b0000;

    piezas[3].forma[1][0] = 0b0011;
    piezas[3].forma[1][1] = 0b0010;
    piezas[3].forma[1][2] = 0b0010;
    piezas[3].forma[1][3] = 0b0000;

    piezas[3].forma[2][0] = 0b0100;
    piezas[3].forma[2][1] = 0b0111;
    piezas[3].forma[2][2] = 0b0000;
    piezas[3].forma[2][3] = 0b0000;

    piezas[3].forma[3][0] = 0b0001;
    piezas[3].forma[3][1] = 0b0001;
    piezas[3].forma[3][2] = 0b0011;
    piezas[3].forma[3][3] = 0b0000;

    // PIEZA J
    piezas[4].tam = 3;
    piezas[4].forma[0][0] = 0b0111;
    piezas[4].forma[0][1] = 0b0100;
    piezas[4].forma[0][2] = 0b0000;
    piezas[4].forma[0][3] = 0b0000;

    piezas[4].forma[1][0] = 0b0010;
    piezas[4].forma[1][1] = 0b0010;
    piezas[4].forma[1][2] = 0b0011;
    piezas[4].forma[1][3] = 0b0000;

    piezas[4].forma[2][0] = 0b0001;
    piezas[4].forma[2][1] = 0b0111;
    piezas[4].forma[2][2] = 0b0000;
    piezas[4].forma[2][3] = 0b0000;

    piezas[4].forma[3][0] = 0b0011;
    piezas[4].forma[3][1] = 0b0001;
    piezas[4].forma[3][2] = 0b0001;
    piezas[4].forma[3][3] = 0b0000;

    // PIEZA S
    piezas[5].tam = 3;
    piezas[5].forma[0][0] = 0b0011;
    piezas[5].forma[0][1] = 0b0110;
    piezas[5].forma[0][2] = 0b0000;
    piezas[5].forma[0][3] = 0b0000;

    piezas[5].forma[1][0] = 0b0010;
    piezas[5].forma[1][1] = 0b0011;
    piezas[5].forma[1][2] = 0b0001;
    piezas[5].forma[1][3] = 0b0000;

    piezas[5].forma[2][0] = 0b0011;
    piezas[5].forma[2][1] = 0b0110;
    piezas[5].forma[2][2] = 0b0000;
    piezas[5].forma[2][3] = 0b0000;

    piezas[5].forma[3][0] = 0b0010;
    piezas[5].forma[3][1] = 0b0011;
    piezas[5].forma[3][2] = 0b0001;
    piezas[5].forma[3][3] = 0b0000;

    // PIEZA Z
    piezas[6].tam = 3;
    piezas[6].forma[0][0] = 0b0110;
    piezas[6].forma[0][1] = 0b0011;
    piezas[6].forma[0][2] = 0b0000;
    piezas[6].forma[0][3] = 0b0000;

    piezas[6].forma[1][0] = 0b0001;
    piezas[6].forma[1][1] = 0b0011;
    piezas[6].forma[1][2] = 0b0010;
    piezas[6].forma[1][3] = 0b0000;

    piezas[6].forma[2][0] = 0b0110;
    piezas[6].forma[2][1] = 0b0011;
    piezas[6].forma[2][2] = 0b0000;
    piezas[6].forma[2][3] = 0b0000;

    piezas[6].forma[3][0] = 0b0001;
    piezas[6].forma[3][1] = 0b0011;
    piezas[6].forma[3][2] = 0b0010;
    piezas[6].forma[3][3] = 0b0000;
}
