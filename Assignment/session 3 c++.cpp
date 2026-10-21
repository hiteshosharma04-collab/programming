#include <iostream>
using namespace std;
class Playlist {
public:
    Playlist() { cout << "My Favourites created"; }
};
int main() 
{ Playlist p; }

// task 2 

#include <iostream>
using namespace std;
class Product {
public:
    Product(string n, int p, float r) { cout << n << " " << p << " " << r; }
};
int main() { Product p("Laptop", 50000, 4.5); }

// task 3

#include <iostream>
using namespace std;
class Movie {
public:
    string name;
    Movie(string n) : name(n) {}
    Movie(const Movie &m) : name(m.name) {}
};
int main() { Movie m1("Avatar"); Movie m2(m1); cout << m2.name; }

// task 4

#include <iostream>
using namespace std;
class Ticket {
public:
    ~Ticket() { cout << "Saving your ticket"; }
};
int main() { Ticket t; }

// task 5

#include <iostream>
using namespace std;
class Playlist {
public:
    ~Playlist() { ofstream f("autosave.txt"); f << "My Favourites"; }
};
int main() { Playlist p; }
