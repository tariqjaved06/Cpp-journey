#include<iostream>  
using namespace std;
int main()   
{
		
	int x , z;  
	x=10;	
	
	int y=5; 
	
	z=x+y/2*8;  
   
    cout<<"Result="<<z;
    
    cout<<"\n";
    
    cout<<endl;
    
    int maaz_106=z%2;
    
    cout<<"\t Result%2 ="<<maaz_106<<endl;
    
    // Relational operators: < , > , <= , >= , != ,==
    
    bool check_x=x<10;
    
    cout<<"\n x<10? \t"<<check_x;
    
    bool check_y=y==5;
    
    cout<<"\n y=5? \t"<<check_y;
    
    int check_x1=x<10;
    
    cout<<"\n x<10? \t"<<check_x1;
    
    int check_y1=y==5;
    
    cout<<"\n y=5? \t"<<check_y1<<endl;
    
    // Logic operators:&&(AND logic operator),||(OR logic operator), !(NOT logic operator)
    int day;
    cout<<"Enter Day:";
    cin>>day;

    bool check_day=day>=1 && day<=31;

    cout<<"\n The entered day is valid?"<<check_day<<endl<<endl;

    int month;
    cout<<"Enter month:";
    cin>>month;

    bool check_month=month>=1 && month<=12;

    cout<<"\n The entered month is valid?"<<check_month<<endl<<endl;

    
}
