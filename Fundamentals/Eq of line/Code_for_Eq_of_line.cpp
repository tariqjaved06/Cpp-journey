#include<iostream>
using namespace std;

float s_line(float M,float C,float X)
{
	float y=M*X+C;
	return y;
}
int main()
{
	int N;
	
	float X,xi,xf,m,c,dx=0.5;
	
	cout<<"Please enter the Values of m:";
	cin>>m;
	
	cout<<"Please enter the Values of c:";
	cin>>c;
	
	cout<<endl;
	
	cout<<"Enter the First value:";
	cin>>xi;
	
	cout<<"Enter the last value:";
	cin>>xf;
	
	cout<<endl;
	
	N=((xf-xi)/dx)+1;
	
	cout<<endl;
	
	float x[N],y[N];	
	
	X=xi;
	
	for(int i=0;i<=N-1;i++)
	{
		x[i]=X;   //[8,9,10,11,12,13,14]
	//	  1  9
		y[i]=s_line(m,c,x[i]);
		X=X+dx;
		cout<<"\nx = "<<','<<x[i]<<" y = "<<y[i]<<endl;
		
	}
	
}