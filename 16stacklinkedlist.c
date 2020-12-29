//16. Implement Stack  using linked list 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*top = NULL;


void push(){
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("overflow");
    }
    else{
        printf("\nEnter data to stack:");
        scanf("%d",&newnode->data);
        newnode->next = top;
        top = newnode;
    }
    printf("\nPushed!");
    
}

void pop(){
    struct node *temp;
    temp = top;
    if(top == NULL){
        printf("\nNo items in stack");
    }
    else{
        top = temp->next;
        free(temp);
        printf("\nPopped!");
    }
}

void display(){
    struct node *temp;
    temp = top;
    while(temp != NULL){
        printf("\n%d ",temp->data);
        temp = temp->next;
    }
}

int main(){
    int choice;
    while(choice != 4){
        printf("\n\nMenu");
        printf("\n-----");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return(0);
            break;
        
        default:
            printf("\nEnter a valid choice");
            break;
        }
    }
}
