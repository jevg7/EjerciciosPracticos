/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    int filas, columnas;
    cout << "Introduce el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Introduce el numero de columnas de la matriz: ";
    cin >> columnas;
    int matriz[filas][columnas], matrizTranspuesta[columnas][filas];
    cout << "Introduce los elementos de la matriz: " << endl;
    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {
            cout << "Introduce el elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
            
            system("cls"); 
        
        }
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }
    cout << "La matriz transpuesta es: " << endl;
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << matrizTranspuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}