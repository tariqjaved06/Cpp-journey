#include<iostream>
using namespace std;

int main() 
{
	string name;
	cout<< "your name:"<<endl;
	cin>>name;

	cout<<"Name"<<name<<endl;
    string gender;
    cout << "Enter gender : ";
    cin >> gender;

	string check_gender=gender == "M" || gender == "F"? "This is right" : "This is wrong";
    cout << check_gender << endl;

    int day;
    cout << "Enter the day : ";
    cin >> day;

    string check_day = day >= 1 && day <= 31 ? "This is right" : "This is wrong";
    cout << check_day << endl;

    int month;
    cout << "Enter the month : ";
    cin >> month;

    string check_month = month >= 1 && month <= 12 ? "This is right" : "This is wrong";
    cout << check_month << endl;

    int year;
    cout << "Enter the year : ";
    cin >> year;

    string check_year = year >= 2000 && year <= 2005 ? "This is right" : "This is wrong";
    cout << check_year << endl;
	
	int percent;
	cout<<"Enter your intermmediate percentage:"<<endl;
	cin>>percent;
	string check_percent = percent >= 0 && year<= 100 ? "This is right" : "This is wrong";
    cout << check_percent << endl;
    
    string session;
    cout << "Enter session : ";
    cin >> session;

	string check_session=session == "FA" || session == "SP"? "This is right" : "This is wrong";
    cout << check_session << endl;
    
    int batch;
    cout << "Enter the batch : ";
    cin >> batch;

    string check_batch = batch >=20 || batch <= 21 ? "This is right" : "This is wrong";
    cout << check_batch << endl;
   
}
