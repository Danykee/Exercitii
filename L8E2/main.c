#include <stdio.h>
#include <stdlib.h>

typedef struct list{
int variable;
struct list *link;
}nod;
nod *insertValue(nod *l){
nod *q, *p=(nod*)malloc(sizeof(nod));
printf("Enter a value = ");
scanf("%d", &p ->variable);
p->link=NULL;
if(l==NULL)
    l=p;
    else{
        q=l;
        while(q->link!=NULL)
            q=q->link;
        q->link=p;
    }
    return l;
}

void printList(nod *l){
printf("\nThe list is : ");
while(l!=NULL){
    printf("%d", l->variable);
    l=l->link;}
}

void GetNth(nod *l){
int i,n;
printf("\n\n  Enter  The n-th position value you  are looking for : ");
scanf("%d",&n);
for(i=0;i<n;i++)
    l=l->link;
    switch(n%10){
    case 1 : printf("The %d st element is %d \n",n,l->variable);
    break;
    case 2 : printf("The %d nd element is %d \n, n,l->variable");
    break;
    case 3 : printf("The %d rd element is %d\n",n,l->variable);
    break;
    default : printf("The %d the element is %d\n", n,l->variable);
    break;
    }
    }

int main()
{
    nod *x;
    x=(nod*)malloc(sizeof(nod));
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("Enter a value = ");
    scanf("%d",&x->variable);
    x->link=NULL;
    int i;
    for(i=1;i<=n;i++)
        insertValue(x);
    printList(x);
    GetNth(x);


    return 0;
}

