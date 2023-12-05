#include <stdio.h>
#include <stdlib.h>



/*Structure that will be used for create nodes of the list */
typedef struct product_type {
 int code; /* Product Code*/
 double price; /* Product Price */
 struct product_type *next; /* Next element in the linked list of Products" */
} TProduto;


/*Prototypes of the functions to insert and list products */
void insert(TProduto **head);
void list (TProduto *head);


int main() {


 TProduto *head = NULL; /* Pointer to the head of the list */
 TProduto *actualnode; /* Pointer to be used to traverse the list when deallocating its elements*/
 char q; /* Character to receive the user's option */

 //Using DO - WHILE with SWITCH CASE
 do {
 printf("\n\nOPZIONI: \nI -> PER INSERIRE UN NUOVO PRODOTTO;\nL -> PER ELENCARE I PRODOTTI; \nS -> PER USCIRE.\n:");
 scanf(" %c", &q); /* Reads the user's option */

 switch(q) {
 case 'i': case 'I': insert(&head); break;
 case 'l': case 'L': list(head); break;
 case 's': case 'S': break;
 default: printf("\n\n OPZIONE NON VALIDA");
 }

 } while ((q != 's') && (q != 'S') );

 /*deallocate the memory allocated to the elements of the list */

 actualnode = head;
 while (actualnode != NULL)
 {
 head = actualnode->next;
 free(actualnode);
 actualnode = head;
 }
}
/* Lists all the elements present in the linked list*/
void list (TProduto *actualnode)
{
 int i=0;
 while( actualnode != NULL) /* While it doesn't reach the end of the list  */
 {
 i++;
 printf("\n\nPRODOTTO NUMERO %d\nCODICE: %d \nPREZZO:EU$%.2lf", i, actualnode->code, actualnode->price);
 actualnode = actualnode->next; /* Faz noatual apontar para o proximo no */
 }
}

/* Function to insert a node in the end of the list */
void insert (TProduto **head)
{
 TProduto *actualnode, *newnode;
 int cod;
 double price;

 printf("\n CODICE DEL NUOVO PRODOTTO: ");
 scanf("%d", &cod);
 printf("\n PREZZO DEL PRODOTTO: EU$");
 scanf("%lf", &price);

 if (*head == NULL) /* If there's still no product in the list */
 {
/* Creates the head */
 *head = (TProduto *) malloc(sizeof(TProduto));
 (*head)->code = cod;
 (*head)->price = price;
 (*head)->next = NULL;
 }
 else
 {
/* If there are already elements in the list, it should traverse it until its end and insert the new element */
 actualnode = *head;
 while(actualnode->next != NULL)
 actualnode = actualnode->next; /* At the end of the wile, the actualnode points to the last node */

 newnode = (TProduto *) malloc(sizeof(TProduto));/* Allocates memory for the new node*/
 newnode->code = cod;
 newnode->price= price;
 newnode->next = NULL;
 actualnode->next = newnode; /* Makes the last one points to the new node*/
 }
}
