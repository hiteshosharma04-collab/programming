#include <iostream>
#include <string>
using namespace std;

//  TASK 1
class SocialMediaUser {
public:
    string username;
    int followers;

    SocialMediaUser(string uname, int f) {
        username = uname;
        followers = f;
    }

    void displayProfile() {
        cout << "Username: " << username << ", Followers: " << followers << endl;
    }
};

// TASK 2
class YouTuber : public SocialMediaUser {
public:
    string channelName;

    YouTuber(string uname, int f, string cName) : SocialMediaUser(uname, f) {
        channelName = cName;
    }

    void uploadVideo(string title) {
        cout << "Video [" << title << "] uploaded to [" << channelName << "]" << endl;
    }
};

// --- TASK 3: Hierarchical Inheritance - Part 1 (Podcaster) ---
class Podcaster : public SocialMediaUser {
public:
    string podcastName;

    Podcaster(string uname, int f, string pName) : SocialMediaUser(uname, f) {
        podcastName = pName;
    }

    void publishEpisode(string episodeTitle) {
        cout << "Episode [" << episodeTitle << "] published on [" << podcastName << "]" << endl;
    }
};

//  task 4
class GamingYouTuber : public YouTuber {
public:
    GamingYouTuber(string uname, int f, string cName) : YouTuber(uname, f, cName) {}

    void streamGame(string gameName) {
        cout << "[" << username << "] is now streaming [" << gameName << "] on [" << channelName << "]" << endl;
    }
};

//  TASK 5
class InstagramInfluencer : public SocialMediaUser {
public:
    InstagramInfluencer(string uname, int f) : SocialMediaUser(uname, f) {}

    void postStory(string storyTitle) {
        cout << "[" << username << "] posted a new story: [" << storyTitle << "]" << endl;
    }
};

