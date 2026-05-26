#include<iostream>
using namespace std;
int main()
{
    cout<<".......Program to learn a ARRAY......."<<endl<<endl;
    
    int a=2 , b=6 , c=3;
    int N;
    cout<<"Number of values:";
    cin>>N;

    int x[N];
    for(int j=0;j<=N-1;j++)   //<=N-1 is equal to <N
    {
        cout<<"Enter the values for ARRAY at index "<<j<<":";
        cin>>x[j];
        cout<<endl;
    }
    
    
    //Sum: Sum all the elements of the array
    //Accumulation: Sum = Sum+x   Sum+x[0]=x[0]   Sum=Sum+x[1]
    
    
    float sum=0;
    
    for(int j=0;j<=N-1;j++)
    {
    	sum=sum+x[j];
    		
	}
    cout<<"\n\nThe sum of all the values in the array:"<<sum;
    
    
	//Average: Sum of values/no. of values
	
	cout<<"\n\n Average of the all the values of the Array"<<sum/N;
	
	//Percentage o Every Element out of 10: x[i]/10*100

	cout<<"\n\n  ............Percentage of Every Element out of 10..........";
	
	float per;
    
    for(int j=0;j<=N-1;j++)
    {
    	per=(x[j]*100)/10;
    cout<<"\n\nPercentage of Every Element out of 10:\t"<<per;
	}
	
	
//	Maximum: if x[0]<x[1] , max=x[1]  x[1]<x[2]  ,max=x[2]

	int max=x[0];
//	[ 7 , 1 , 9 , 10 , 8 ,0 ]
//	  0   1   2   3   4 
	for(int j=1;j<=N-1;j++)
    {
    	if(max<x[j])        //1: max=x[0] , 2: max = x[2] , 3: max = x[3]  , 4: max=x[3] ,5: max=x[3]
    		max = x[j];
	}
	cout<<"\n\nThe largest number in array:"<<max;
	
	
		int min=x[0];
//	[ 7 , 1 , 9 , 10 , 8 ,0 ]
//	  0   1   2   3   4 
	for(int j=1;j<=N-1;j++)
    {
    	if(min>x[j])        //1: max=x[0] , 2: max = x[2] , 3: max = x[3]  , 4: max=x[3] ,5: max=x[3]
    		min = x[j];
	}
	cout<<"\n\nThe Smallest number in array:"<<min;



}



