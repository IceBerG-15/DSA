#include <stdio.h>
#include <stdlib.h>

void selection_sort(int a[],int n);

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
    selection_sort(a,n);
}

void selection_sort(int a[],int n)
{
    int temp;
    int s;//swap check variable.
    int min;//this variable will store the index of minimum array element.
    for(int i=0;i<n-1;i++)
    {   
        s=0;
        min=i;//initially we assign i value to min.
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])//checking if other element is min or not.
            {
                min=j;//giving minimum element index to min.
                s=1;//changing value of s if min changes.
            }
        }
        if(s==0)//if min doesnt change it means array element are in sorted order.
            break;
        //swapping the element at min index with first element of unsorted array.
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        //printing array after every pass.
        printf("\nelement after %d pass.",i+1);
        for(int k=0;k<n;k++)
            printf("%d ",a[k]);
        
    }
}
