#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("numbers.txt");
    
    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    for (int i = 1; i <= 100; i++) {
        outFile << i << endl;
    }
    outFile.close();

    ifstream inFile("numbers.txt");
    int number;

    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
       
    }

    cout << "Numbers from file:" << endl;
    for (int i = 1; i <= 100; i++) {
        inFile >> number;
        cout << number << endl;
    }
    inFile.close();

}