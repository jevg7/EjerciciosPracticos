/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector*/

#include <iostream>
using namespace std;

int main() {
    int longitud;
    cout << "Introduce la longitud de los vectores: ";
    cin >> longitud;
    int vector1[longitud], vector2[longitud], vector3[longitud];
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
        vector3[i] = vector1[i] + vector2[i];
    }
    cout << "El vector resultante es: ";
    for (int i = 0; i < longitud; i++) {
        cout << vector3[i] << " ";
    }
    cout << endl;
    return 0;
}