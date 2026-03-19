#include <iostream>
#include "Desafiolibreria.h"

using namespace std;

// Funcion para crear el tablero
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

// PIEZA I
void piezaI(int pieza[4])
{
    pieza[0] = 0b1111;
    pieza[1] = 0;
    pieza[2] = 0;
    pieza[3] = 0;
}

// PIEZA O
void piezaO(int pieza[4])
{
    pieza[0] = 0b11;
    pieza[1] = 0b11;
    pieza[2] = 0;
    pieza[3] = 0;
}

// PIEZA T
void piezaT(int pieza[4])
{
    pieza[0] = 0b010;
    pieza[1] = 0b111;
    pieza[2] = 0;
    pieza[3] = 0;
}

// PIEZA S
void piezaS(int pieza[4])
{
    pieza[0] = 0b011;
    pieza[1] = 0b110;
    pieza[2] = 0;
    pieza[3] = 0;
}

// PIEZA Z
void piezaZ(int pieza[4])
{
    pieza[0] = 0b110;
    pieza[1] = 0b011;
    pieza[2] = 0;
    pieza[3] = 0;
}

// PIEZA L
void piezaL(int pieza[4])
{
    pieza[0] = 0b100;
    pieza[1] = 0b111;
    pieza[2] = 0;
    pieza[3] = 0;
}

// PIEZA J
void piezaJ(int pieza[4])
{
    pieza[0] = 0b001;
    pieza[1] = 0b111;
    pieza[2] = 0;
    pieza[3] = 0;
}

// Funcion para imprimir el tablero con una pieza activa
void imprimirTableroConPieza(int* tablero, int ancho, int alto, int pieza[4], int filaPieza, int colPieza)
{
    for(int i = 0; i < alto; i++)
    {
        for(int j = ancho - 1; j >= 0; j--)
        {
            bool ocupado = false;

            // Revisar si el tablero ya tiene bloque fijo
            if(tablero[i] & (1 << j))
            {
                ocupado = true;
            }

            // Revisar si la pieza activa ocupa esta posicion
            int filaLocal = i - filaPieza;

            if(filaLocal >= 0 && filaLocal < 4)
            {
                int filaDesplazada = pieza[filaLocal] << colPieza;

                if(filaDesplazada & (1 << j))
                {
                    ocupado = true;
                }
            }

            if(ocupado)
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

// Menu de acciones
void mostrarMenu()
{
    cout << "\nAccion: [A]Izq [D]Der [S]Bajar [W]Rotar [Q]Salir: ";
}

// Movimiento a la izquierda
void moverIzquierda(int &colPieza)
{
    if(colPieza > 0)
    {
        colPieza--;
    }
}

// Movimiento a la derecha
void moverDerecha(int &colPieza, int ancho)
{
    if(colPieza < ancho - 4)
    {
        colPieza++;
    }
}

// Movimiento hacia abajo
void bajarPieza(int &filaPieza, int alto)
{
    if(filaPieza < alto - 4)
    {
        filaPieza++;
    }
}

// Rotacion aun no implementada
void rotarPieza()
{
    cout << "Rotacion aun no implementada." << endl;
}
