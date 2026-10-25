#include <stdio.h>

int main() {
	int i;
    
    int dailySteps[7] = {6500, 8000, 7200, 10500, 9100, 5500, 11000};
    
    printf("--- Daily Step Counts ---\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }
    
}

// task 2

#include <stdio.h>

int main() {

    int playlistRatings[3][5] = {
        {4, 5, 3, 4, 5}, 
        {3, 4, 4, 5, 4}, 
        {5, 5, 4, 3, 4} 
    };
    
    printf("--- Ratings for the Second Playlist ---\n");
    for (int j = 0; j < 5; j++) {
        printf("Day %d Rating: %d\n", j + 1, playlistRatings[1][j]);
    }
    
}

// task 3

#include <stdio.h>
float calculateAverageSpend(int orderAmounts[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += orderAmounts[i]; // ??? ??????? ?? ???
    }
    return (float)sum / length; // ??? ??? ?? ???? ?? ?????? ????
}

int main() {
    int zomatoOrders[7] = {250, 450, 120, 300, 600, 150, 350};
    
    float average = calculateAverageSpend(zomatoOrders, 7);
    
    printf("Average weekly Zomato spend: %.2f Rs.\n", average);
}

// task 4

#include <stdio.h>

int main() {
    
    int cricketScores[3][2] = {
        {165, 172}, 
        {210, 195}, 
        {145, 140} 
    };
    
    int numMatches = 3;
    int numTeams = 2;
    
    printf("--- Highest Score From Each Match ---\n");

    for (int i = 0; i < numMatches; i++) {
        int highest = cricketScores[i][0]; 
        
        for (int j = 1; j < numTeams; j++) {
            if (cricketScores[i][j] > highest) {
                highest = cricketScores[i][j]; 
            }
        }
        printf("Match %d Highest Score: %d\n", i + 1, highest);
    }
}
