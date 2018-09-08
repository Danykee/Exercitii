#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[1000],i,avarage;
    int s,k;
    s=0;
    k=0;

    FILE *fptr;
    if((fptr=fopen("data.txt","r"))==NULL){
        printf("Error opening  file.");
        return 0;
    }
    for(i=0;i<1000;i++)
        fscanf(fptr,"%[^n]",a[i]);
    for(i=0;i<1000;i++)
        s++;
    avarage=s/1000;
    for(i=0;i<1000;i++)
        if(a[i]>avarage)
        k++;
    printf("There are %d integers  greater  than the  avarage.\n",&k);
    return 0;
}
