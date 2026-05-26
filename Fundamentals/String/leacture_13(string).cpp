// string deal as a array
//use of getline because there is flaws in cin for string
#include<iostream>
using namespace std;
int main()
{
    string first_name;
    string last_name;
    string full_name;

    cout<<"Please enter first_name: ";
    getline(cin , first_name);//cin>>first_name
    
    cout<<"Please enter last_name: ";
    getline(cin , last_name);//cin>>last_name


    full_name.append(first_name);
    full_name.append(" ");
    full_name.append(last_name);

    cout<<"\n\n  The full name is:"<<full_name;
    cout<<"\n\n  The full name is:"<<full_name[3];
    cout<<"\n\n  The full name is:"<<full_name.length();






}