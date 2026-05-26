//Array : Just like list
//1-D Matrix:[7 , 5 , 0 ,1 , 9 ,11]    x(0,4)
//Index       0   1   2  3   4   5
// Collection of varaibles   every variable Change at any time just like list
// first declared the type of element and also no of elements to writing the array
// then declare the values of element
#include<iostream>
using namespace std;
int main()
{
    cout<<".......Program to learn a ARRAY......."<<endl<<endl;
    
    int a=2 , b=6 , c=3;
    
    int x[6]={a , b , c , a*2 , c+1 , b*3};
    cout<<"[";
    for(int i=0;i<=5;i++)
    {
        // cout<<"The values of element at ARRAY index "<<i<<": "<<x[i]<<endl;
        cout<<x[i];
        if(i!=5)   //(i<5) equavilent  to  (i!=5)
        {
            cout<<"\t";
        }
    }
    cout<<"]";






}