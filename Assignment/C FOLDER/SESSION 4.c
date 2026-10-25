#include <stdio.h>

float calculateTotal(float itemPrice, int quantity) {
    return itemPrice * quantity;
}

int main() {
    float price = 250.50;
    int qty = 3;
    
    float totalBill = calculateTotal(price, qty);
    printf(" Total Bill Amount: %.2f\n", totalBill);

}

// task 2
 
 #include <stdio.h>

float FinalPrice(float productPrice, float discountPercentage, int isMember) {
    
    float discountAmount = productPrice * (discountPercentage / 100.0);
    float finalPrice = productPrice - discountAmount;
    
    if (isMember == 1) {
        finalPrice = finalPrice * 0.95; 
    }
    
    return finalPrice;
}

int main() {
    float price = 1000.0;
    float discount = 10.0; 
    int isMember = 1;      
    
    float finalAmount = FinalPrice(price, discount, isMember);
    printf("Final Price after discount: %.2f\n", finalAmount);
}

// task 3

#include <stdio.h>
int isEligibleForOffer(int age, float totalOrderValue) {
    return (age >= 18 && totalOrderValue > 500);
}

int main() {
    int age = 20;
    float orderValue = 650.0;
    
    if (isEligibleForOffer(age, orderValue)) {
        printf(" User is Eligible for the offer.\n");
    } else {
        printf(" User is NOT Eligible for the offer.\n");
    }
    
}

// task 4

#include <stdio.h>

int main() {
    int likes = 1200;
    int comments = 150;
    int shares = 60;
    
    if (likes >= 1000 || (comments > 200 && shares >= 50)) {
        printf(" The postTrending on Instagram!\n");
    } else {
        printf(" The post is NOT trending.\n");
    }
    
}

// task 5

#include <stdio.h>

int main() {
    int followerCount = 100;
    
    printf("\n");
    printf("Initial followerCount: %d\n\n", followerCount);
    printf("Using post-increment (followerCount++): %d\n", followerCount++);
    printf("Value after post-increment step: %d\n\n", followerCount);
    
    
    followerCount = 100;
    
    printf("Using pre-increment (++followerCount): %d\n", ++followerCount);
    printf("Value after pre-increment step: %d\n", followerCount);
    
    
}
