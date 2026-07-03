#include<stdio.h>
#include<math.h>
int totalsum(int n){

if(n/10==0){
    return n%10;
}else{
    return n%10 +totalsum(n/10);
}}

int main(){
    int n, sum;

    printf("Enter number whose digits to be added: ");
    scanf("%d", &n);
    totalsum(n);

    sum=totalsum(n);
    printf("sum of digits of %d  is:%d",n,sum);
}