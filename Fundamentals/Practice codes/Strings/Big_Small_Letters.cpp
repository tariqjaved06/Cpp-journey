#include <iostream>
#include <string>
using namespace std;

string firstLetterBig(string s) {
    if (s[0] >= 'a' && s[0] <= 'z') {  
        s[0] =  int(s[0]) - 32;  
    }
    return s;
}

string allBig(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {  
            s[i] -= 32;  
        }
    }
    return s;
}

string allSmall(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {  
            s[i] += 32;  
        }
    }
    return s;
}

int main() {
    string text;
    int choice;
    
    cout << "Enter your text: ";
    getline(cin, text);
    
    cout << "\nWhat do you want to do?\n";
    cout << "1. Capitalize first letter\n";
    cout << "2. MAKE ALL LETTERS BIG\n";
    cout << "3. make all letters small\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;
    
    switch(choice) {
        case 1: cout << firstLetterBig(text); break;
        case 2: cout << allBig(text); break;
        case 3: cout << allSmall(text); break;
        default: cout << "Invalid choice!";
    }
    
}