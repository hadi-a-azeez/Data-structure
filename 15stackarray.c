//15. Implement stack using array

#include <stdio.h>

int stack[10];
int top = -1,item;

void push(){
    printf("Enter the item:");
    scanf("%d",&item);
    if(top == 9){
        printf("\nOverflow");
    }
    else{
        top++;
        stack[top] = item;
        printf("item pushed");
    }
}

void pop(){
    if(top == -1){
        printf("No item in stack");
    }
    else{
        printf("\n%d",stack[top]);
        top--;
        printf(" popped from stack!");
    }
}

void display(){
    if(top == -1){
        printf("No items in stack");
    }
    else{
        for(int i = top; i>=0; i--){
            printf("\n%d",stack[i]);
        }
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