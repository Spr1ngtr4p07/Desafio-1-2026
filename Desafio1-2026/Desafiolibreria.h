#ifndef DESAFIOLIBRERIA_H
#define DESAFIOLIBRERIA_H

#include <iostream>

using namespace std;

// Funcion que crea el tablero en memoria dinamica
// Devuelve un puntero al tablero creado
int* crearTablero(int alto);

// Funcion que imprime el tablero en consola
// tablero -> arreglo que guarda las filas
// ancho -> numero de columnas
// alto -> numero de filas
void imprimirTablero(int* tablero, int ancho, int alto);

// Mostrar pieza activa sobre el tablero
void imprimirTableroConPieza(int* tablero, int ancho, int alto, int pieza[4], int filaPieza, int colPieza);

// Menu
void mostrarMenu();

// Movimiento de la pieza
void moverIzquierda(int &colPieza);
void moverDerecha(int &colPieza, int ancho);
void bajarPieza(int &filaPieza, int alto);
void rotarPieza();

// Funciones de las piezas
void piezaI(int pieza[4]);
void piezaO(int pieza[4]);
void piezaT(int pieza[4]);
void piezaS(int pieza[4]);
void piezaZ(int pieza[4]);
void piezaL(int pieza[4]);
void piezaJ(int pieza[4]);

// Para mover las piezas
void moverIzquierda();
void moverDerecha();
void bajarPieza();
void rotarPieza();

void mostrarMenu();


// Funcion para inicializar las 7 piezas de Tetris

#endif // DESAFIOLIBRERIA_H


