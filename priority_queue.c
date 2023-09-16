#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL,*ptr;

void enqueue();
void dequeue();
void display();
void sort();

int main()
{
    int ch;
    while(ch<4)
    {
        printf("\nMENU: ");
        printf("\n1-enqueue \n2-dequeue \n3-display \n4-exit");
        printf("\nenter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nexitted successfully.");
            break;
        default:
            printf("\nenter correct choice. ");
            break;
        }
    }
    return 0;
}

void sort()
{
    int i,j;
    int temp;
    if(front!=rear)
    {
        ptr=front;
        while(ptr!=rear)
        {
            i=ptr->data;
            j=ptr->next->data;
            if(i<j)
            {
                temp=ptr->data;
                ptr->data=ptr->next->data;
                ptr->next->data=temp;
            }  
            else
                ptr=ptr->next;
        }
    }  
}

void enqueue()
{
    int x;
    printf("\nenter data: ");
    scanf("%d",&x);
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data=x;
    newNode->next=NULL;
    if(front==NULL || rear==NULL)
        front = newNode;
    else
        rear->next=newNode;
    rear=newNode;
    sort();
}

void dequeue()
{
    if(front==NULL)
        printf("\n queue empty.");
    else
    {
        ptr=front;
        front=front->next;
        printf("\n %d is deleted.",ptr->data);
        free(ptr);
    }
}

void display()
{
    if(front==NULL)
        printf("\n queue empty.");
    else
        ptr=front;
        printf("\nQUEUE:");
        while(ptr!=NULL)
        {
            printf("\t%d ",ptr->data);
            ptr=ptr->next;
        }
}