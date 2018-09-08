#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    char c[1000];
    FILE  *fptr;
    if((fptr = fopen("program.txt","r"))==NULL){
        printf("Error opening file.");
        return 0;
    }
    fscanf(fptr,"%[^n]",c);
    n=strlen(c);
    printf("There are %d characters",&n);
    fclose(fptr);
    return 0;
}
