// string deal as a array
//use of getline because there is flaws in cin for string
#include<iostream>
using namespace std;
int main()
{
    string name;

    int N = name.length();

    cout<<"Please enter name: ";
    getline(cin , name);

    string inv_name = name;    //inv_name = HDMI (before processing) and IMDH(After processing)
    string s_name;
    for(int i=N-1  ; i>=0 ; i--)
    {               
        s_name = name[i];                                                         //     i
        inv_name.append(s_name);                                         // N-(N-1)-1 {0}  =  N-1
        cout<<"\n\n Inverted name is:"<<inv_name;                            // N-(N-2)-1 {1}  =  N-2
                                                                            // N-(N-3)-1 {2}  =  N-3
                                                                            // N-(N-4)-1 {3}  =  N
    }
    
    

}