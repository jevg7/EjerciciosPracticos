Algoritmo Ejercicio8
    Definir tamano Como Entero;
    Definir productoPunto Como Entero;
    Escribir "Introduce la longitud de los vectores: ";
    Leer tamano;
    Dimension vector1[tamano], vector2[tamano];
    productoPunto <- 0;
    Escribir "Introduce los elementos del primer vector: ";
    Para i <- 1 Hasta tamano Hacer
        Escribir "Introduce el elemento ", i, ": ";
        Leer vector1[i];
    Fin Para
    Escribir "Introduce los elementos del segundo vector: ";
    Para i <- 1 Hasta tamano Hacer
        Escribir "Introduce el elemento ", i, ": ";
        Leer vector2[i];
    Fin Para
    Para i <- 1 Hasta tamano Hacer
        productoPunto <- productoPunto + (vector1[i] * vector2[i]);
    Fin Para
    Escribir "El producto punto de los vectores es: ", productoPunto;
FinAlgoritmo
