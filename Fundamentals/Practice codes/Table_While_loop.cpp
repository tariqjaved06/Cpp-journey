#include<iostream>
using namespace std;

int tab(int x) 
{	
	for (int i = 1; i <= 10; i++) 
	{  
        cout << x << " x " << i << " = " << x * i << endl;
    }
}

int main()
{
	cout << "........program to compute table of a number...." << endl;
	
	char a;
	int x;

	while (true) 
	{
		cout << "\n\nPlease enter the number: ";
		cin >> x;
		cout << endl;

		tab(x);

		cout << "Do you want to quit this program (y/n)? ";
		cin >> a;

		if (a == 'y') {
			break;
		}
	}

}
