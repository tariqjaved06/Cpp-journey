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
    
    
    int check_x=x<10;
    
    cout<<"\n x<10? \t"<<check_x;
    
    int check_y=y==5;
    
    cout<<"\n y=5? \t"<<check_y<<endl;
    

    //Incremntal and  Decremental Statement  (it is implement only on if we add/remove 1 in original value)

    x++;  //Equvilent to x=x+1 or x+=1
    cout<<"\n\n";
    cout<<"the incremented value of x="<<x;

    x--;  //Equvilent to x=x-1 or x-=1
    cout<<"\n\n";
    cout<<"the decremented value of x="<<x<<endl;
    
    // Accumulation (mathmatical opearators implement on two variables)
    int sum=0;
    sum=sum+x;
    sum=sum+y;
    sum=sum+z;
    cout<<"\n the accumalated value of sum="<<sum;
}
