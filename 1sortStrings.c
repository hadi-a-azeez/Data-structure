//1. Sort a given list of strings

/* #include <stdio.h>
#include <string.h> */

int main(){
    char str[20][25];
    char temp[25];
    int n,i,j;
    printf("How many strings ?");
    scanf("%d",&n);
    printf("\nEnter the strings :");
    for(i = 0; i<n; i++){
        gets(str[i]);
    }
    for(i=0; i<n-1; i++){  //Bubble sort
        for(j = 0; j<n-i-1; j++){
            if(strcmp(str[j],str[j+1])>0){
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    printf("\nSorted array is:");
    for(i = 0; i<n; i++){
        printf("%s\n",str[i]);
    }

    return 0;
}