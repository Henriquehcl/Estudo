#include <stdio.h>

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

     int a[3][3];
     int r1 [3][3];
     int i, j, num;

     printf("Leitura da matriz A\n");
     gerarMatriz(a);


     somarMatriz(a, a, r1);



     printf("Resultado 1\n");
     for (i=0; i<3; i++){
          for(j=0; j<3; j++) {
          num = r1[i][j];
          printf("%d ", num);
          }
          printf("\n");
      }

     return 0;
}
