#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    void setTitle(string t) { title = t; }
    string getTitle() { return title; }
    
    void setArtist(string a) { artist = a; }
    string getArtist() { return artist; }
};

int main() {
    Song mySong;
    mySong.setTitle("Shape of You"); 
    mySong.setTitle("Perfect");      
    cout << "Updated Title: " << mySong.getTitle() << endl;
}

// task 2

#include <iostream>
using namespace std;

class InstaStory {
protected:
    int storyViews = 500;
};

class SponsoredStory : public InstaStory {
public:
    void displayViews() {
        cout << "Sponsored Story Views: " << storyViews << endl;
    }
};

int main() {
    SponsoredStory advStory;
    advStory.displayViews();
}

#include <iostream>
using namespace std;

class Product {
public:
    virtual void upload() = 0;
};

class Electronics : public Product {
public:
    void upload() override {
        cout << "Electronics item uploaded successfully with warranty details." << endl;
    }
};

class Clothing : public Product {
public:
    void upload() override {
        cout << "Clothing item uploaded successfully with size chart info." << endl;
    }
};

int main() {
    Electronics laptop;
    Clothing tShirt;
    
    laptop.upload();
    tShirt.upload();
}


// task 4

#include <iostream>
#include <string>
using namespace std;

class UserProfile {
private:
    string phoneNumber; 
public:
    
    void setPhoneNumber(string phone) {
        phoneNumber = phone;
    }

    
    string getPhoneNumber() {
        return phoneNumber;
    }
};

int main() {
    UserProfile user;
    user.setPhoneNumber("+91-9408774885");
    cout << "User Phone: " << user.getPhoneNumber() << endl;
    return 0;
}

