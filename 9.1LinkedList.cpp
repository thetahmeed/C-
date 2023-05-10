#include <stdio.h>

struct node
{
    int info;
    struct node *next;
};

void printList(struct node *x);
void search(struct node *x);
void insert(struct node *x);

int main()
{
    struct node *head, *first, *last;
    int input = 1;

    head = new node;

    printf("Enter The first Element: ");
    scanf("%d", &head->info);

    printf("Enter the next value: ");
    scanf("%d", &input);

    first = head;

    while (input > 0)
    {
        // 1. Add the last value
        last = new node;
        last->info = input;

        // 2. Link first to last
        first->next = last;

        // 3. Move first to last
        first = first->next;

        printf("Enter the next value: ");
        scanf("%d", &input);
    }

    first->next = NULL;

    printList(head);

    // search(head);

    insert(head);

    return 0;
}

void printList(struct node *x)
{
    printf("\nList: ");

    while (x)
    {
        printf("%d ", x->info);
        x = x->next;
    }
}

void search(struct node *x)
{
    printf("\nSearch: ");
    int searchValue;
    scanf("%d", &searchValue);

    while (x->info != searchValue && x != NULL)
    {
        x = x->next;
    }

    if (x->info == searchValue)
    {
        printf("\nSearch found");
    }
    else
    {
        printf("\nSearch not found");
    }
}

void insert(struct node *x)
{
    struct node *head, *newNode;

    newNode = new node;
    printf("\nEnter the next value: ");
    scanf("%d", &newNode->info);
    newNode->next = NULL;

    head = x;

    while (x)
    {
        x = x->next;
    }

    if (x == NULL)
    {
        x->next = newNode;
    }
    
    printList(head);
}