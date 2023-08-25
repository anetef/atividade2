//Escreva um algoritmo para ler o salário mensal atual de um funcionário //
//e o percentual de reajuste. Calcular e escrever o valor do novo salário//

 //O reajuste deve ser de, no mínimo, 5% para acompanhar a inflação//
#include<stdio.h>

main(){
float salario, reajuste, reajustef, novo;

printf("Digite salario mensal: ");
scanf("%f", &salario);

printf("Informe valor do reajuste %%: ");
scanf("%f", &reajuste);

reajustef = reajuste / 100;
 novo = salario + (salario * reajustef);

printf("Salario com reajuste: %.2f", novo);

}