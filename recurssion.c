#include<stdio.h>
#include<math.h>
int totalsum(int n){

if(n==0){
    return 0;
}else{
    return n+totalsum(n-1);
}}

int main(){
    int n, sum;

    printf("Enter number of terms to be added: ");
    scanf("%d", &n);
    totalsum(n);

    sum=totalsum(n);
    printf("sum of first %d natural numbers is:%d",n,sum);
}