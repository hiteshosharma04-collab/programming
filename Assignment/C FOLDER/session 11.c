#include <stdio.h>

int main() {
    int likes = 250;
    
    int *ptrLikes = &likes;

    printf("--- Task 1: Pointer Basics ---\n");
    printf("Value of likes (via dereferencing ptrLikes): %d\n", *ptrLikes);
    printf("Address stored in ptrLikes (Address of likes): %p\n", (void*)ptrLikes);
    
}

// task 2

#include <stdio.h>

void swapPlaylistCounts(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int playlist1 = 45; 
    int playlist2 = 120; 

    printf("--- Task 2: Swapping Playlists ---\n");
    printf("Before Swapping:\n");
    printf("Playlist 1: %d songs, Playlist 2: %d songs\n", playlist1, playlist2);

    // Call the function by passing addresses
    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\nAfter Swapping:\n");
    printf("Playlist 1: %d songs, Playlist 2: %d songs\n", playlist1, playlist2);

    return 0;
}

// task 3

#include <stdio.h>

int main() {
    // Array of 5 Zomato order amounts
    float zomatoOrders[5] = {250.50, 420.00, 150.75, 899.00, 310.25};
    
    float *ptr = zomatoOrders; 

    printf("--- Task 3: Array Iteration with Pointers ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Order %d: Amount = %.2f, Memory Address = %p\n", i + 1, *ptr, (void*)ptr);
        
        ptr++; 
    }

    return 0;
}

// task 4

#include <stdio.h>


void incrementFollowers(int *followers, int n) {
    int *ptr = followers; 
    
    for (int i = 0; i < n; i++) {
        *ptr += 100;
        ptr++;       
    }
}

int main() {
    int instaFollowers[5] = {1200, 450, 2300, 890, 5100};
    int n = 5;

    printf("--- Task 4: Increment Followers ---\n");
    printf("Original Follower Counts: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", instaFollowers[i]);
    }
    printf("\n");

    // Call the function
    incrementFollowers(instaFollowers, n);

    printf("Updated Follower Counts:  ");
    for (int i = 0; i < n; i++) {
        printf("%d ", instaFollowers[i]);
    }
    printf("\n");

}
