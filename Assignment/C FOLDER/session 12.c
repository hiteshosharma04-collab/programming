#include <stdio.h>
#include <string.h>

// Declaring the Playlist structure
struct Playlist {
    char title[50];
    char artist[50];
    int duration;
};

int main() {
    struct Playlist mySong = {"thinking of you", "ap dhillon", 3000};
    printf("--- Favorite Song Details ---\n");
    printf("Title: %s\n", mySong.title);
    printf("Artist: %s\n", mySong.artist);
    printf("Duration: %d seconds\n", mySong.duration);

}

// task 2

#include <stdio.h>

// Declaring the FoodItem structure
struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    struct FoodItem menu[3] = {
        {"Paneer Butter Masala", 280.00, 4.5},
        {"Garlic Naan", 60.00, 4.2},
        {"Chicken Biryani", 350.00, 4.7}
    };

    printf("--- Zomato Menu ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Item %d: %s | Price: %.2f | Rating: %.1f/5.0\n", 
               i + 1, menu[i].itemName, menu[i].price, menu[i].rating);
    }

}

// task 3

#include <stdio.h>

struct Time {
    int hours;
    int minutes;
};
struct MovieShow {
    char movie[50];
    int screen;
    struct Time showTime; 
};

int main() {
    struct MovieShow currentShow = {"Inception", 3, {18, 45}};

    printf("--- Show Details ---\n");
    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n", 
           currentShow.movie, currentShow.screen, currentShow.showTime.hours, currentShow.showTime.minutes);

}

// task 4

#include <stdio.h>

struct Bio {
    char description[100];
    int age;
};

struct InstaProfile {
    char username[30];
    int followers;
    struct Bio profileBio; // Nested structure
};

int main() {
    struct InstaProfile user = {"coder_hitesh", 1250, {"Passionate C developer & Tech Learner.", 21}};

    // Displaying all fields
    printf("--- Instagram Profile ---\n");
    printf("Username: @%s\n", user.username);
    printf("Followers: %d\n", user.followers);
    printf("Bio Description: %s\n", user.profileBio.description);
    printf("Age: %d\n", user.profileBio.age);

}




