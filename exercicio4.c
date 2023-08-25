//Dado um valor em reais e a cotação do dólar, converta esse valor para dólares//
#include<stdio.h>

int main(){
float reais, dolar, num1;
 printf("Informe o valor em Reias: ");
 scanf("%f", &reais);

  dolar = 0.21 * reais;

  printf("Valor em Dolares: %.2f", dolar);

}
