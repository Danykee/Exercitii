#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[1000];;
    FILE *fptr;
    if((fptr=fopen("program.txt","r"))=NULL){
        printf("Error opening file");
        return 0;
    }
    fscanf(fptr,"%[^n]",c);
    printf("Data from file : \n %s",c);
    fclose(fptr);

    return 0;
}
