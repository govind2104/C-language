#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements you want is an aarray:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("the largest element in the array is: %d", largest);

    return 0;
}