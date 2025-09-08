#include <iostream>
using namespace std;

//Algoritmo 14: Multiplicacion de dos matrices de tamaño m x n.

 // Prototipo de la funcion
    void multiplicacion_de_matrices (int filas, int columnas);

int main() {
    int filas, columnas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    multiplicacion_de_matrices(filas, columnas);
    return 0;
}

void multiplicacion_de_matrices (int filas, int columnas) {
    int matriz1[filas][columnas], matriz2[filas][columnas], resultado[filas][columnas];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Inicializar la matriz resultado a cero
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = 0;
        }
    }

    // Realizar la multiplicacion de matrices
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int k = 0; k < columnas; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "El resultado de la multiplicacion de las dos matrices es:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
}