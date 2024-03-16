#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, numGuesses = 0;
    srand(time(NULL));  // Seed the random number generator

    secretNumber = rand() % 10 + 1;  // Generate a random number between 1 and 10

    printf("I'm thinking of a number between 1 and 10. Can you guess what it is?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        numGuesses++;

        if (guess < secretNumber) {
            printf("Too low. Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high. Try again.\n");
        }
    } while (guess != secretNumber);

    printf("Congratulations! You guessed the number in %d guesses.\n", numGuesses);

    return 0;
}
