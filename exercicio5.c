//Faça um programa em que o usuário digite o custo de uma determinada mercadoria,//
// em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado).//
  //Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria//

  #include<stdio.h>

   main(){
    float mercadoria, frete, despensas,lucroli, receitat, percentagem;

    printf("-----------");
    printf("Mercadoria: Travesseiro dos sonhos");
    printf("-----------");
    printf("\nInforme o custo da mercadoria: ");
    scanf("%f",&mercadoria);
    printf("Informe valor do frete: ");
    scanf("%f", &frete);
    printf("Valor das despensas eventuais: ");
    scanf("%f", &despensas);

    lucroli = mercadoria + frete + despensas;

    printf("Valor total da compra: %.2f", lucroli);

    percentagem = (mercadoria / lucroli) * 100;

    printf("\nPercentagem de lucro da mercadoria: %.2f", percentagem);


  }