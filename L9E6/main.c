#include <stdio.h>
#include <stdlib.h>

int a[100],n,k;

void poz(int li,int ls, int *k, int a[]){
int i,j,c,il,jl;
i=li;
j=ls;il=0;
jl=-1;
while(i<j){
    if(a[i]>a[j]){
        c=a[j];
        a[j]=a[i];
        a[i]=c;
        c=il;
        il=-jl;
        jl=-c;
    }
    i=i+il;
    j=j+jl;
}
k=i;
}

void quick(int li,int ls){
if(li<ls){
    poz(li,ls,k,a);
    quick(li,k-1);
    quick(k+1,ls);
    }
}

int main()
{
    int i;
    printf("%d = ",&n);
    for(i=1;i<=n;i++){
        printf("Enter the elements : \n");
        scanf("%d",a[i]);
    }
    quick(1,n);
    for(i=1;i<=n;i++)
        printf("%d\n",a[i]);
    return 0;
}
