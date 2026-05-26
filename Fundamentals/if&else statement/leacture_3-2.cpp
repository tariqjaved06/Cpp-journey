#include<iostream>
using namespace std;
int main()
{
cout<<"..........program to find out if the entered statement is even,odd....";
int x;
cout<<"\n\n please enter the number:";
cin>>x;
cout<<endl;
if(x==0)
{
    cout<<"The entered number is neither even nor odd please reenter:";
    cin>>x;
    cout<<endl;
}
if(x%2==0)
{
    cout<<"The entered number is even!";
}
//Method 1
// else if (x%2==1)
// {
//     cout<<"The entered number is odd!";   
// }

//Method 2
else if (x%2!=0)
{
    cout<<"The entered number is odd!";   
}


}