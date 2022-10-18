#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
    
};
void append(struct node **,int );
void entry(struct node*,int);
void count(struct node *);
void middle(struct node*,int);
void del(struct node*);
void del1(struct node*);
void del2(struct node*);
int main()
{
    struct node *head;
    head = NULL;
    printf("Entering elements in the first: \n");
    append(&head,16);
    append(&head,8);
    append(&head,4);
    append(&head,2);
    count(head);
    entry(head,32);
    entry(head,64);
    entry(head,128);
    printf("\n Entering elements in the last :\n");
    count(head);
    middle(head,999);
    printf("\n Adding 999 in 5th position \n");
    count(head);
    printf("\nDeleting the first element\n");
    //Now deleting the first node
    del(head);
    count(head);
    printf("\nDeleting the last element\n");
    //Now deleting the first node
    del1(head);
    count(head);
    printf("\nDeleting the 5th element\n");
    //Now deleting the first node
    del2(head);
    count(head);
    
}
void append(struct node **p,int m) //Entry at beginning
{
    struct node *newnode;
    newnode = (struct node*)malloc((sizeof(struct node)));
    newnode -> link = *p;
    *p = newnode;
    newnode -> data = m;
}

void count(struct node *p)
{
    struct node *q = p;
    while(q!= NULL)
    {
        printf("%d \n", q -> data);
        q = q -> link;
        
    }
}
void entry(struct node *p,int m)
{
    struct node *q = p;
    struct node *newnodes;
    newnodes = (struct node*)malloc((sizeof(struct node)));
    newnodes -> link = NULL;
    while(q->link != NULL)
    {
        q = q->link;
    }
    
    q -> link = newnodes;
    newnodes -> data = m;
}
void middle(struct node *p,int m)
{
    struct node *q = p;
    struct node *newnode;
    newnode = (struct node*)malloc((sizeof(struct node)));
    newnode -> data = m;
    //Entering value in 5th position:
    for(int i = 1;i<4;i++)
    {
        if(q->link!= NULL)
        q=q->link;
    }
    newnode->link = q->link;
    q->link = newnode;
}
void del(struct node *p)
{
    struct node *q;
    q = p;
    q = q->link;
    
}
void del1(struct node *p)
{
    struct node *q = p;
     while(q->link->link != NULL)
    {
        q = q->link;
    }
    q->link = NULL;
    
}
void del2(struct node *p)
{
    struct node *q = p;
     for(int i = 1;i<4;i++)
    {
        if(q->link!= NULL)
        q=q->link;
    }

    q->link = q->link->link;
    
}


