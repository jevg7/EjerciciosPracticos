Algoritmo PromedioNotas
    Definir nota, suma, i Como Real;
    suma <- 0;
    Para i <- 1 Hasta 10 Con Paso 1 Hacer
        Escribir "Introduce la nota del estudiante ", i, ": ";
        Leer nota;
        suma <- suma + nota;
    Fin Para;
    Escribir "El promedio general de la secci�n es: ", suma / 10;
Fin Algoritmo
