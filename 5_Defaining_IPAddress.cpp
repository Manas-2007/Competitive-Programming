//Write a program of an IP address in which replace the '.' with "[.]" part..........

#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter Address : ";
    cin>>s;
    string address="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            address=address+"[.]";          
        }
        else
        {
            address=address+s[i];           //Implicit Type Conversion from char to string......
        }
    }
    cout<<address<<endl;
    return 0;
}