#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("my_fav_songs.txt");
    if (outFile.is_open()) {
        outFile << "tere sang yaara\nSaibo re\ntum se hi\nthinking of you\ntum ho\n";
        outFile.close();
        std::cout << "5 songs written successfully.\n";
    }
}

// task 2

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile("my_fav_songs.txt");
    std::string song;
    if (inFile.is_open()) {
        while (std::getline(inFile, song)) {
            std::cout << song << "\n";
        }
        inFile.close();
    }
}

// task 3 

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream outFile("my_fav_songs.txt", std::ios::app); // Open in append mode
    std::string newSong;
    std::cout << "Enter a new song to add: ";
    std::getline(std::cin, newSong);
    
    if (outFile.is_open()) {
        outFile << newSong << "\n";
        outFile.close();
    }
}

// task 4

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream outFile("wishlist.txt");
    std::string name;
    double price;

    for (int i = 0; i < 3; i++) {
        std::cout << "Enter product " << i + 1 << " name: ";
        std::cin >> name;
        std::cout << "Enter price: ";
        std::cin >> price;
        outFile << name << " " << price << "\n";
    }
    outFile.close();
    std::ifstream inFile("wishlist.txt");
    std::cout << "\n--- Wishlist Tracker ---\n";
    while (inFile >> name >> price) {
        std::cout << "Product: " << name << " | Price: $" << price << "\n";
    }
    inFile.close();
}

// task 5

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile("insta_followers.txt");
    std::string username;
    int count = 0;

    if (inFile.is_open()) {
        
        while (std::getline(inFile, username)) {
            count++;
        }
        inFile.close();
        std::cout << "Total followers: " << count << "\n";
    } else {
        std::cout << "Error: Could not open insta_followers.txt\n";
    }

}
