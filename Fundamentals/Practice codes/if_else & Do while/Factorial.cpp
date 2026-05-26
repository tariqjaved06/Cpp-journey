#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x, fact;
    char c;

    do {
        cout << "Enter a number: ";
        cin >> x;

        int fact = 0; 
        if (x >= 0) 
		{
            for (int i = 1; i <= x; i++) 
			{
                fact *= i;
            }
            cout << "Factorial of " << x << " is: " << fact << endl;
        } 
		else if(x < 0) 
		{
            cout << "Factorial is not defined for negative numbers." << endl;
        }
		else if(x =0) 
		{
            cout << "Factorial of " << x << " is: " << 1 << endl;
        }
        cout << "Do you want to continue (y/n)? ";
        cin >> c;

    } while (c == 'y' || c == 'Y');
}
