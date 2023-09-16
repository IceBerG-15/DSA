//queue using stack 
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int stack[SIZE];
int top1=-1;

void push();
void queue_display();
void stack_display();

int main()
{
    int ch;
    while(ch<4)
    {
        printf("\n MENU: ");
        printf(" \n 1-PUSH \n 2-STACK-DISPLAY \n 3-QUEUE-DISPLAY \n 4-EXIT");
        printf("\n enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                stack_display();
                break;
            case 3:
                queue_display();
                break;
            case 4:
                printf("exitted");
                break;
            default:
                printf("invalid choice");
                break;
        }
    }
    return 0;
}

void push()
{   
    int x;
    printf("enter number: ");
    scanf("%d",&x);
    stack[++top1] = x;
}


void queue_display()
{
    int top2=-1;
    int queue[SIZE];
    for(int i=top1; i>-1; i--)
        queue[++top2] = stack[i];
    printf("\n QUEUE: ");
    for(int i=top2; i>-1; i--)
        printf(" %d ",queue[i]);
}

void stack_display()
{
    printf("\n STACK: ");
    for(int i=top1; i>-1; i--)
        printf(" %d ",stack[i]);
}
