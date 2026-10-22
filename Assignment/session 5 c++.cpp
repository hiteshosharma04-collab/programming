#include <iostream>
#include <string>

class PaymentProcessor {
public:
    
    void processPayment(double amount) {
        std::cout << "Version 1 Called (Only Amount). Final Amount: $" << amount << "\n";
    }

    void processPayment(double amount, std::string couponCode) {
        double finalAmount = amount - 10; // $10 Discount example
        std::cout << "Version 2 Called (With Coupon " << couponCode << "). Final Amount: $" << finalAmount << "\n";
    }
};

int main() {
    PaymentProcessor pp;
    pp.processPayment(100.0);
    pp.processPayment(100.0, "SAVE10");
}

// task 2

#include <iostream>
class SocialMediaUploader {
public:
    virtual void uploadContent() {
        std::cout << "Uploading content to social media...\n";
    }
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        std::cout << "Instagram: Uploading Reel/Post with filters.\n";
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        std::cout << "YouTube: Uploading 16:9 Video with thumbnail.\n";
    }
};

int main() {
    SocialMediaUploader* uploader1 = new InstagramUploader();
    SocialMediaUploader* uploader2 = new YouTubeUploader();

    uploader1->uploadContent(); // Instagram ka chalega
    uploader2->uploadContent(); // YouTube ka chalega

    delete uploader1; delete uploader2;
}


// task 3

#include <iostream>
#include <string>

class FlipkartSearch {
public:
    void searchProduct(std::string name) {
        std::cout << "Searching for '" << name << "' across all categories.\n";
    }

    void searchProduct(std::string name, std::string category) {
        std::cout << "Searching for '" << name << "' inside '" << category << "' category.\n";
    }
};

int main() {
    FlipkartSearch fs;
    fs.searchProduct("iPhone 15");
    fs.searchProduct("iPhone 15", "Electronics");
}

// task 4

#include <iostream>
#include <string>

class MusicPlayer {
public:
    virtual void play(std::string song) {
        std::cout << "Streaming on Spotify: " << song << "\n";
    }
};

class SpotifyPlayer : public MusicPlayer {
public:
    void play(std::string song) override {
        std::cout << "Playing: " << song << "\n";
    }
};

int main() {
    // Base class pointer holding Derived class object
    MusicPlayer* player = new SpotifyPlayer(); 
    player->play("Starboy"); 

    delete player;
}
