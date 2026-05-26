#include <iostream>
#include<string>
using namespace std;
int main()
{
	float dia, h, area , pi = 3.14;
	char c;
	do
	{
		cout << "please enter a value of dia:";
		cin >> dia;
		cout << "please enter a value of h:";
		cin >> h;
	
		float r = dia / 2;

		if (r > 0 && r < 100 && h > 0 && h < 100)
		{
			cout<<"The value of Diamter is:"<<dia<<"cm^2"<<endl;
			cout<<"The value of height is:"<<h<<"cm^2"<<endl;
			cout<<"The value of radius is:"<<r<<"cm^2"<<endl;

			area = (2 * pi * r * h) + (2 * pi * (r * r));
			cout << "SA =" << area << "cm^2"<<endl;
		}
		else if (r > 0 && r < 100 && h > 0 && h < 100)
		{
			cout << "please enter value in range 0 to 100 your input is invalid";
		}
		cout << "do you want to continue(y/n):";
		cin >> c;
	} while (c=='y' || c=='Y');
}
