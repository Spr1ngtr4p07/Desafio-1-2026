#ifndef DESAFIOLIBRERIA_H
#define DESAFIOLIBRERIA_H
/*
<<<<<<< HEAD
Esta libreria sirve para manejar las funciones del tablero
y la representacion de las piezas del juego Tetris
=======
Esta libreria sirve para.............
>>>>>>> db88b9b8d2022a6ec1db696b3e018cce8633a9cb
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

<<<<<<< HEAD
// Estructura para representar una pieza de Tetris
struct Pieza
{
    unsigned int forma[4][4]; // 4 rotaciones y 4 filas
    int tam;                  // tamaño de la pieza
};

// Funcion para inicializar las 7 piezas de Tetris
void inicializarPiezas(Pieza piezas[7]);

#endif // DESAFIOLIBRERIA_H
=======
#endif // DESAFIOLIBRERIA_H


>>>>>>> db88b9b8d2022a6ec1db696b3e018cce8633a9cb
