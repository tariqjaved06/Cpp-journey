#include<iostream>
using namespace std;
int main()
{
	int N;
		cout<<"Enter the length of Array:";
		cin>>N;
	int x[N];
	for (int i=0; i<=N-1; i++)
	{
		cout<<"Enter the Values at index"<<i<<":";
		cin>>x[i];
	}
	cout<<"Inputed Array:"<<endl<<"\t\t";
	cout<<"[";
	for (int i=0; i<=N-1; i++)
	{
		cout<<x[i];
		if(i<N-1)
		{
			cout<<",";	
		}
		
	}
	cout<<"]";

    cout << endl;
    cout << "Even numbers are: ";
    for (int i = 0; i <= N - 1; i++)
    {
        if (x[i] % 2 == 0)
        {
            cout << x[i] << " ";
        }
    }

    cout << endl;
    cout << "Odd numbers are: ";
    for (int i = 0; i <= N - 1; i++)
    {
        if (x[i] % 2 != 0)
        {
            cout << x[i] << " ";
    	}
    }

}