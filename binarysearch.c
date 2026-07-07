#include<stdio.h>

int binarysearch(int arr[],int n,int key)
{
    int low=0;
    int high=n-1, mid;

    while(low<= high){
        mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        }
        return -1;
        }
int main(){

    int n,i,key;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++){
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to be searched:");
    scanf("%d",&key);
    int result=binarysearch(arr,n,key);
    if(result==-1){
        printf("key not found");
    }else{
        printf("key found at index %d",result);
    }
    return 0;
}
    

