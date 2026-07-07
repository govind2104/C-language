#include<stdio.h>

void bubblesort(int arr[], int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
int main(){
    int n,i;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++){
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("Elements of array before sorting:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    bubblesort(arr,n);
    printf("\nElement of array after sorting:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    
}