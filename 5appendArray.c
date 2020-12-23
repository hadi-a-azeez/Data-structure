// Merge two Arrays in C
// ---codescracker.com---

/* #include<stdio.h>
#include<conio.h> */
int main()
{
    int arr1[50], arr2[50], size1, size2, i, k, merge[100];
    printf("Enter Array 1 Size: ");
    scanf("%d", &size1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &size2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
        printf("%d ", merge[i]);
    getch();
    return 0;
}


#include <stdio.h>

int main(){
    int arrOne[50],arrTwo[50],mergeArr[100],i,k,sizeOne,sizeTwo,size;
    printf("Enter the size of first array:");
    scanf("%d",&sizeOne);
    printf("Enter %d elements of first array:",sizeOne);
    for(i=0; i<sizeOne; i++){
        scanf("%d",&arrOne[i]);
    }
    printf("Enter the size of second array:");
    scanf("%d",&sizeTwo);
    printf("Enter %d elements of second array:",sizeTwo);
     for(i=0; i<sizeTwo; i++){
        scanf("%d",&arrTwo[i]);
    }
    printf("Calculating");
    for(i=0; i<sizeOne; i++){
      mergeArr[i] = arrOne[i];  
    }
    size = sizeOne + sizeTwo;
    for(i=0; k=sizeOne; k<size && i<sizeTwo){
        mergeArr[k] = arrTwo[i];
    }
    printf("Merged array :\n");
    for(i=0; i<size; i++){
        printf("%d ",mergeArr[i]);
    }
    return 0;
}

