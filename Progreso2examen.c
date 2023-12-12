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


// Función para imprimir el detalle de ingresos y egresos de cada insumo por mes
void imprimirDetalle(char nombre[m][MAX_LONGITUD_NOMBRE], int ingresos[m][n], int egresos[m][n]) {
    for (int i = 0; i < m; i++) {
        printf("Insumo %d (%s):\n", i + 1, nombre[i]);
        for (int j = 0; j < n; j++) {
            printf("  Mes %d - Ingresos: %d, Egresos: %d\n", j + 1, ingresos[i][j], egresos[i][j]);
        }
        printf("\n");
    }
}
void obtenerTotales(char nombre[m][MAX_LONGITUD_NOMBRE], int egresos[m][n], int ingresos[m][n]) {
    for (int i = 0; i < m; i++) {
        int totalIngresos = 0;
        int totalEgresos = 0;

        for (int j = 0; j < n; j++) {
            totalIngresos += ingresos[i][j];
            totalEgresos += egresos[i][j];
        }

        printf("Insumo %d (%s) - Total Ingresos: %d, Total Egresos: %d\n", i + 1, nombre[i], totalIngresos, totalEgresos);
    }
}




