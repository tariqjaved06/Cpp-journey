// Function: Array as input    we cannot declare the array as a general number of elements in it and also we use the global variable for the input of the number of elements of array and global variables always occupy the memory slot while the other variable occupy the memory for the small time beinh only when the function processes 
// int en=5
// int arr_sum(int ex[en])   this cannot be allow in c plus plus so the given below method is declare the number of values of array 
// int arr_sum(int ex[], int eN)  ex show the array and eN show number of elements
#include<iostream>
using namespace std;
int arr_sum(int ex[], int eN)
{
    int sum=0;
    
    for(int j=0;j<=eN-1;j++)
    {
    	sum=sum + ex[j];
    		
	}
    return sum;
}
int main()
{
    cout<<".......Program to learn a ARRAY......."<<endl<<endl;
    
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

    cout<<"\n\nThe sum of all the values in the array:"<< arr_sum(x,N);
}