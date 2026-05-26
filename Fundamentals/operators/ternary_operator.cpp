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
    //Conditional operators: ?:
    //Data type:character
    char check_d=day>=1 && day<=31?'T':'F';
    cout<<"\n The entered day lies within acceptable range?"<<check_d<<endl;
    char check_m=month>=1 && month<=12?'T':'F';
    cout<<"\n The entered Month lies within acceptable range?"<<check_m<<endl<<endl;

    //Data type:boolean
    
    bool check_d1=day>=1 && day<=31?1:0;
    cout<<"\n The entered day lies within acceptable range?"<<check_d1<<endl;
    bool check_m1=month>=1 && month<=12?1:0;
    cout<<"\n The entered Month lies within acceptable range?"<<check_m1<<endl<<endl;
    
    //Data type:string
    
    string check_d2=day>=1 && day<=31?"Right":"wrong";
    cout<<"\n The entered day lies within acceptable range?"<<check_d2<<endl;
    string check_m2=month>=1 && month<=12?"Right":"wrong";
    cout<<"\n The entered Month lies within acceptable range?"<<check_m2<<endl<<endl;

}