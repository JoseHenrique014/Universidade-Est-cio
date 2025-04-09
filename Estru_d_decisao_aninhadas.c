#include <stdio.h>

int main() {
  int idade;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);

  printf("** VOCÊ ESTÁ QUALIFICADO PARA ENTRAR NA FESTA? **\n");

  if(idade >= 18 && idade <= 40)
  {
    if(renda > 4000){
        printf("aceito com a renda\n");
    } else{
        printf("não aceito com a renda.\n");
    }
    printf("aceito com a idade.\n");
  } else{
    printf("não aceito devido à idade.\n");
  }

  return 0;
}