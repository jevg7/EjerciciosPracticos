Algoritmo Ejercicio9
    Definir filas1, columnas1, filas2, columnas2 Como Entero;
    Dimension matriz1[100, 100], matriz2[100, 100], matrizResultado[100, 100];
    Escribir "Introduce el numero de filas de la primera matriz: ";
    Leer filas1;
    Escribir "Introduce el numero de columnas de la primera matriz: ";
    Leer columnas1;
    Escribir "Introduce el numero de filas de la segunda matriz: ";
    Leer filas2;
    Escribir "Introduce el numero de columnas de la segunda matriz: ";
    Leer columnas2;
    Si columnas1 <> filas2 Entonces
        Escribir "Las matrices no son compatibles para la multiplicacion";
	
    FinSi
    Escribir "Introduce los elementos de la primera matriz: ";
    Para i <- 1 Hasta filas1 Hacer
        Para j <- 1 Hasta columnas1 Hacer
            Escribir "Introduce el elemento [", i, "][", j, "]: ";
            Leer matriz1[i, j];
        FinPara
    FinPara
    Escribir "Introduce los elementos de la segunda matriz: ";
    Para i <- 1 Hasta filas2 Hacer
        Para j <- 1 Hasta columnas2 Hacer
            Escribir "Introduce el elemento [", i, "][", j, "]: ";
            Leer matriz2[i, j];
        FinPara
    FinPara
    Para i <- 1 Hasta filas1 Hacer
        Para j <- 1 Hasta columnas2 Hacer
            matrizResultado[i, j] <- 0;
            Para k <- 1 Hasta columnas1 Hacer
                matrizResultado[i, j] <- matrizResultado[i, j] + (matriz1[i, k] * matriz2[k, j]);
            FinPara
        FinPara
    FinPara
    Escribir "La matriz resultante es: ";
    Para i <- 1 Hasta filas1 Hacer
        Para j <- 1 Hasta columnas2 Hacer
            Escribir Sin Saltar matrizResultado[i, j], " ";
        FinPara
        
    FinPara
FinAlgoritmo