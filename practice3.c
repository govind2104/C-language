#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    srand(time(NULL));
    int n=0,rn,ct=0;
    rn=(rand()%100+1);
    printf("Guess a number between 1 to 100 ");
    while(rn!=n) {
        scanf("%d",&n);
        ct++;
        if(n>rn) {
            printf("\nGuess lower number ");
        }
        else if(n<rn){
            printf("\nGuess high number ");
        }
    }
    printf("\n%d Guesses\nNumber is correct %d",ct,n);
    return 0;
}