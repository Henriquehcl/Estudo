#include <stdio.h>
#include <time.h>

void gerarMatriz(int matriz[3][3]) {

     int i, j, num;

     for (i=0; i<3; i++){
          for(j=0; j<3; j++) {
               printf("matriz[%d][%d]", i,j);
               scanf("%d",&num);
               matriz[i][j] = num;

          }
     }

}

void somarMatriz (int m1[3][3], int m2[3][3], int total[3][3]) {

     int i, j, num;

     for (i=0; i<3; i++){
          for(j=0; j<3; j++) {

          num = m1[i][j] + m2[i][j];
          total[i][j] = num;

          }
     }
}

int main() {

     int a[3][3], b[3][3], c[3][3], d[3][3];
     int r1 [3][3], r2[3][3], r3[3][3];
     int i, j, num;

     printf("Leitura da matriz A\n");
     gerarMatriz(a);

    /* printf("Leitura da matriz A\n");
     gerarMatriz(b);

     printf("Leitura da matriz A\n");
     gerarMatriz(c);

     printf("Leitura da matriz A\n");
     gerarMatriz(d);
*/
     somarMatriz(a, a, r1);
    // somarMatriz(c, d, r2);
    // somarMatriz(a, c, r3);


     printf("Resultado 1\n");
     for (i=0; i<3; i++){
          for(j=0; j<3; j++) {
          num = r1[i][j];
          printf("%d ", num);
          }
          printf("\n");
      }
   /* printf("Resultado 2\n");
     for (i=0; i<3; i++){
          for(j=0; j<3; j++) {
          num = r2[i][j];
          printf("%d ", num);
          }
          printf("\n");
      }

     printf("Resultado 3\n");
     for (i=0; i<3; i++){
          for(j=0; j<3; j++) {
          num = r3[i][j];
          printf("%d ", num);
          }
          printf("\n");
      }
*/
     return 0;
}
