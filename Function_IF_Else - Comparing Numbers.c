#include<stdlib.h>
#include<stdio.h>
#include <locale.h>


int compare(int a, int b, int c)
{
int resp;

if ((a > b) && (a> c)){ //Comparing A fisrt
    resp = a;
    return resp;
}
if ((b > a) && (b> c)){ // Comparing B
    resp = b;
    return resp;
}
if ((c > a) && (c> b)){ // Comparing C
    resp = c;
    return resp;
}
if ((a > b) && (b < c)){ // Comparing between A and C excluding B

    if (c > a){
    resp = c;
    return resp;
    }

    if (c < a){
    resp = a;
    return resp;
    }
    if (c = a){
    resp = a;
    return resp;
    }
}


if (c = a = b){ // Comparing if they are equal
    resp = b;
    return resp;
}
}

int main()
{
setlocale(LC_ALL, "Portuguese");

int x, y, z;

printf("Inserisci il primo numero intero:\n");
scanf("%d", &x);
printf("Inserisci il secondo numero intero:\n");
scanf("%d", &y);
printf("Inserisci il terzo numero intero:\n");
scanf("%d", &z);

printf("Il numero piu grande tra i tre inseriti ( %d, %d e %d ) e: %d!\n", x, y, z, compare(x, y, z) );
}
