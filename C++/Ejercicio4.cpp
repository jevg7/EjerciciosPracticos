/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "Introduce la nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
    }
    cout << "El promedio general de la seccion es: " << suma / 10 << endl;
    return 0;
}