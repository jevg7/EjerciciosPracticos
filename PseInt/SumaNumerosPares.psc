Algoritmo SumaNumerosPares
    Definir suma, i Como Entero;
    suma <- 0;
    Para i <- 100 Hasta 200 Con Paso 1 Hacer
        Si i MOD 2 = 0 Entonces
            suma <- suma + i;
        Fin Si;
    Fin Para;
    Escribir "La suma de los números pares entre 100 y 200 es: ", suma;
Fin Algoritmo

