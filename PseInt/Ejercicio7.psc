Algoritmo Ejercicio7
    Definir tamano Como Entero;
    Escribir "Introduce la longitud de los vectores: ";
    Leer tamano;
    Dimension vector1[tamano], vector2[tamano], vector3[tamano];
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
        vector3[i] <- vector1[i] + vector2[i];
    Fin Para
    Escribir "El vector resultante es: ";
    Para i <- 1 Hasta tamano Hacer
        Escribir Sin Saltar vector3[i], " ";
    Fin Para
    
FinAlgoritmo