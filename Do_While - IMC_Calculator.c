#include<stdio.h>
//#include <locale.h>

int main()

{

//setlocale(LC_ALL,"portuguese");
float altezza,peso,imc;
char resp;

do{
 printf("Inserisci la tua altezza: \n");
 scanf("%f",&altezza);

 printf("Inserisci il tuo peso: \n");
 scanf("%f",&peso);

 imc = peso / (altezza * altezza);

 printf ("Il tuo IMC: %f\nSei ",imc);

 if(imc < 18){
 printf("sotto peso.\n");
 }
 else if(imc > 25){
 printf("sovrappeso.\n");
 }
 else{
 printf("nel peso ideale\n");
 }
 printf("Desidera fare un altro calcolo? S/N\n");
 scanf(" %c",&resp);
}while(resp == 's');
}
