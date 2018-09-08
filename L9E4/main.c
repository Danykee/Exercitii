#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,d,swap;
    printf("Enter number of elements : \n");
    scanf("%d",&n);
    printf("Enter %d integers \n",n);
    for(i=0;i<n;i++)
        scanf("%d",a[i]);
    for(i=0;i<n;i++){
        for(d=0;d<n-i-1;d++){
            if(a[d]>a[d+1]){
                swap = a[d];
                a[d]=a[d+1];
                a[d+1]=swap;
            }
        }
    }
    printf("Sorted  list : \n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;
}
