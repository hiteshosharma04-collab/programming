#include <stdio.h>

int main() {
    float hours[7], total = 0, average;
    int i;

    printf("Student Productivity Tracker\n\n");

    // Enter study hours
    for(i = 0; i < 7; i++) {
        printf("Enter study hours for Day %d: ", i + 1);
        scanf("%f", &hours[i]);
        total += hours[i];
    }

    average = total / 7;

    FILE *fp = fopen("study_data.txt", "w");

    if(fp == NULL) {
        printf("File error!");
        return 1;
    }

    for(i = 0; i < 7; i++)
        fprintf(fp, "Day %d: %.2f hours\n", i + 1, hours[i]);

    fprintf(fp, "Total: %.2f hours\n", total);
    fprintf(fp, "Average: %.2f hours/day\n", average);

    fclose(fp);

    printf("\n--- Weekly Report ---\n");
    printf("Total Study Hours: %.2f\n", total);
    printf("Average Hours/Day: %.2f\n", average);
    printf("Data saved in study_data.txt\n");


}
