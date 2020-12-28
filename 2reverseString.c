//2. Reverse a string using pointer

#include <stdio.h>
#include <string.h>

void reverse(char * pString){
    char * pStart = pString; //first
    char * pEnd = pStart + strlen(pString) - 1;
    
    while(pEnd > pStart){
        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
        
        pStart++;
        pEnd--;
    }
    printf("Reverse of string: %s",pString);
}

int main()
{
    char str[100];
    printf("\n Enter a string :");
    scanf("%s",str);
    reverse(str);
    return 0;
}