//9. create a singly linked list of n nodes and display it


/* #include <stdio.h>
#include <conio.h>
#include <stdlib.h> */

struct node{
    int data;
    struct node* next;
}*head = NULL;

void creatNode(){
    struct node *newnode,*current;
    char ch;
    do{
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("Enter value to list :");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head == NULL){
            head = newnode;
            current = newnode;
        }
        else{
            current->next = newnode;
            current = newnode;
        }
        printf("Do you want to add another item to the list? (y,n)");
        ch = getch();
        //scanf("%c",&ch);
    }while(ch!='n');
    getch();
}

int main()
{
    char isAdd;
    printf("Add data to linked list? (y/n) :");
    scanf("%c",&isAdd);
    switch(isAdd){
        case 'y':
            creatNode();
            break;
        case 'n':
            break;
        default:
            printf("Enter a valid option");
            
    }
    return 0;
}

