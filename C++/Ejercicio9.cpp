/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>
using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;
    cout << "Introduce el numero de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Introduce el numero de columnas de la primera matriz: ";
    cin >> columnas1;
    cout << "Introduce el numero de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Introduce el numero de columnas de la segunda matriz: ";
    cin >> columnas2;
    if (columnas1 != filas2) {
        cout << "Las matrices no son compatibles para la multiplicacion" << endl;
        return 1;
    }
    int matriz1[filas1][columnas1], matriz2[filas2][columnas2], matrizResultado[filas1][columnas2];
    cout << "Introduce los elementos de la primera matriz: " << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            cout << "Introduce el elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
        }
    }
    cout << "Introduce los elementos de la segunda matriz: " << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << "Introduce el elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
        }
    }
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            matrizResultado[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    cout << "La matriz resultante es: " << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << matrizResultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}