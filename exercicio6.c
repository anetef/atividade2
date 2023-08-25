//Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área//
#include <stdio.h>

main(){
float raio, area;
  
  printf("Informe raio do circulo: ");
  scanf("%f", &raio);

  area = (raio * raio) *3.14;

  printf("Valor da area e: %.3f", area);

}