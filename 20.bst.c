#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *leftChild;
    struct node *rightChild;
}*root = NULL;

void insertToBst(int data){
    struct node *tempnode,*current,*parent;
    tempnode = (struct node*) malloc(sizeof(struct node));
    tempnode->data = data;
    tempnode->leftChild = NULL;
    tempnode->rightChild = NULL;

    if(root == NULL){
        root = tempnode;
        printf("\n Inserted at root of the bts");
    }
    else{
        current = root;
        parent = NULL;

        while(1){
            parent = current; //changing the parent for every iteration. ie, current is changing

            //checkig to the left side of the tree
            if(current->data > data){
                current = current->leftChild;

                if(current == NULL){
                    parent->leftChild = tempnode; //inserting to left
                    printf("\nInserted at left of the bts");
                    return;
                }
            }
            //checking to right
            else{
                current = current->rightChild;

                if(current == NULL){
                    parent->rightChild = tempnode; //inserting to right
                    printf("\nInserted at the right of the bts");
                    return;
                }
            }
        } // while loop will always be true(since the condition is true)
         //for each iteration current is changing
         //loop will terminate only if insertion completes and return from fun
    }
}

struct node* searchBts(int item){
    struct node *current;
    current = root;

    //checking if the root is null
     if(current == NULL){
            return NULL;
        }
           
     while(current->data != item){  //checking for each iteration if the item is present
        //check to the left
        if(current->data > item){
            current = current->leftChild; //changing current
        }
        //checking to the right
        else{
            current = current->rightChild; //changing current
        }
        if(current == NULL){  //
            return NULL;
        }   
    }
    return current;
}

void display(){
    struct node *current = root;
    //displaying right side
    while(current != NULL){
        printf(" %d",current->data);
        //going to right
        if(current->rightChild != NULL){
            current = current->rightChild;
        }
        else{
            current = NULL;
        }  
    }
    //displaying left side
    current = root;
    while(current != NULL){
        if(current->leftChild != NULL){
            current = current->leftChild;
            printf(" %d",current->data);
        }
        else{
            current = NULL;
        }
    }
}

void inorder(struct node *current){
    if(current == NULL) return;
    inorder(current->leftChild);
    printf("%d ",current->data);
    inorder(current->rightChild);
}

void preorder(struct node *current){
    if(current == NULL) return;
    printf("%d ",current->data);
    inorder(current->leftChild);
    inorder(current->rightChild);
}
void postorder(struct node *current){
    if(current == NULL) return;
    inorder(current->leftChild);
    inorder(current->rightChild);
    printf("%d ",current->data);
}

int main(){
    int data,item;
    struct node *result;
    char ch;
    int choice;
    while(choice != 5){
        printf("\n\nChoose from menu\n");
        printf("-----------------\n");
        printf("1.Insert to bts\n2.Search in bts\n3.Inorder\n4.Preorder\n5.Postorder\n6.Display\n7.Exit\n");
        printf("Select a option:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter data to bts:");
            scanf("%d",&data);
            insertToBst(data);
            break;
        case 2:
            printf("\nEnter the data to be searched in the bts:");
            scanf("%d",&item);
            result = searchBts(item);
            if(result == NULL){
                printf("\nNot found");
            }
            else{
                printf("\n item present in bst");
            }
            break; 
        case 3:
            inorder(root);
            break;
        case 4:
            preorder(root);
            break;
        case 5:
            postorder(root);
            break;
        case 6:
            display();
            break;
        case 7:
            return(0);
            break;
        
        default:
            printf("Print a valid option\n");
            break;
        }
    }  
}