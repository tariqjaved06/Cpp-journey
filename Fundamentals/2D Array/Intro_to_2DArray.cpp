    //2D array: just like a 2D matrix
	// x = [11  9        order 2x2
	//		3   5]		x[i][j] i=rows & j=columns
    //index  (0,0)  (0,1)
    //		 (1,0)  (1,1)

#include<iostream>
using namespace std;
int main()
{
	cout<<"-----Program to learn 2D array-----";
	
	int N,M;   //N no. of rows and M no. of columns
	
	cout<<"\n\nGive no of rows;";
	cin>>N;
	
	cout<<"\n\nGive no of columns;";
	cin>>M;

	int x[N][M];
	
	cout<<"\n\n Enter Array Elements one by one: "<<endl;
	
	
	//loop for values of 2D array	
	for(int i=0; i<=N-1 ; i++)
	{
		for(int j=0; j<=M-1 ; j++)
		{
		cout<<"\n\nEnter the value at index ("<<i<<","<<j<<")"<<":";
		cin>>x[i][j];
		}	
	}
	
	//loop for output
	
	cout<<endl;
	cout<<"_";
	cout<<endl;
	cout<<"|";
	
	for(int i=0; i<=N-1 ; i++)
	{
		cout<<endl;
		for(int j=0; j<=M-1 ; j++)
		{
			cout<<x[i][j]<<"\t";
		}
		
		cout<<"\n\n";
	}
	
	
	
}