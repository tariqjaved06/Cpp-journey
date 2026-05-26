// Pointers: Variable which stores memory address of another variable

#include<iostream>
using namespace std;
int main()
{
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;
    
    
    int* ptr_var1 = &var1;
    int* ptr_var2 = &var2;
    int* ptr_var3 = &var3;
    
    // cout<<"Memory Address of var1: " <<&var1<<endl;
    // cout<<"Memory Address of var2: " <<&var2<<endl;
    // cout<<"Memory Address of var3: " <<&var3<<endl;
    
    // this is called as referncing in which we access memory location by the help of pointers
    cout<<"Memory Address of var1: " <<ptr_var1<<endl;
    cout<<"Memory Address of var2: " <<ptr_var2<<endl;
    cout<<"Memory Address of var3: " <<ptr_var3<<endl;


    // this is called as dereferncing in which we change data at the give memory location by the help of pointers
    //this will give me the value change at the memory location which i form
    * ptr_var1 = 7;   
    
    cout<<"\n\nModified value of var1: " <<var1<<endl;


}