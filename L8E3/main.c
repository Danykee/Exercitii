#include <stdio.h>
#include <stdlib.h>

typedef  struct list{
int variable;
struct list *link;
}nod;
nod *insertValue(nod *l){
nod *g,*p=(nod*)malloc(sizeof(nod));
printf("Enter  a value = ");
scanf("%d",&p->variable);
p->link=NULL;
if(l==NULL)
    l=p;
    else{
        p=l;
        while(p->link!=NULL)
            p=p->link;;
        p->link=p;
    }
    return l;
}

void printList(nod *l){
printf("\nThe list is : ");
while(l!=NULL){
    printf("%d",l->variable);
    l=l->link;
}
}

int delete(int num){
struct node *temp,*prev;
temp=head;
while(temp!=NULL){
    if(temp->data == num){
        if(temp==head){
            head=temp->link;
            free(temp);
            return 1;
        }
        else{
            prev->link=temp->link;
            free(temp);
            return 1;
        }
    }
    else{
        prev=temp;
        temp=temp->link;
    }
}
return 0;

}

int main()
{
    nod *l;
    int k;
    printf("Enter the lenght : ");
    scanf("%d",&k);
    l=(nod*)malloc(k*sizeof(nod));
    int i;
    for(i=0;i<k;i++;l++){
        scanf("%d",&l->variable);
        if(i>0 && i<k)
            (l-1) -> link=l;
        else
            l->link=NULL;
    }
    l=k;
    for( ;l!=NULL;l=l->link)
        printf("%d", l->variable);
    printf("%d", delete(l.,k));

    return 0;
}
