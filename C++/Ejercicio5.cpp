/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70

*/

#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0;
    int aprobados = 0, reprobados = 0;
    for (int i = 1; i <= 8; i++) {
        cout << "Introduce la nota del estudiante " << i << ": ";
        cin >> nota;
        if (nota >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
        suma += nota;
    }
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "El promedio general del grupo es: " << suma / 8 << endl;
    return 0;
}