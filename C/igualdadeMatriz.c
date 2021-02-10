#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

#define TAM 3

void preencheMatriz(int tam, int mat[tam][tam]) {
    int i, j, num;
    for (i = 0; i < tam; i++) {
        for (j = 0; j <  tam; j++) {
           // mat[i][j] = rand()%2;
               printf("Matriz[%d][%d]", i,j);
               scanf("%d",&num);
               mat[i][j] = num;
        }
    }
}

void mostraMatriz(int tam, int mat[tam][tam]) {
    int i, j;
    for (i = 0; i < tam; i++) {
        for (j = 0; j <  tam; j++) {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));

    int m1[TAM][TAM], m2[TAM][TAM], i, j, igual = 1;

    preencheMatriz(TAM, m1);
    preencheMatriz(TAM, m2);

    mostraMatriz(TAM, m1);
    printf("\n");
    mostraMatriz(TAM, m2);
    printf("\n");

    for (i = 0; i < TAM; i++) {
        for (j = 0; j <  TAM; j++) {
            if (m1[i][j] != m2[i][j]) {
                igual = 0;
            }
        }
    }

    if (igual == 1) {
        printf("As duas matrizes 3x3 são iguais \n");
    } else {
        printf("As duas matrizes 3x3 são diferentes \n");
    }

    return 0;
}
