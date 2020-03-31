#include <stdio.h>
#include <string.h>

int main(){
  int idade1, idade2, media;
  char nome1 [50], nome2 [50];

  idade1 = 23;
  idade2 = 28;
  strcpy(nome1, "Ingrid Aquino");
  strcpy(nome2, "Klinton Lee");

  printf("Dados da primeira pessoa: ");
  printf("NOME : %s\n", nome1);
  printf("IDADE : %d\n", idade1);

  printf("Dados da segunda pessoa: ");
  printf("NOME : %s\n", nome2);
  printf("IDADE : %d\n", idade2);

  media = (idade1 + idade2) / 2;

  printf("A idade media de %s e %s é de %d", nome1, nome2, media);


  



  
  








  return 0;
}