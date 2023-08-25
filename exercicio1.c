#include <stdio.h>
#include <math.h>
int main(){
int num1 , num2, soma, sub, mult;
float div;
  printf("Digite um numero: ");
  scanf("%d", &num1);

  printf("Digite outro numero: ");
  scanf("%d", &num2);

  soma = num1 + num2;
  sub = num1 - num2;
  mult = num1 * num2;

  div = (float)num1 / (float)num2;

printf("\nSoma: %d", soma);
printf("\nSubtra...: %d", sub);
printf("\nMulti...: %d", mult);
printf("\nDiv...: %f", div);

}