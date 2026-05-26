	//File Handling: //output file stream is like a data type(ofstream)
#include<string.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int x=2,y=4;
	ofstream myfile("o.txt");   
	
	if(myfile.is_open())
	{
		myfile<<"A quick brown fox jump over a lazy dog";
		myfile<<"\n";
		myfile<<x+y;
	}
	else if(!myfile.is_open())
	{
		cout<<"Unable to open the file";
		
	}
	
	myfile.close();
	
	ifstream ourfile("o.txt");  //ifstream(input file stream)
	
	string line;
	if(ourfile.is_open())
	{
		getline(ourfile,line);
		cout<<line<<endl;
	}
	ourfile.close();
		
		
	
		
		
}