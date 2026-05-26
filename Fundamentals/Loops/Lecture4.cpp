#include<iostream>

using namespace std;

int main()
{	
	int j = 11;
	//for(int j = 1; j <= 10; j++) , while loop equivalent is shown below:
	//while(j <= 10)
	do					//this is do while loop, do while loop will always run 1 time even if condition is false.
	{	
		cout<<"-----------------"<<endl;
		cout<<"   Table of "<<j<<endl;
		cout<<"-----------------"<<endl;
	
		for(int i = 1; i <= 10; i++)
		{
			cout<<j<<" x "<<i<<" = "<<j*i<<endl;
		}
		
		j++;
		
	}
	while(j <= 10);
}