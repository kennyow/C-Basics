#include <stdio.h>
#include <stdlib.h>




int main(){


    float a, b;
    int c;
    char resp;

    while (resp != 'n') {

    // Input the first value
    printf("Primo Valore:");
    scanf("%f", &a);
    // Input the second value
    printf("Secondo Valore:");
    scanf("%f", &b);

    printf("\n");
    printf("Quale operazione matematica desideri effettuare?\n");
    printf("1 - Somma\n2 - Sottrazione\n3 - Moltiplicazione\n4 - Divisione\n5 - Media\n6 - Valore Assoluto\n");
    scanf("%d", &c);

   // Switch statement based on the chosen operation
    switch (c)
    {
    case 1:
    //Sum
        printf("\nSomma");
        printf(" %.2f + %.2f = %.2f", a, b, (a+b));
        break;
    case 2:
    //Subtraction
        printf("\nSottrazione");
        printf(" %.2f - %.2f = %.2f", a, b, (a-b));
        break;
    case 3:
    //Multiplication
        printf("\nMoltiplicazione");
        printf(" %.2f * %.2f = %.2f", a, b, (a*b));
        break;
    case 4:
    //Division
        printf("\nDivisione");
        printf(" %.2f / %.2f = %.2f", a, b, (a/b));
        break;
    case 5:
    //Average
        printf("\nMedia");
        printf(" (%.2f + %.2f)/2 = %.2f", a, b, (a+b)/2);
        break;
    case 6:
    //Absolute Value
        printf("\nValore Assoluto");
        printf(" (%.2f | %.2f) = %.2f", a, b, abs(a-b));
        break;
    }

    printf("\nDesidera fare un altro calcolo S/N\n");
    scanf("%s", &resp);

    }

    printf("Arrivederci!\n");

}