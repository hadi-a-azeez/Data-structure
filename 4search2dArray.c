//4. Search an element in the 2-dimensional array

//#include <stdio.h>

int main(){
    int row,column,i,j,searchElem,count = 0;
    printf("How many rows and column?\n");
    scanf("%d %d",&row,&column);
    int numArray[row][column];
    for(i=0; i<row; i++){
        printf("Enter the elements of %d row:",i+1);
        for(j=0; j<column; j++){
            scanf("%d",&numArray[i][j]);
        }
    }
    printf("Enter the element to search for:");
    scanf("%d",&searchElem);
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            if(numArray[i][j] == searchElem){
                printf("found on location (%d,%d)\n",i,j);
                count++;
            }
        }
    }
    if(count == 0){
        printf("Not found");
    }
    return 0;
}
