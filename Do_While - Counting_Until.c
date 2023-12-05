#include <stdio.h>
#include <stdlib.h>
 
// Main function of the program
int main() {
 
    // Defining variables
    int a = 1, somma = 0;
 
    // First checks the condition, then repeats the block
    while (a <= 10) {
 
        // Printing 'a' to the screen
        printf("\n%d", a);
 
        // Increment
        a++;     // a = a + 1;
        somma += a;
    
    }
    printf("\nVallore della Somma: %d", somma);
    // Changing the value of 'a'
    a = 20;
 
    printf("\n----");
    // First executes once, then checks the condition
    do {
 
        // Printing 'a' to the screen
        printf("\n%d", a);

        if (a== 14){ //putting a limit 
            printf("\nLimite raggiunto!\n");
            break;}
        somma += a;
        // Decrement
        a--;     // a = a - 1;
 
    } while (a >= 10);

     printf("\nVallore della Somma: %d", somma);
 
    printf("\n");
    // Pauses the program after execution
    system("pause");
 
    return 0;
}


