#include <stdio.h>

int main(){
    int arr[10],n,i,temp,j;
    printf("Enter the number of items:");
    scanf("%d",&n);
    printf("\nEnter the elements to array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 1; i<n ; i++){  //sorted part, will increment
        temp = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]> temp){  //unsorted part, will decrement
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(i= 0 ; i<n; i++){
        printf("%d",arr[i]);
    }
}