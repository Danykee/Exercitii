#include <stdio.h>
#include <stdlib.h>


typedef struct list{
int variable;
struct list *link;
}nod;

nod* insertvariable(nod *l){
nod *q, *p;
*p=(nod*)malloc(sizeof(nod));
printf("Enter a value = ");
scanf("%d", &p->variable);
p->link=NULL;
if(l==NULL)
l=p;
else{
    q=l;
    while(q->link != NULL)
        q=q->link;
    q->link=p;}
    return l;
}

void printlist(nod *l){
printf("\n The list is : ");
while(l!=NULL){
    printf("%d", l->variable);
    l=l->link;}
}

void count(nod*l){
int k,y;
printf("\n\n Enter  the value you are looking for : ");
scanf("%d",&y);
for(k=0;l!=NULL;l=l->link)
    if(l->variable==y)
        k++;
    if(k==1)
        printf("The value %d apprears %d times\n",y,k);
}

int main()
{
    nod *l;
    l=(nod*)malloc(sizeof(nod));
    int n,i;
    printf("n=");
    scanf("%d",&n);
    printf("Enter a value = ");
    scanf("%d", &l->variable);
    l->link==NULL;
    for(i=0;i<n;i++)
        insertvariable(l);
    printlist(l);
    count(l);

    return 0;
}
