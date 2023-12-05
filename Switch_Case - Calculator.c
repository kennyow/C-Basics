#include <stdio.h>
#include <stdlib.h>




int main(){


    float a, b;
    int c;

    printf("Primo Valore:");
    scanf("%f", &a);
    printf("Secondo Valore:");
    scanf("%f", &b);

    printf("\n");
    printf("Quale operazione matematica desideri effettuare?\n");
    printf("1 - Somma\n2 - Sottrazione\n3 - Moltiplicazione\n4 - Divisione\n5 - Media\n6- Valore Assoluto\n");
    scanf("%d", &c);

    //Switch com número
    switch (c)
    {
    case 1:
        printf("\nSomma");
        printf(" %.2f + %.2f = %.2f", a, b, (a+b));
        break;
    case 2:
        printf("\nSottrazione");
        printf(" %.2f - %.2f = %.2f", a, b, (a-b));
        break;
    case 3:
        printf("\nMoltiplicazione");
        printf(" %.2f * %.2f = %.2f", a, b, (a*b));
        break;
    case 4:
        printf("\nDivisione");
        printf(" %.2f / %.2f = %.2f", a, b, (a/b));
        break;
    case 5:
        printf("\nMedia");
        printf(" (%.2f + %.2f)/2 = %.2f", a, b, (a+b)/2);
        break;
    case 6:
        printf("\nValore Assoluto");
        printf(" (%.2f | %.2f) = %.2f", a, b, abs(a-b));
        break;
    }

}