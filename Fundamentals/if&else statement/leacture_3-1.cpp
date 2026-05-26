// conditional statement:if ,else if , use o else not allowed

#include<iostream>
using namespace std;;
int main()
{
cout<<"..........program to fiind out if the entered statement is positive , negative or equal to 0....";
int x;
cout<<"\n\n please enter the number:";
cin>>x;
if(x>0)
{
    cout<<"the entered number is positive!";

}
else if (x<0)
{
    cout<<"the entered number is negative!";
    
}
else if(x==0)
{
    cout<<"the entered number is equal to zero!";
    
}
}