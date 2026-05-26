//File Handling: //output file stream is like a data type(ofstream) it is used to write something in the file 
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
	int x=2,y=4;
	ofstream myfile("o.txt");   
	
	if(myfile.is_open()) //it is compulsory when we wanted to open the file that are already form
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
	
	ifstream ourfile("o.txt");  //ifstream(input file stream) it used to read the file 
	
	string line;
	if(ourfile.is_open())
	{
		while(getline(ourfile,line)) //this loop is for printing the lines and we donot know how many lines in the txt file
		{							//get line is used to store txt file every line into variable and it syntax is like getline(filename,variable)
			cout<<line<<endl;
		}
	}
	ourfile.close();		
}	

//Alternate of the while loop to read every line
//	if(ourfile.is_open())
//	{
//		getline(ourfile,line)   
//		cout<<line<<endl;
//		getline(ourfile,line) 	
//	}


