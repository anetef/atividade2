//Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma //
//comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um //
//algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o //
//valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.//
#include<stdio.h>
main(){
    int  vendas;
    float salafixo, comissao, salafinal, c1;
    printf("Informe salario fixo: ");
    scanf("%f", &salafixo);

    printf("Digite numero total de carros vendidos no mes: ");
    scanf("%d", &vendas);

    printf("Valor recebido por cada carro vendido: ");
    scanf("%f", &comissao);

    c1 = comissao + (vendas * 0.05);
    salafinal = c1 + salafixo;

    printf("Salario final do vendedor: %.2f", salafinal);
    


}
