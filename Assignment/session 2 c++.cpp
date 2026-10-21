#include <iostream>
using namespace std;
class Playlist {
public:
    string name, createdOn;
    bool isPublic;
};
int main() {
    Playlist p = {"Songs", "21-10-2026", true};
    cout << p.name << " " << p.createdOn << " " << p.isPublic;
}

// task 2

#include <iostream>
using namespace std;
class Playlist {
public:
    bool isPublic = true;
    void togglePublic() {
        isPublic = !isPublic;
    }
};
int main() {
    Playlist p;
    p.togglePublic();
    cout << p.isPublic << endl;
    p.togglePublic();
    cout << p.isPublic;
}

// task 3

#include <iostream>
using namespace std;
class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;
    void markDelivered() {
        isDelivered = true;
        cout << "Delivered";
    }
};
int main() {
    FoodOrder f;
    f.orderId = 101;
    f.restaurantName = "Pizza";
    f.markDelivered();
}

// task 4

#include <iostream>
#include <vector>
using namespace std;
class Playlist {
public:
    vector<string> songs;
    void addSong(string s) {
        songs.push_back(s);
    }
};
int main() {
    Playlist p;
    p.addSong("Song1");
    p.addSong("Song2");
    p.addSong("Song3");
    for (string s : p.songs) cout << s << endl;
}

// task 5
#include <iostream>
using namespace std;
class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;
    FoodOrder(int id, string name, bool d) {
        orderId = id;
        restaurantName = name;
        isDelivered = d;
    }
    FoodOrder(const FoodOrder &f) {
        orderId = f.orderId;
        restaurantName = f.restaurantName;
        isDelivered = f.isDelivered;
    }
};
int main() {
    FoodOrder f1(101, "Pizza", false);
    FoodOrder f2(f1);
    cout << f2.orderId;
}                                                     


