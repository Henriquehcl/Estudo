#include<stdio.h>

int somar( int num1, int num2) {
   return num1 + num2; //<-- Retorna a soma
}

int subtrair( int num1, int num2) {
   return num1 - num2; //<-- Retorna a subtração
}
int multiplicar( int num1, int num2) {
   return num1 * num2; //<-- Retorna a Multiplicação
}
int dividir( int num1, int num2) {
   return num1 / num2; //<-- Retorna a Divisão
}


int main()
{
   int dividirNumeros;
   int multiplicarNumeros;
   int somarNumeros;
   int subtrairNumeros;
   int num1;
   int num2;




   printf("Digite o 1o. numero inteiro: ");
   scanf("%d", &num1);
   printf("Digite o 2o. numero inteiro: ");
   scanf("%d", &num2);


   somarNumeros = somar(num1, num2);
   printf("Soma de %d e %d é: %d\n",num1, num2, somarNumeros);

   subtrairNumeros = subtrair(num1, num2);
   printf("Subtração de %d e %d é: %d\n",num1, num2,subtrairNumeros);

      multiplicarNumeros = multiplicar(num1, num2);
   printf("Multiplicação de %d e %d é: %d\n",num1, num2,multiplicarNumeros);

      dividirNumeros = dividir(num1, num2);
   printf("Divisão de %d e %d é: %d\n",num1, num2,dividirNumeros);



   return 0;
}
