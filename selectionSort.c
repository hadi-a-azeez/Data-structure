#include <stdio.h>

void swap(int *smallest, int *first){
    int temp = *first;
    *first = *smallest;
    *smallest = temp;
}

int main(){
    int arr[10],n,i,smallest,j,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements to array:");
    for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i<n-1; i++){
        smallest = i;
        for(j = i+1; j<n; j++){
            if(arr[j]<arr[smallest]){
                smallest = j;
            }
            swap(&arr[smallest],&arr[i]);
        }
    }
    for(i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
}