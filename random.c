#include <stdio.h>

int main(){

int i,num,smallest,n;

printf("Enter number of entries you want= ");
scanf("%d",&n);

printf("Enter \n entry number 1=");
scanf("%d",&num);
smallest=num;

for(i=2; i<=n ; i++){
    printf("entry number %d= ",i);
    scanf("%d",&num);
   
    if(num<smallest){
        smallest=num;
    
     }
   }
  printf("\n\nThe smallest number is =%d", smallest);

  return 0;
}
