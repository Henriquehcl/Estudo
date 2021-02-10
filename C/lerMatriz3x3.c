#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//
// Escrever um programa que criar duas matrizes 3x4 e as preenche aleatoriamente. Depois deve soma-las armazenar o resultado em outra matriz
//

int main(){
    setlocale( LC_ALL, "portuguese" );
    srand( time(NULL) );

    int mat[3][3];
    int i,j;

    for( i=0; i<3; i++ ){
        for( j=0; j<3; j++ ){
            mat[i][j] = rand() % 50;
        }
    }
//imprimindo os valores da matriz

    printf( "\nMatriz:\n" );
    for( i=0; i<3; i++ ){
        for( j=0; j<3; j++ ){
            printf( "\t%d", mat[i][j]);
        }
        printf("\n");
    }
}
