Algoritmo NotasEstudiantes
    Definir nota, suma, aprobados, reprobados, i Como Real;
    aprobados <- 0;
    reprobados <- 0;
    suma <- 0;
    Para i <- 1 Hasta 8 Con Paso 1 Hacer
        Escribir "Introduce la nota del estudiante ", i, ": ";
        Leer nota;
        Si nota >= 70 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        Fin Si;
        suma <- suma + nota;
    Fin Para;
    Escribir "Cantidad de alumnos aprobados: ", aprobados;
    Escribir "Cantidad de alumnos reprobados: ", reprobados;
    Escribir "El promedio general del grupo es: ", suma / 8;
Fin Algoritmo
