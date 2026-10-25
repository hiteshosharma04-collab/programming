#include <stdio.h>

int main() {
    FILE *file = fopen("playlist.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(file, "Love Story\n");
    fprintf(file, "Blinding Lights\n");
    fprintf(file, "Lovely\n");
    
    fclose(file);
    
    printf("Task 1: Playlist created and 3 songs written successfully.\n");
    return 0;
}

// task 2

#include <stdio.h>

int main() {
    char song[100];
    
    FILE *file = fopen("playlist.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file! Make sure Task 1 is run first.\n");
        return 1;
    }
    
    printf("--- Current Playlist ---\n");
    while (fgets(song, sizeof(song), file) != NULL) {
        printf("%s", song);
    }
    
    fclose(file);
    return 0;
}
 
 // task 3
 
 #include <stdio.h>

int main() {
    FILE *file = fopen("playlist.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(file, "Shape of You\n");
    fprintf(file, "Send My Love\n");
    
    fclose(file);
    
    printf("Task 3: Two more songs appended successfully.\n");
}

//task 4

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char original_song[100];
    char temp_song[100];
    
    FILE *file = fopen("playlist.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("--- Songs containing 'love' (case-insensitive) ---\n");
    
    while (fgets(original_song, sizeof(original_song), file) != NULL) {
        
        strcpy(temp_song, original_song);
        for (int i = 0; temp_song[i] != '\0'; i++) {
            temp_song[i] = tolower((unsigned char)temp_song[i]);
        }
        
        if (strstr(temp_song, "love") != NULL) {
            printf("%s", original_song);
        }
    }
    
    // Close the file
    fclose(file);
    return 0;
}
