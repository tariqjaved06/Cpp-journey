#include<iostream>
using namespace std;
int main()
{
    int y, x, a, b, c;
    
    while (1) 
    {
        cout << "Enter the Coefficient of X^2: ";
        cin >> a;
        cout << "Enter the Coefficient of X: ";
        cin >> b;
        cout << "Enter the constant: ";
        cin >> c;
        cout << "Enter the value of X: ";
        cin >> x;

        if (a == 0) 
        {
            cout << "This is not a quadratic equation.\n";
            cout<<"Re-Enter the Values";
    	}
    	else if (a!=0)
    	{
    		break; 
		}
    	
    }
        y = a * x * x + b * x + c; 
        
        cout << "Quadratic equation result: " << y << endl;
}
