
#include<stdio.h>

struct list
{
    int info;
    struct list *next;
};

void printList(struct list *x);
void search(struct list *x);
void simpleInsertion(struct list *x);

struct list *p;

int main()
{
    struct list *q, *t;

    int i;

    int x;

    p = new list;

    printf("Enter The first Element: ");
    scanf("%d",&p->info);

    printf("Enter the next value: ");
    scanf("%d",&x);

    q=p;

    while (x>0)
    {
        t = new list;

        t->info = x;

        q->next = t;
        
        q = q->next;

        printf("Enter the next value: ");
        scanf("%d",&x);
    }

    q->next = NULL;

    printList(p);

    //search(p);

    simpleInsertion(p);

    

}

void printList(struct list *x){
    printf("\nList: ");
 
    while(x)
    {
        printf("%d ",x->info);
        x=x->next;
    }
}

void search(struct list *x){
    printf("\nSearch: ");
    int searchValue;
    scanf("%d", &searchValue);

    while (x->info != searchValue && x != NULL)
    {
        x = x->next;
    }

    if(x->info == searchValue){
        printf("\nSearch found");
    }else{
         printf("\nSearch not found");
    }
    
}

void simpleInsertion(struct list *x){
    struct list *temp, *y;

    printf("\nEnter a new value: " );
    scanf("%d",&temp->info);
    temp->next = NULL;

    y = x;

    while(x->next != NULL)
        {
             x=x->next ;
        }

    x->next =temp;

    printList(y);
}