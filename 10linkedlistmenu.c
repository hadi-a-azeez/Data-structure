#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    int data;
    struct node *next;
}*head = NULL;

void insertBegining(){
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("overflow");
    }
    else{
        printf("Enter data at the begining:");
        scanf("%d",&newnode->data);
        newnode->next = head;
        head = newnode;
    }
    printf("inserted at the begining");
}

void insertEnd(){
    struct node *newnode,*temp;
    newnode = (struct node*) malloc(sizeof(struct node));
    temp = (struct node*) malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("overflow");
    }
    else{
        printf("\nEnter at the end: ");
        scanf("%d",&newnode->data);
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
        printf("Inserted at the end");
    }
   
}

void insertRandom(){
    struct node *newnode,*temp;
    int pos,i=0,item;
    newnode = (struct node*) malloc(sizeof(struct node));
    if(newnode = NULL){
        printf("overflow");
    }
    else{
        printf("\nEnter the data: ");
        scanf("%d",&item);
        newnode->data = item;
        printf("\nEnter the location after which you want to insert: ");
        scanf("%d",&pos);
        temp = head;
        while(i<pos) 
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\ncan't insert\n");  
                return;  
            }        
            i++;    
        }  
        newnode->next = temp->next;
        temp->next = newnode;
        printf("Inserted at %d",pos);
    }
}

void display(){
    struct node *temp;
    temp = head;
    while(temp){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("null");
}

int main()
{
    int choice;
    while(choice != 5){
        printf("\n\nChoose from menu\n");
        printf("-----------------\n");
        printf("1. Insert at the begining\n2. Insert at the end\n3.Insert at random position\n4. Display\n5. Exit\n");
        printf("Select a option:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insertBegining();
            break;
        case 2:
            insertEnd();
            break;
        case 3:
            insertRandom();
            break;
        case 4:
            display();
            break;
        case 5:
            return(0);
            break;
        
        default:
            printf("Print a valid option\n");
            break;
        }
    }  
}