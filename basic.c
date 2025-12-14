#include<stdio.h>
int main()
{
    int n,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n%2!=0)
        {
            printf("0");
        }
        else{
            int x=1+n/4;
            printf("\n%d",x);
        }
    }
    return 0;
}



