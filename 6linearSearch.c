//6. Search element in the array using linear search


#include <stdio.h>

int main()
{
    int n,arr[100],i,searchElem,found = 0,position;
    printf("How many elements ?\n");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i = 0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search:\n");
    scanf("%d",&searchElem);
    for(i= 0; i<n ; i++){
        if(arr[i] == searchElem){
            found++;
            position = i+1;
            break;
        }
    }
    if(found>0){
        printf("Element found at %d",position);
    }
    else{
        printf("Element not found");
    }
    return 0;
}
