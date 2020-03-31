#include <stdio.h>



int main (){

  double combu, consumo;
  int distancia;

  printf("Distancia percorrida: ");
  scanf("%d", &distancia);

  printf("Conbustivel gasto: ");
  scanf("%lf", &combu);


  consumo = distancia / combu;

  printf("Consumo medio = %.3lf", consumo);








  return 0;
}