#include<stdio.h>

void selectionsort(int arr[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        
        }
        if(min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}
int main()
{
    printf("Enter the number of elements: ");
    int n;
    scanf("%d",&n);
    printf("Enter the elements:\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);

    }
    selectionsort(arr,n);
    printf("sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}