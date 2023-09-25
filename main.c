#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main () {
    srand(time(NULL));

    int randInteiro = rand();
    float randFloat = (float)randInteiro / RAND_MAX;
    float matrizQuadrada[3][3] = {};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            randInteiro = rand();
            randFloat = (float)randInteiro / RAND_MAX;

            matrizQuadrada[i][j] = randFloat;
        }
    }

    printf("Matriz Quadrada 3x3 com números aleatórios:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f\t", matrizQuadrada[i][j]);
        }
        printf("\n");
    }

    float maiorDiagonal = matrizQuadrada[0][0];

    for (int i = 1; i < 3; i++) {
        if (matrizQuadrada[i][i] > maiorDiagonal) {
            maiorDiagonal = matrizQuadrada[i][i];
        } 
    }

    printf("O maior número na diagonal principal é: %.2f\n", maiorDiagonal);
}