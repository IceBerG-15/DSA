#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int a[],int n);//function initialization

int main()
{
    int n;
    printf("\n enter size: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("\n enter element: ");
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);//function call
}

void bubble_sort(int a[],int n)//function definition
{
    int temp;
    int s;//swap variable
    for(int i=0;i<n;i++)
    {   
        s=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                s=1;//if swapping is done then it value is 1
            }
        }
        if(s==0)//if no swapping is done in the j-loop then it means array is already sorted, so break out of loop.
            break;
        printf("\nelement after %d pass.",i+1);
        for(int k=0;k<n;k++)//to show array after every pass.
            printf("%d ",a[k]);
        
    }
}
