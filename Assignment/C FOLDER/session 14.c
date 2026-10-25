#include <stdio.h>

int main() {
	int i,
    prices[] = {120, 250, 90};
    int num_items = sizeof(prices) / sizeof(prices[0]); 
    int total = 0;


    for (i = 0; i < num_items; i++) {
        total += prices[i]; 
    }

    printf("Total price is: %d\n", total);

}

// task 2

#include <stdio.h>
#include <stdbool.h> 

bool isEven(int num) {
    if (num % 2 == 0) {
        return true;   
    } else {
        return false; 
    }
}

// task 3

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
    
        if (i % 2 == 0) {
            printf("%d\n", i); ]
        }
    }
}
