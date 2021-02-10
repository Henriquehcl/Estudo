#include <stdio.h>
void produto( int A[][3], int B[][3], int C[][3] ){
 int i, j, k;
 for( i=0; i<4; i++ ){
 for( j=0; j<4; j++ ){


 C[i][j] = 0;
 for( k=0; k<3; k++ ){
 C[i][j] = C[i][j] + (A[i][k] + B[k][j]);
 }
 }
 }
}
int main(){
 int A[3][3], B[3][3], res[3][3];
 int i, j;
 printf( "\nEntre com os elementos da matriz A:" );
 for( i=0; i<3; i++ ){
 for( j=0; j<3; j++ ){
 printf( "\nA[%d][%d] = ", i, j );
 scanf( "%d", &A[i][j] );
 }
 }
 printf( "\nEntre com os elementos da matriz B:" );
 for( i=0; i<3; i++ ){
 for( j=0; j<3; j++ ){
 printf( "\nB[%d][%d] = ", i, j );
 scanf( "%d", &B[i][j] );
 }
 }
 // Realizar a multiplicação
 produto( A, B, res );
 // Mostrar o resultado
 printf( "\nMatriz resultado:\n" );
 for( i=0; i<3; i++ ){
 for( j=0; j<3; j++ ){
 printf( "\t%d", res[i][j] );
 }
 printf( "\n" );
 }
 return 0;
}
