#include <stdio.h>
#include <ctype.h>
#include <string.h>
void getInitials(const char *fullName, char *initials);

int main() {
    char cricketer[] = "Virat Kohli";
    char initials[10] = ""; 

    getInitials(cricketer, initials);

    
    printf("Cricketer Name: %s\n", cricketer);
    printf("Initials: %s\n", initials);

}

void getInitials(const char *fullName, char *initials) {
    int i = 0, j = 0;

    if (fullName[0] != '\0') {
        initials[j++] = toupper(fullName[0]); 
    }
    for (i = 1; fullName[i] != '\0'; i++) {
        if (fullName[i - 1] == ' ' && fullName[i] != ' ') {
            initials[j++] = toupper(fullName[i]);
        }
    }
    initials[j] = '\0'; 
}

// task 2

#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 5
#define MAX_NAME_LEN 30

// Function Declaration
void addToCart(char cart[MAX_ITEMS][MAX_NAME_LEN], int *itemCount, const char *productName);

int main() {
    char shoppingCart[MAX_ITEMS][MAX_NAME_LEN] = {0}; 
    int count = 0; 

    printf("--- Initial Cart ---\n");
    printf("Items count: %d\n\n", count);

    addToCart(shoppingCart, &count, "Smartphone");
    addToCart(shoppingCart, &count, "Wireless Earbuds");

    printf("\n--- Outside Function Check ---\n");
    printf("Total items persisting in Main: %d\n", count);
    
    return 0;
}


void addToCart(char cart[MAX_ITEMS][MAX_NAME_LEN], int *itemCount, const char *productName) {
    if (*itemCount < MAX_ITEMS) {
    
        strcpy(cart[*itemCount], productName);
        (*itemCount)++; 

     
        printf("Successfully added: %s\n", productName);
        printf("Updated Cart List:\n");
        for (int i = 0; i < *itemCount; i++) {
            printf("- %s\n", cart[i]);
        }
    } else {
        printf("Cart is full!\n");
    }
}

// task 3

#include <stdio.h>

// Function Declarations
void increaseFollowersByValue(int followers);
void increaseFollowersByReference(int *followers);

int main() {
    int myFollowers = 5000;

    printf("Original Followers Count: %d\n\n", myFollowers);

    // 1. Pass-by-Value Call
    increaseFollowersByValue(myFollowers);
    printf("After increaseFollowersByValue, in main: %d (No Change)\n\n", myFollowers);


    increaseFollowersByReference(&myFollowers);
    printf("After increaseFollowersByReference, in main: %d (Changed!)\n", myFollowers);

    return 0;
}


void increaseFollowersByValue(int followers) {
    followers += 1000;
    printf("Inside increaseFollowersByValue function: %d\n", followers);
}


void increaseFollowersByReference(int *followers) {
    *followers += 1000;
    printf("Inside increaseFollowersByReference function: %d\n", *followers);
}

// task 4

#include <stdio.h>

// Function Declaration
void formatPrice(int price, char *outputBuffer);

int main() {

    int price1 = 1599;
    int price2 = 29999;
    int price3 = 450;

    char formattedString[50];

    // Product 1
    formatPrice(price1, formattedString);
    printf("Product 1 Price: %s\n", formattedString);

    // Product 2
    formatPrice(price2, formattedString);
    printf("Product 2 Price: %s\n", formattedString);

    // Product 3
    formatPrice(price3, formattedString);
    printf("Product 3 Price: %s\n", formattedString);


}

void formatPrice(int price, char *outputBuffer) {
    
    sprintf(outputBuffer, "%d", price); 
}

// task 5

#include <stdio.h>
#include <ctype.h>
void capitalizeFirstLetter(char *str);

int main() {
    
    char username[] = "john_doe";
    

    char productName[] = "laptop bag";

    printf("Before Refactoring:\n");
    printf("Username: %s | Product: %s\n\n", username, productName);

    capitalizeFirstLetter(username);
    capitalizeFirstLetter(productName);

    printf("After Refactoring (Reusable Function):\n");
    printf("Username: %s | Product: %s\n", username, productName);
}

void capitalizeFirstLetter(char *str) {
    if (str != NULL && str[0] != '\0') {
        str[0] = toupper(str[0]);
    }
}
