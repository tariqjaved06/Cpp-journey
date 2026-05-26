#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream inputFile("input.txt");
    string line;
    int lineCount = 0;

    if (!inputFile.is_open()) {
        cout << "Error: Could not open the file 'input.txt'" << endl;
    }

    while (getline(inputFile, line)) {
        lineCount++;
    }

    inputFile.close();

    cout << "Total number of lines in the file: " << lineCount << endl;

}