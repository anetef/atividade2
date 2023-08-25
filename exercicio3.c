//Dadas as medidas de uma sala, informe sua área//

#include<stdio.h>

main(){
 float area, num1, num2;

printf("Utilize a formula da area A = b. h");
 printf("\nDigite a base: ");
 scanf("%f", &num1);

 printf("\nDigite a altura: ");
 scanf("%f", &num2);

area = num1 * num2;

printf("Area da sala e: %.2f", area);
    
}