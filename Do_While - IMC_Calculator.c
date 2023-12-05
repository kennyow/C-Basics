#include<stdio.h>
#include <locale.h>

int main()

{

setlocale(LC_ALL,"portuguese");
float altura,peso,imc;
char resp;

do{
 printf("Digite sua altura\n");
 scanf("%f",&altura);

 printf("digite seu peso\n");
 scanf("%f",&peso);

 imc = peso / (altura * altura);

 printf ("Seu imc é: %f e você está ",imc);

 if(imc < 18){
 printf("Abaixo do peso\n");
 }
 else if(imc > 25){
 printf("Acima do peso\n");
 }
 else{
 printf("No peso ideal\n");
 }
 printf("Novo cálculo ? digite s ou n\n");
 scanf(" %c",&resp);
}while(resp == 's');
}
