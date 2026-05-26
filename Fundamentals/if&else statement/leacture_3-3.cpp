#include <iostream>  
using namespace std;

int main() {
    cout << "........program to compute table of a number...." << endl;

    int x;
    cout << "\n\n Please enter the number: ";
    cin >> x;
    cout << endl;

    while (x == 0) {  // Changed `if` to `while` to keep re-entering until valid
        cout << "The entered number is neither even nor odd. Please re-enter: ";
        cin >> x;
        cout << endl;
    }

    for (int i = 1; i <= 10; i++) {  // Fixed the loop syntax
        cout << x << " x " << i << " = " << x * i << endl;
    }

    return 0;  // Always return 0 in `main`
}
