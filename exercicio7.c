//Faça um algoritmo que leia a idade de uma pessoa expressa em anos,//
 //meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias//
 #include <stdio.h>

  main(){
    int  data, dia, mes, ano, temp1, temp2, mesf;

    printf("-------");
    printf("Informe sua data de nascimento");
    printf("-------");
    printf("\nDia:");
    scanf("%d",&dia); 
    printf("Mes: ");
    scanf("%d", &mes); 
    printf("Ano: ");
    scanf("%d", &ano);

    
    temp2 = 2023 - ano;
    temp1 = temp2 * 365;
    mesf = mes* 30;
    data = dia + mesf + temp1;
    //se digitar datas proximas, ela continua multiplicando o mes e somando os dias, como corrigir esse problema?//


    printf("Parabens voce viveu %.d",data );
    printf(" dias!!!");

  }