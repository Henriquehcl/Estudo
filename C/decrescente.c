#include <stdio.h>

void cont(int n) {
    if (n >= 1 && n % 2 != 0)

    printf("%d\n", n);
    cont(n-1);
}
main(){
   int num1, contador;
   printf("Digite o numero inteiro: ");
   scanf("%d", &num1);

   cont(num1);


     return 0;

}
