/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo*/

#include <iostream>
using namespace std;

int main() {
    int longitud;
    cout << "Introduce la longitud de los vectores: ";
    cin >> longitud;
    int vector1[longitud], vector2[longitud], productoPunto = 0;
    cout << "Introduce los elementos del primer vector: " << endl;
    for (int i = 0; i < longitud; i++) {
        cout << "Introduce el elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }
    cout << "Introduce los elementos del segundo vector: " << endl;
    for (int i = 0; i < longitud; i++) {
        cout << "Introduce el elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }
    for (int i = 0; i < longitud; i++) {
        productoPunto += vector1[i] * vector2[i];
    }
    cout << "El producto punto de los vectores es: " << productoPunto << endl;
    return 0;
}