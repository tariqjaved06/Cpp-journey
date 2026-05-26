#include<iostream>
using namespace std;
int main()
{
	cout<<"-----Program to learn 2D array-----";
	
	int N,M,P,O;   
	
	//loop for order validation
	while(1)
	{
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

    // loop for matrix multiplication
    for (int i = 0; i <= N-1; i++) 
    {
        for (int j = 0; j <= O-1; j++) 
        {
            z[i][j] = 0;  
            for (int k = 0; k <= M-1; k++) 
            {
                z[i][j] += x[i][k] * y[k][j];  
            }
        }
    }

    cout << "\nResultant array is as follows:" << endl;
    for (int i = 0; i <= N-1; i++)
    {
        for (int j = 0; j <= O-1; j++) 
        {
            cout << z[i][j] << "\t";  
        }
        cout << endl;
    }
}