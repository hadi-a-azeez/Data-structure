//18. Implement Queue using array. 

#include <stdio.h>
#include <stdlib.h>

int queue[20];
int front = -1, rear = -1,capacity;

void enqueue(){
    printf("\nEnter the data to queue:");
    if(rear == -1){
        rear++;
        front++;
        scanf("%d",&queue[rear]);
    }
    else{
        rear++;
        scanf("%d",&queue[rear]);
    }
    printf("\nInserted to queue!");
}

void dequeue(){
    if(front>rear){
        printf("\nQueue is empty!");
    }
    else{
        printf("\n%d ",queue[front]);
        front++;
        printf("removed from queue");
    }
}

void display(){
    for(int i = front; i<=rear; i++){
        printf("\n%d",queue[i]);
    }
}

int main(){
    int choice;
    printf("Enter the size of the queue: ");
    scanf("%d",&capacity);
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