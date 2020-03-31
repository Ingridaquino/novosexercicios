#include <stdio.h>

int main(){
   
   double a, b, c, quadrado, triangulo, trapezio;

   printf("Digite a medida A: ");
   scanf("%lf", &a);
   printf("Digite a medida B: ");
   scanf("%lf", &b);
   printf("Digite a medida C: ");
   scanf("%lf", &c);

   quadrado = a * a;

   triangulo = (a * b) / 2;

   trapezio =((a + b) * c) / 2;

   printf("AREA DO QUADRADO = %.3lf\n", quadrado);
   printf("AREA DO TRIANGULO = %.3lf\n", triangulo);
   printf("AREA DO TRAPEZIO = %.3lf\n", trapezio);




   





  return 0;
}