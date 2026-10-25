#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// task 1
class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    void displayDetails() {
        cout << "Title: " << title << " | Platform: " << platform 
             cout << " | Views: " << views << " | Status: " << status << endl;
    }
};
vector<Content> readFromFile() {
    vector<Content> list;
    ifstream file("content_list.txt");
    if (!file) return list; 

    Content temp;
    while (getline(file, temp.title)) {
        getline(file, temp.platform);
        file >> temp.views;
        file.ignore(); 
        getline(file, temp.status);
        list.push_back(temp);
    }
    file.close();
    return list;
}
void writeToFile(const vector<Content>& list) {
    ofstream file("content_list.txt");
    for (const auto& item : list) {
        file << item.title << "\n" << item.platform << "\n" 
             << item.views << "\n" << item.status << "\n";
    }
    file.close();
}

// task 2
void addContent() {
    ofstream file("content_list.txt", ios::app);
    Content c;

    cout << "\nEnter Title: ";
    cin.ignore();
    getline(cin, c.title);
    cout << "Enter Platform: ";
    getline(cin, c.platform);
    cout << "Enter Views: ";
    cin >> c.views;
    cout << "Enter Status (e.g., Pending, Completed): ";
    cin.ignore();
    getline(cin, c.status);

    file << c.title << "\n" << c.platform << "\n" << c.views << "\n" << c.status << "\n";
    file.close();
    cout << "Content added successfully!\n";
}

// task 3
void viewContentList() {
    vector<Content> list = readFromFile();
    if (list.empty()) {
        cout << "\nNo content ideas found.\n";
        return;
    }

    cout << "\n--- Content List ---\n";
    for (size_t i = 0; i < list.size(); i++) {
        cout << i + 1 << ". " << list[i].title << " (" << list[i].platform << ")\n";
    }
}

// task 4
void updateStatus() {
    vector<Content> list = readFromFile();
    if (list.empty()) {
        cout << "\nList is empty.\n";
        return;
    }

    viewContentList();
    int index;
    cout << "\nEnter the number to update status: ";
    cin >> index;

    if (index > 0 && index <= list.size()) {
        cout << "Enter new status: ";
        cin.ignore();
        getline(cin, list[index - 1].status);

        writeToFile(list); 
        cout << "Status updated successfully!\n";
    } else {
        cout << "Invalid number!\n";
    }
}


// task 5
void deleteContent() {
    vector<Content> list = readFromFile();
    if (list.empty()) {
        cout << "\nList is empty.\n";
        return;
    }

    viewContentList();
    int index;
    cout << "\nEnter the number to delete: ";
    cin >> index;

    if (index > 0 && index <= list.size()) {
        list.erase(list.begin() + (index - 1)); 

        writeToFile(list); 
        cout << "\nContent deleted successfully! Updated List:\n";
        viewContentList(); 
    } else {
        cout << "Invalid number!\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\n CREATOR DASHBOARD LITE ";
        cout << "\n1. Add Content Idea";
        cout << "\n2. View Content List";
        cout << "\n3. Update Content Status";
        cout << "\n4. Delete Content";
        cout << "\n5. Exit";
        cout << "\nEnter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: addContent(); break;
            case 2: viewContentList(); break;
            case 3: updateStatus(); break;
            case 4: deleteContent(); break;
            case 5: cout << "Exiting app...\n"; break;
            default: cout << "Invalid Choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
