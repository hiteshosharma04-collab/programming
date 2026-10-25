#include <stdio.h>
#include <string.h>

int main() {
    char songTitle[] = "Tum Hi Ho";
    int length = strlen(songTitle);
    printf("The length of the string '%s' is: %d\n", songTitle, length);
}

// task 2

#include <stdio.h>
#include <string.h>

int main() {
    char username1[50];
    char username2[50];
    
    printf("Enter first username: ");
    scanf("%s", username1);
    
    printf("Enter second username: ");
    scanf("%s", username2);
    
    if (strcmp(username1, username2) == 0) {
        printf("The usernames are the same.\n");
    } else {
        printf("The usernames are different.\n");
    }
}

// task 3

#include <stdio.h>
#include <string.h>

int main() {

    char shoppingApp[20];
    strcpy(shoppingApp, "Flipkart");
    
    printf("The value of shoppingApp is: %s\n", shoppingApp);
    
}

// task 4 

#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100];
    char username[6]; 
    
    printf("Enter your full name: ");
    
    scanf(" %[^\n]", fullName); 
    
    int len = strlen(fullName);
    
    if (len < 5) {
        
        strcpy(username, fullName);
    } else {
    
        strncpy(username, fullName, 5);
        username[5] = '\0'; 
    }
    
    printf("Generated username: %s\n", username);
    
    return 0;
}
