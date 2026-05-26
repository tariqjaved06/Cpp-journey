
#include<iostream>

using namespace std;

int main()
{	
	int j = 1;
	while(1)		//while(1) means 1 == 1 similarly while(x) means x == 1, 0 is false non zero numbers in while() is true.
	
	{	
		cout<<"-----------------"<<endl;
		cout<<"   Table of "<<j<<endl;
		cout<<"-----------------"<<endl;
	
		for(int i = 1; i <= 10; i++)
		{
			cout<<j<<" x "<<i<<" = "<<j*i<<endl;
		}
		
		if(j == 10)break;
		
		j++;
		
	}
	

}