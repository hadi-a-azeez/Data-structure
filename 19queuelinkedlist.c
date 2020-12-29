//19. Implement Queue using linked list. 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*front = NULL;

struct node *rear = NULL;

void enqueue(){
    struct node *newnode,*temp;
    newnode = (struct node*) malloc(sizeof(struct node));
    temp = (struct node*) malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("\nOverflow");
    }
    else{
        printf("\nEnter the data to queue:");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(rear == NULL){
            //front = rear = temp = newnode;
            front = newnode;
            rear = newnode;
            temp = newnode;           
        }
        else{
            rear = newnode;
            temp->next = newnode;
            temp = newnode;
        }
        printf("\nInserted to queue!");
    }
}

void dequeue(){
    if(front == NULL){
        printf("\nNo data in queue!");
    }
    if(front != NULL && front->next == rear->next){
        struct node *delTemp;
        delTemp = front;
        front = front->next;
        printf("\n%d ",delTemp->data);
        free(delTemp);
        printf("Removed");
    }
}

void display(){
    struct node *iterate;
    iterate = front;
    while(iterate){
        printf("\n%d",iterate->data);
        iterate = iterate->next;
    }
}

int main(){
    int choice;
    while(choice != 4){
        printf("\n\nMenu");
        printf("\n-----");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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