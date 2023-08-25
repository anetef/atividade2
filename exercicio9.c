//O custo de um carro novo ao consumidor é a soma do custo de fábrica com a//
//porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo//
//que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um//
//algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor//

#include<stdio.h>
  main(){
     float custofab, porcentagem, impostos, custfinal;
     printf("Custo de fabrica do carro novo: ");
     scanf("%f", &custofab);
     printf("Valor da porcentagem do distribuidor: 28%%");
     printf("\nValor dos impostos: 45%%");
     
     porcentagem = 0.28;
     impostos = 0.45;
     custfinal = custofab +(impostos * custofab) +(porcentagem * custofab);

     printf("\nCusto final: %.2f", custfinal);



  }