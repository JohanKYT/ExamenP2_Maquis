#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define m 30
#define n 12
#define MAX_LONGITUD_NOMBRE 50

// Función para inicializar datos con números aleatorios
void inicializarDatos(char nombre[m][MAX_LONGITUD_NOMBRE], int ingresos[m][n], int egresos[m][n]) {
    for (int i = 0; i < m; i++) {
        printf("Ingrese el nombre del Insumo %d: ", i + 1);
        scanf("%s", nombre[i]);

        for (int j = 0; j < n; j++) {
            ingresos[i][j] = rand() % RAND_MAX;  // Números aleatorios entre 0 y 999
            egresos[i][j] = rand() % ingresos[i][j];   // Números aleatorios entre 0 y el valor de ingresos
        }
    }
}




