    //2D array: just like a 2D matrix
	// x = [11  9        order 2x2
	//		3   5]		x[i][j] i=rows & j=columns
    //index  (0,0)  (0,1)
    //		 (1,0)  (1,1)
	//Multiplication: if one matrix has 2x2 and 2nd one has 2x1 then resultant 2x1
#include<iostream>
using namespace std;
int main()
{
	cout<<"-----Program to learn 2D array-----";
	
	int N,M,P,O;   //N no. of rows and M no. of columns for x
					//P no. of rows and O no. of columns for y
	
	//loop for order validation
	while(1)
	{
//		cout<<"\t Multiplication is not possible please Re-enter the order";
			cout<<"\n\nGive no of rows for x:";
			cin>>N;
			
			cout<<"\n\nGive no of columns for x:";
			cin>>M;
		
			cout<<"\n\nGive no of rows for y:";
			cin>>P;
			
			cout<<"\n\nGive no of columns for y:";
			cin>>O;
		if(M==P)
		{
			break;
		}
		else if(M!=P)
		{
			cout<<"\t The entered order order is not valid for Multiplication Please Re-Enter:";
			
		}
	}
	
	int x[N][M] ,y[P][O] ,z[N][O];
	
	
	cout<<"\n\n Enter Array Elements one by one in both Array: "<<endl;
	
	
	//loop for values of 2D array X	
	for(int i=0; i<=N-1 ; i++)
	{
		for(int j=0; j<=M-1 ; j++)
		{
		cout<<"\n\nEnter the value at index ("<<i<<","<<j<<")"<<":";
		cin>>x[i][j];
		}	
	}
	
	
	for(int i=0; i<=P-1 ; i++)
	{
		for(int j=0; j<=O-1 ; j++)
		{
		cout<<"\n\nEnter the value at index ("<<i<<","<<j<<")"<<":";
		cin>>y[i][j];
		}	
	}
	//loop for output of multiplication
	
	int sum=0;
	cout<<endl;
//	cout<<"_";
//	cout<<endl;
//	cout<<"|";
	for(int i=0; i<=N-1 ; i++)    
	{
		cout<<endl;
		for(int k=0; k<=O-1 ; k++)
			{
				sum=0;
			 	for(int j=0; j<=M-1 ; j++)
			 	{
					sum+=x[i][j]*y[j][k];
				}
				z[i][k]=sum;
			
			}
		cout<<"\n\n";
}