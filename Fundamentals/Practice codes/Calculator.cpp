#include <iostream>
#include <math.h> 
using namespace std;

// funtion for sum
int process(int ex[], int eN)
{
    int sum = 0;

    for (int j = 0; j <= eN - 1; j++)
    {
        sum = sum + ex[j];
    }
    return sum;
}
// funtion for Average
int process(int n, int ar[])
{
    return process(ar, n) / n;
}
// funtion for Percentage
int process(int m, int r[], int v)
{
    int per;
    for (int j = 0; j <= m - 1; j++)
    {
        per = (r[j] * 100) / 10;
        return per;
    }
}
// function for Maximum number in Array
int process(int m, int v, int r[])
{
    int max = r[0];
    for (int j = 1; j <= m - 1; j++)
    {
        if (max < r[j]) 
            max = r[j];
    }
    return max;
}
// function for Minimum number in Array
int process(int r[], int v, int m)
{
    int min = r[0];
    for (int j = 1; j <= m - 1; j++)
    {
        if (min > r[j])
            min = r[j];
    }
    return min;
}

// Function to calculate standard deviation
int process(int x[], int N, int m , int v)
{
int sd=0;
    
    for(int j=0;j<=N-1;j++)
    {
    	sd=sd+(x[j]-process(N, x))*(x[j]-process(N, x));    //sum/N is average
    		
	}
		 sd=sd/N;
		 sd=sqrt(sd);
    return sd;
}

// Main function
int main()
{
    cout << ".......Program to learn a ARRAY......." << endl
         << endl;

    int N;
    cout << "Number of values:";
    cin >> N;

    int x[N];
    for (int j = 0; j <= N - 1; j++) //<=N-1 is equal to <N
    {
        cout << "Enter the values for ARRAY at index " << '['<< j <<']' << ":";
        cin >> x[j];
        cout << endl;
    }
    char p;
    cout << "\n Enter the kind of processing you want to do(+,a,p,M,m,S):";
    cin >> p;
    switch (p)
    {
    case '+':
        cout << "\n\nThe sum of all the values in the array:" << process(x, N);
        break;
    case 'a':
        cout << "\n\n Average of the all the values of the Array:" << process(N, x);
        break;
    case 'p':
        cout << "\n\nPercentage of Every Element out of 10:\t" << process(N, x, 7);
    case 'M':
        cout << "\n\nThe largest number in array:" << process(N, 7, x);
    case 'm':
        cout << "\n\nThe largest number in array:" << process(x, 7, N);
        break;
    case 'S':
        cout << "\nStandard Deviation: " << process(x, N , 6 , 8);
        break;
    default:
        cout << "\nInvalid choice!";
        break;
    }

}
