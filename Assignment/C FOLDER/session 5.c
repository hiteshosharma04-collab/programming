#include <stdio.h>
#include <string.h>

int main() {
    char team[50];
    
    printf("Enter your favorite IPL team name (e.g., MI, CSK, RCB): ");
    
    fgets(team, sizeof(team), stdin);
    team[strcspn(team, "\n")] = 0;


    if (strcmp(team, "Mumbai Indians") == 0 || strcmp(team, "MI") == 0) {
        printf("AAMCHI MUMAI!\n");
    } 
    else if (strcmp(team, "Chennai Super Kings") == 0 || strcmp(team, "CSK") == 0) {
        printf("THALA FOR A REASON!\n");
    } 
    else if (strcmp(team, "Royal Challengers Bangalore") == 0 || strcmp(team, "RCB") == 0) {
        printf("E SAAL CUP NAAMDE!\n");
    } 
    else {
        printf("Team not found!\n");
    }

}

// TASK 2
#include <stdio.h>

int main() {
    char choice;
    
    printf("Choose meal time:\n");
    printf("b - Breakfast\n");
    printf("l - Lunch\n");
    printf("d - Dinner\n");
    printf("s - Snack\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch(choice) {
        case 'b': case 'B':
            printf("TRY: Hot Idli Sambhar or Poha!\n");
            break;
        case 'l': case 'L':
            printf("TRY: SEV USAL!\n");
            break;
        case 'd': case 'D':
            printf("TRY: Paneer Tikka or Butter Chicken with Naan!\n");
            break;
        case 's': case 'S':
            printf("TRY: Samosa with Masala Chai!\n");
            break;
        default:
            printf("Try some fruits!\n");
    }

}

//TASK 3 

#include <stdio.h>

int main() {
    float cart_amount, discount = 0.0, final_amount;

    printf("Enter total cart amount: ");
    scanf("%f", &cart_amount);

    if (cart_amount > 1000) {
        if (cart_amount > 2000) {
            discount = 0.20; 
        } else {
            discount = 0.10; 
        }
    } else {
        discount = 0.0; 
    }

    final_amount = cart_amount - (cart_amount * discount);
    
    printf("Discount Applied: %.0f%%\n", discount * 100);
    printf("Final amount to pay: %.2f\n", final_amount);

}

// TASK 4

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible for Driving License\n");
    }
    if (age >= 21) {
        printf("Eligible for Credit Card\n");
    }
    if (age >= 25) {
        printf("Eligible for Car Rental\n");
    }
    
    if (age < 18) {
        printf("Not eligible for any of these services.\n");
    }

}



