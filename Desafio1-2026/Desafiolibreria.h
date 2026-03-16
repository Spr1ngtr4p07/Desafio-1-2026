#ifndef DESAFIOLIBRERIA_H
#define DESAFIOLIBRERIA_H
/*
Esta libreria sirve para.............
*/

#include <iostream>

using namespace std;

// Funcion que crea el tablero en memoria dinamica
// Recibe el alto (numero de filas)
// Devuelve un puntero al tablero creado
int* crearTablero(int alto);

// Funcion que imprime el tablero en consola
// tablero -> arreglo que guarda las filas
// ancho -> numero de columnas
// alto -> numero de filas
void imprimirTablero(int* tablero, int ancho, int alto);

#endif // DESAFIOLIBRERIA_H


