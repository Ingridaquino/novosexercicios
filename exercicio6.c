#include <stdio.h>

int main(){

  double hora1, hora2, pagamento;
  char nome[50];

  printf("Nome: ");
  scanf("%s", nome);
  printf("Valor por hora: ");
  scanf("%lf", &hora1);
  printf("Horas trabalhadas: ");
  scanf("%lf", &hora2);

  pagamento = hora1 * hora2;

  printf("O pagamento para %s deve ser %.2lf", nome, pagamento);








  return 0;
}