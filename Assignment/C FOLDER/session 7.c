#include <stdio.h>

int main() {
	int i,j;

    for(i = 0; i < 5; i++) {
    
        for( j = 0; j < 5; j++) {
            printf("c "); 
        }
        printf("\n"); 
    }

}

// task 2

#include <stdio.h>

int main() {
    int rows = 5;
    int i ,j;

    
    for (int i = 1; i <= rows; i++) {
    
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n"); 
    }

}

//task 3

#include <stdio.h>

int main() {
    int i , j , k;

    for (int i = 1; i <=5; i++) {
        
        for (int j = 1; j <=5 - i; j++) {
            printf(" ");
        }
    
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

// task 4

#include <stdio.h>

int main() {
    int size = 4;
    int i ,j ;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
            if ((i + j) % 2 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf("\n");
    }
}

// task 5
#include <stdio.h>

int main() {
    int rows;
    int i ,j,k;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}
