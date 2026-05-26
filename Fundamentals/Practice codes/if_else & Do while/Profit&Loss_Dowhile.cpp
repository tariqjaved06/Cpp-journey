#include <iostream>
using namespace std;
int main() 
{
	char choice;
	do
	{
    float income, cost, profit, loss;
    cout << "Enter Income: ";
    cin >> income;
    cout << "Enter Cost: ";
    cin >> cost;

    if (income >= cost) 
	{
        profit = income - cost;
        cout << "Profit: " << profit << endl;
    } 
	else if (income <=cost )
	{
        loss = cost - income;
        cout << "Loss: " << loss << endl;
    }
    cout<<"Continue (Y/N):";
	cin>>choice;
	}
	while(choice=='Y' );
}