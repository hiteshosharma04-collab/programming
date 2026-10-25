#include <stdio.h>

// TASK 2


int main() {
    int choice = 0;
    
    while (choice != 3) {
        printf("\n--- IPL MENU ---\n");
        printf("1. View Favorite 3 IPL Teams\n");
        printf("2. Add a New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\nYour Favorite Teams: MI, CSK, RCB\n");
                break;
            case 2:
                printf("\nFeature coming soon! (New team addition requested)\n");
                break;
            case 3:
                printf("\nExiting the program. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice!\n");
        }
    }
    
}

// task 1 

#include <stdio.h>

int main() {
    printf("Starting Countdown:\n");
    
    for (int i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }
    
    printf("Liftoff!\n");
    
}

// task 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    
    char songs[3][20] = {"Believer", "Dynamite", "Stay"};
    char guess[20];
    
    srand(time(0));
    int randomIndex = rand() % 3; 
    char* correctSong = songs[randomIndex];
    
    printf("Guess the Song Game!\n");
    printf("Hint: The song is one of these: Believer, Dynamite, Stay\n\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%s", guess);
        
        if (strcmp(guess, correctSong) != 0) {
            printf("Wrong guess! Try again.\n\n");
        }
        
    } while (strcmp(guess, correctSong) != 0); 
    
    printf("Correct! You guessed the right song: %s\n", correctSong);
}

// task 4
// entry controlled loop(for , while) = Checked before executing the loop body.
// exit controlled loop (do while)	Checked after executing the loop body.


