#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
}*head = NULL;

void insert(){
    struct node *temp,*current;
    temp = (struct node*) malloc(sizeof(struct node));
    current = (struct node*) malloc(sizeof(struct node));

    if(temp == NULL){ printf("\nOverlow");}
    else{
        printf("Enter the data :");
        scanf("%d",&temp->data);

        if(head == NULL){
            temp->prev = NULL;
            temp->next = NULL;
            head = temp;
            current = temp;
            printf("\nAdded to the head");
        }
        else{
            current = head;
            while(current->next != NULL){
                current = current->next;
            }
            
            current->next = temp;
            temp->prev = current;
            temp->next = NULL;
         
            printf("\nAdded to doubly linked list");
        }
    }
}

void display(){
    struct node *iteral;

    iteral = head;
    while(iteral != NULL){
        printf("%d->",iteral->data);
        iteral = iteral->next;
    }
    printf("null\n");
}

void reverse(){
    struct node *iteral;
    iteral = head;
    while(iteral->next != NULL){
        iteral = iteral->next;
    }
    while(iteral != NULL){
        printf("%d->",iteral->data);
        iteral = iteral->prev;
    }
    printf("null\n");
}

int main(){
    int choice;
    while(choice != 4){
        printf("\nMenu\n------\n\n1.Insert\n2.Display\n3.Reverse\n4.Exit");
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                reverse();
                break;
            case 4:
                return 0;
                break;
        }
    }

}