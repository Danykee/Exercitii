#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,first,last,middle;
    int n,search;
    int a[100];

    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    printf("Enter the elements \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("Enter value to find : \n");
    scanf("%d",&search);
    first = 0;
    last = n-1;
    middle = (last + first)/2;
    while(first <= last){
        if(a[middle]<search)
            first = middle +1;
        else
        if(a[middle]==search){
            printf("%d found at location %d. \n",search,middle+1);
            break;
        }
        else
            last=middle -1 ;
        middle = (first + last)/2;
    }
    if(first>last)
        printf("Not found, the element %d is not in the list. \n",search);
    return 0;
}
