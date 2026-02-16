#include <stdio.h>
#include <stdlib.h> //generates random number
#include <time.h>

int main()
{
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));
    printf("Welcome to the World of Guessing Numbers!\n");
    random = rand() % 100 + 1;

    do
    {
        printf("\nPlease enter your guess Between(1 to 100):");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random)
        {
            printf("Please guess a larger number. \n");
        }
        else if (guess > random)
        {
            printf("Please guess a smaller number. \n");
        }
        else
        {
            printf("Congratulations!You have guessed the correct number Successfully in %d attempts!", no_of_guess);
        }
    } while (guess != random);

    printf("\nBye bye, Thanks for Playing.");
    printf("\nDeveloped by: Aisik");

    return 0;
}
