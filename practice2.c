#include <stdio.h>
#include <stdlib.h>   // For rand() and srand()
#include <time.h>     // For time()

int main()
{
    int randomNumber, guess;
    int attempts = 0;

 
    srand(time(0));

    
    randomNumber = rand() % 100 + 1;


    printf("      NUMBER GUESSING GAME\n");

    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

   
    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > randomNumber)
        {
            printf("Too High! Try again.\n\n");
        }
        else if (guess < randomNumber)
        {
            printf("Too Low! Try again.\n\n");
        }
        else
        {
            printf("🎉 Congratulations! You guessed the correct number.\n");
            printf("Number of attempts: %d\n", attempts);
            break;  // Exit loop when guessed correctly
        }
    }

    return 0;
}
