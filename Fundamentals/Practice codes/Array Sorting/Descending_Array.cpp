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
		cout<<"Enter the Values at index "<<i<<":";
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
	
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (x[i] < x[j])
            {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
	
	cout<<endl;
	cout<<"Descendig Array:"<<endl<<"\t\t";
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

}