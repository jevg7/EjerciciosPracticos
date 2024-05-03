Algoritmo TransponerMatriz
    Definir filas, columnas Como Entero;
    Escribir "Introduce el numero de filas de la matriz: ";
    Leer filas;
    Escribir "Introduce el numero de columnas de la matriz: ";
    Leer columnas;
    Dimension matriz[filas, columnas], matrizTranspuesta[columnas, filas];
    Escribir "Introduce los elementos de la matriz: ";
    Para i <- 1 Hasta filas Hacer
        Para j <- 1 Hasta columnas Hacer
            Escribir "Introduce el elemento [", i, "][", j, "]: ";
            Leer matriz[i, j];
        FinPara
    FinPara
    Para i <- 1 Hasta filas Hacer
        Para j <- 1 Hasta columnas Hacer
            matrizTranspuesta[j, i] <- matriz[i, j];
        FinPara
    FinPara
    Escribir "La matriz transpuesta es: ";
    Para i <- 1 Hasta columnas Hacer
        Para j <- 1 Hasta filas Hacer
            Escribir Sin Saltar matrizTranspuesta[i, j], " ";
        FinPara
	
    FinPara
FinAlgoritmo