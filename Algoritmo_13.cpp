#include <iostream>
using namespace std;

//Algpritmo 13: Suma de dos matrices de tamaño m x n.

// Prototipo de la funcion
void suma_de_matrices (int filas, int columnas);

// Funcion principal
int main() {
    int filas, columnas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    
    suma_de_matrices(filas, columnas);
    
    return 0;

}

void suma_de_matrices (int filas, int columnas) {
    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int resultado[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el elemento [" << i << "][" << j << "] de la primera matriz: ";
            cin >> matriz1[i][j];
            cout << "Ingrese el elemento [" << i << "][" << j << "] de la segunda matriz: ";
            cin >> matriz2[i][j];
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << "La matriz resultante es: " << endl;
    for (int i = 0; i < filas; i++) {
        cout << " ";
        for (int j = 0; j < columnas; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
}